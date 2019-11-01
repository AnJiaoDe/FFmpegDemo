//
// Created by Administrator on 2019/10/24 0024.
//

#ifndef FFMPEGDEMO_ENCODE_VIDEO_YUV_H264_H
#define FFMPEGDEMO_ENCODE_VIDEO_YUV_H264_H


#include <iostream>

extern "C" {
#include <libavcodec/avcodec.h>
#include "libavformat/avformat.h"
#include <libavutil/imgutils.h>
using namespace std;
}
/**
 *
 * @param avCodecContext
 * @param avFrame
 * @param avPacket
 * @param fileOut
 * @return 返回-1表示编码出错
 */
int encode(AVCodecContext *avCodecContext, AVFrame *avFrame, AVPacket *avPacket, FILE *fileOut) {
    int ret;
    if (avFrame)
        printf("Send frame %3"
               PRId64"\n", avFrame->pts);
    /**
 * 向编码器提供原始视频或音频帧。使用avcodec_receive_packet()检索缓冲的输出数据包。
     AVFrame包含要编码的原始音频或视频帧。帧的所有权由调用方保留，编码器不会写入该帧。
     编码器可以创建对帧数据的引用(如果帧是未被引用计数的，则复制它)。
     它可以是空的，在这种情况下，它被认为是一个刷新缓冲区的数据包。这意味着流的结束。如果编码器仍然有缓冲数据包，
     它将在这个调用之后返回它们。一旦进入刷新模式，额外的刷新数据包将被忽略，发送帧将返回AVERROR_EOF。
     对于音频：如果设置了AV_CODEC_CAP_VARIABLE_FRAME_SIZE，那么每个帧都可以有任意数量的采样。
     （viriable_frame:可变帧率，就是帧率随时间变化而不固定）
     如果没有设置，则frame->nb_samples 必须等于avctx->frame_size(最后一个除外)。
     最终帧可能小于avctx->Frame_size。
    @在成功时返回0，否则是负数错误代码：
     *AVERROR(EAGAIN)：在当前状态下不接受输入-必须用avcodec_receive_packet()读取输出
     * (一旦所有输出被读取，数据包应该被重新发送，并且调用不会在EAGAIN中失败)。
     *AVERROR_EOF：编码器已被刷新，没有任何新帧可以发送给它
     *AVERROR(EINVAL)：编解码器未打开，refcounted_frames未设置，它是解码器，或要求刷新
     *AVERROR(ENOMEM)：未能向内部队列添加数据包，或类似的其他错误：合法解码错误
 */
//    cout << "avcodec_send_frame++++++执行了208次（一共207帧图片，最后一次是flush）";
    ret = avcodec_send_frame(avCodecContext, avFrame);
    if (ret < 0) {
        fprintf(stderr, "Error sending a frame for encoding\n");
        return -1;
    }

    while (ret >= 0) {
//        cout << "avcodec_receive_packet++++++执行了415次（最后一次是flush）";
        /**
         *从编码器读取编码数据。
         * @param avctx编解码器上下文
         * @param avpkt请注意，该函数始终在执行任何其他操作之前会调用av_frame_unref()。
         * @return 0成功，否则负数错误代码：
         *AVERROR(EAGAIN):输出在当前状态中不可用-必须尝试发送输入
         *AVERROR_EOF：编码器已被完全flush，并且不再有输出数据包
         *AVERROR(EINVAL)：编解码器未打开，或者是编码器
         *其他错误:合法解码错误
         * 一次avcodec_send_frame要调用2次avcodec_receive_packet（avcodec_receive_packet返回==0说明还能继续接收数据），
         * 否则会丢帧，如果是flush,当然只是一次
         */
        ret = avcodec_receive_packet(avCodecContext, avPacket);
        if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
            return 0;
        else if (ret < 0) {
            fprintf(stderr, "Error during encoding\n");
            return -1;
        }
        printf("Write packet %3"
               PRId64" (size=%5d)\n", avPacket->pts, avPacket->size);
        //将AvPacket的data写入输出文件
        fwrite(avPacket->data, 1, avPacket->size, fileOut);
        //释放AvPacket*内存
        av_packet_unref(avPacket);
    }
    return 0;
}

int main_encode_video_yuv_h264(char *fileInPath, const char *fileOutPath, AVPixelFormat pix_fmt,int width, int height, int fps) {

    AVFormatContext *avFormatContextOut;
    AVStream *avStream;
    AVCodecContext *avCodecContext;
    AVCodec *avCodec;
    /*
     此结构体存储压缩数据（编码后的数据，编码的目的就是压缩数据，节省内存，提高存取效率和传输效率）。
     它通常由demuxers（解封装器，解封装可以得到编码的数据）导出，然后作为输入传递给解码器，或者作为编码器的输出接收，
     然后传递给muxers（封装器，封装可以将编码的数据封装为视频格式文件）。
     对于视频，通常应该包含一个压缩帧。对于音频，它可以包含几个压缩帧。
     编码器允许输出空数据包，没有压缩数据，只包含side数据(例如，在编码结束时更新一些流参数)。

     如果设置了数据包，则数据包数据将被动态分配，并且内存一直占有，
     直到对av_packet_unref()的调用将引用计数降至0。
     如果未设置buf属性，那么av_packet_ref()将创建一个副本，而不是增加引用计数。
     side数据总是使用av_malloc()分配，由av_packet_ref()复制，由av_packet_unref()释放。
   */
    AVPacket *avPacket;
    uint8_t *picture_buf;
    /**
     * 该结构描述解码后的(原始)音频或视频数据（它data属性用于存储原始数据）。avFrame必须使用AV_frame_alloc()分配内存。
     * 请注意，该函数仅分配AVFrame本身的内存，对其数据缓冲区进行管理必须通过其他方式（见下文）。
     * avFrame必须使用AV_frame_free()释放。
     * avFrame通常被分配一次，然后重复使用多次以持有不同的数据
     * （例如，单个AVFrame，用于保存从解码器解码得到的帧）。在这种情况下，
     * av_frame_unref()将释放任何由帧占据的内存，并在其下次使用之前将其重置为其原始清空状态。
     */
    AVFrame *avFrame;
    int y_size;
    /**
         打开名为“file_name”的文件作为stdio流。mode确定打开文件的模式，“share_flag”确定共享模式。
         支持的模式是"r"（读）、"w"（写）、"a"（添加），"r+"（读和写）、"W+"（读和写空）和"a+"（读和添加)。
         可以将""t""或"b"附加到模式字符串以请求文本、或二进制模式。
         成功时返回新打开的流的文件*；失败是返回Nullptr。
         rb 度二进制文件 wb写二进制文件
     */
    FILE *fileInput = fopen(fileInPath, "rb");   //Input raw YUV data
    FILE *fileOutput = fopen(fileOutPath, "wb");
    //为输出格式初始化AVFormatContext指针。
    avformat_alloc_output_context2(&avFormatContextOut, NULL, NULL, fileOutPath);
    //创建一个用于输出的AVStream指针对象
    avStream = avformat_new_stream(avFormatContextOut, 0);
    //由AVFormatContext的AVOutputFormat的AVCodecID查找已注册的编码器AVCodec
    avCodec = avcodec_find_encoder(avFormatContextOut->oformat->video_codec);
    if (!avCodec) {
        printf("Can not find encoder! \n");
        goto end;
    }
    //根据编码器AVCodec为AVCodecContext指针对象分配内存，并且将其属性初始化为默认值
    avCodecContext = avcodec_alloc_context3(avCodec);
    //设置AVCodecContext的AVMediaType为视频
    avCodecContext->codec_type = AVMEDIA_TYPE_VIDEO;
    //设置AVCodecContext的像素格式为YUV420P,
    // planar YUV 4:2:0, 12bpp, (1 Cr & Cb sample per 2x2 Y samples)
    //YUV 4:2:0采样，每四个Y共用一组UV分量,一个YUV占8+2+2 = 12bits(12bpp:12bit per pixel) 1.5个字节
    avCodecContext->pix_fmt = pix_fmt;
    //设置AVCodecContext的宽高
    avCodecContext->width = width;
    avCodecContext->height = height;
    /**
     time_base是表示要被显示的帧的时间戳的基本时间单位(以秒为单位)。对于固定的fps(帧率，,一帧/S,frame per senconds)内容，
     时基应该是1/framerate，时间戳增量应该是相同的1。通常，但并不总是与视频的帧速率或场速率互为倒数。
     如果帧速率不是固定的，则1/time_base不是平均帧速率。和容器一样，基本流也可以存储时间戳，
     1/time_base是指定这些时间戳的单位。
     编码时：必须调用者设置。
     *-解码时：解码器的time_base已经被废弃，用framerate帧率（一帧/S）代替
     *这里设置帧率为25即可（这里测试用的YUV视频序列是从MP4视频文件（帧率为30.15帧/秒）提取的6S视频,
     * 如果想编码出来的文件（比如h264）的视频时长和原来截取的MP4视频文件时长一样，那么设置帧率为30.15,当然，会被自动取整为30）
    */
    avCodecContext->time_base.num = 1;
    avCodecContext->time_base.den = fps;
    cout << "avCodecContext->time_base.den:" << avCodecContext->time_base.den << endl;
    /**打印输入或输出格式的详细信息，
     is_output:0表示input，1表示output
   */
    av_dump_format(avFormatContextOut, 0, fileOutPath, 1);
    /**
     初始化AVCodecContext以使用给定的avcodec。使用该函数前必须使用avcodec_alloc_context_3()为AVCodecContext指针分配内存。
     @警告此函数非线程安全！
    */
    if (avcodec_open2(avCodecContext, avCodec, NULL) < 0) {
        printf("Failed to open encoder! \n");
        goto end;
    }
    /*
     * 为AVFrame指针分配内存并将其属性设置为默认值。返回的AVFrame结构体指针必须使用av_framework_free()释放内存。
     * 。**@注意，这只分配AVFrame本身，而不是数据缓冲区。
     * 数据缓冲区必须通过其他方式分配，例如使用av_framework_get_Buffer()或手动分配。
     */
    avFrame = av_frame_alloc();
    /**
     * 返回能存储给定参数的图像所需数据量的大小(以字节为单位)。
     * @param pix_fmt图像的像素格式
     * @param width图像的宽度(像素)
     * @param height图像的高度(像素)
     * @param align 字节对齐跨度
     * 数据类型自身的对齐值：为指定平台上基本类型的长度。对于char型数据，其自身对齐值为1，
     * 对于short型为2，对于int,float,double类型，其自身对齐值为4，单位字节。
     * 此处是存储像素数据，当然用char,字节对齐是1跨度
     * @返回缓冲区大小(以字节为单位)，在失败时返回负数
     */
    int picture_size = av_image_get_buffer_size(avCodecContext->pix_fmt, avCodecContext->width,
                                                avCodecContext->height, 1);
    /**
     * Allocate a memory block with alignment suitable for all memory accesses
     * (including vectors if available on the CPU).
     * 使用适用于所有内存访问的对齐方式分配内存块（包括在CPU上可用的vector）。
     */
    picture_buf = (uint8_t *) av_malloc(picture_size);
    /*
     *根据指定的图像参数和提供的数组设置数据指针和行大小。
     * 通过指向图像数据缓冲区的src地址填充给定图像的属性。
     * 根据指定的像素格式，设置一个或多个图像数据指针和行大小。
     * 如果指定了平面格式，那么将设置指向不同图片平面的几个指针，
     * 并且不同平面的行大小将存储在linesize数组中。
     * 调用src==NULL，以获得src缓冲区所需的大小。
     * 要在一个调用中分配缓冲区并填写dst_data和dst_linesize，请使用av_Image_alloc()。
     * @param 将要被填充的dst_data数据指针，
     * @param 将要被填充的dst_datast的行大小
     * @param src 将包含或包含实际图像数据的缓冲区，可以为NULL
     * @param 图像的像素格式
     * @param 图像的宽度，以像素为单位
     * @param 图像的高度，以像素为单位
     * @param src中用于行大小对齐的值
     * @返回 src所需的大小，在发生故障时返回负错误码，
     */
    av_image_fill_arrays(avFrame->data, avFrame->linesize, picture_buf, avCodecContext->pix_fmt,
                         avCodecContext->width, avCodecContext->height, 1);
    //初始化流的私有数据并将流头写入输出媒体文件
    avformat_write_header(avFormatContextOut, NULL);

    cout << "picture_size:" << picture_size << endl;
    /**
     * 为AVPacket指针分配内存并将其属性设置为默认值。AVPacket结构体指针内存必须调用av_packet_free()释放。
     * @注意，这只分配AVPacket*本身的内存，而不是数据缓冲区。数据缓冲区必须通过其他方式分配，例如av_new_packet。
     */
    avPacket = av_packet_alloc();

    /**
     * 分配数据包的内存容量并使用默认值初始化其属性。
     * 注意：AVPacket*必须先初始化才能调用该方法，因为该方法并未初始化AVPacket*
     */
    av_new_packet(avPacket, picture_size);
    //AV_PIX_FMT_YUV420P,   ///< planar YUV 4:2:0, 12bpp, (1 Cr & Cb sample per 2x2 Y samples)
    //YUV 4:2:0采样，每四个Y共用一组UV分量,一个YUV占8+2+2 = 12bits(12bpp:12bit per pixel) 1.5个字节
    /**
     * YUV格式有两大类：planar和packed。
       planar：YUV的存储中与RGB格式最大不同在于，RGB格式每个点的数据是连继保存在一起的。
       即R，G，B是前后不间隔的保存在2-4byte空间中。而YUV的数据中为了节约空间，U，V分量空间会减小。
       每一个点的Y分量独立保存，但连续几个点的U，V分量是保存在一起的.这几个点合起来称为macro-pixel，
       这种存储格式称为Packed(打包)格式。对于planar的YUV格式，先连续存储所有像素点的Y，
       紧接着存储所有像素点的U，随后是所有像素点的V。
       八个像素为：[Y0 U0 V0] [Y1 U1 V1] [Y2 U2 V2] [Y3 U3 V3]
        [Y5 U5 V5] [Y6 U6 V6] [Y7U7 V7] [Y8 U8 V8]
        存放的码流为：Y0 U0 Y1 Y2 U2 Y3
        Y5 V5 Y6 Y7 V7 Y8
        映射出的像素点为：[Y0 U0 V5] [Y1 U0 V5] [Y2 U2 V7] [Y3 U2 V7]
        [Y5 U0 V5] [Y6 U0 V5] [Y7U2 V7] [Y8 U2 V7]
        内存则是：yyyyyyyyuuvv
        需要占用的内存：w * h * 3 / 2
        如果视频帧的宽和高分别为w和h，那么一帧YUV420P像素数据一共占用w*h*3/2 Byte的数据。
        其中前w*h Byte存储Y，接着的w*h*1/4 Byte存储U，最后w*h*1/4 Byte存储V
     */
    y_size = avCodecContext->width * avCodecContext->height;
    int i = 0;
    /**
         从数据流中读取数据到结果缓冲区。函数读取element_size个字节，
         直到读取element_count个元素（element_size*element_count个字节），
         直到缓冲区已满，或直到达到EOF为止。
         返回读入缓冲区的元素的数量element_count。
         出错或读到文件末尾时返回的记录数小于 count，
         在这种情况下，应使用FerroError()或FEOF()区分这两种情况。
         如果结果缓冲区在所请求读取的元素数量读取完毕之前填满,读取，缓冲区为零填充，返回0，errno设置为erange。
     */
    while (fread(picture_buf, 1, y_size * 3 / 2, fileInput) == y_size * 3 / 2) {
        avFrame->data[0] = picture_buf;              // Y
        avFrame->data[1] = picture_buf + y_size;      // U
        avFrame->data[2] = picture_buf + y_size + y_size / 4;  // V
        /**
         * 举例来说：
        FPS = 30，time_base = {1, 90000}，则
        duration = (1 / 30) / (1 / 90000) = 3000，
        可以这么理解：
        帧率是 30 HZ，每帧的持续时间是 1 / 30 秒，时间单位是 1 / 90000 秒，  那么，每帧的 duration 就是 3000 个时间单位。
         编码器产生的帧，直接存入某个容器的AVStream中，那么此时packet的Time要从AVCodecContext的time转换成目标AVStream的time
         */
        avFrame->pts = i++ * avCodecContext->time_base.num / avCodecContext->time_base.den /
                       (avStream->time_base.num / avStream->time_base.num);
//        avFrame->pts = i++ * (avStream->time_base.den) / ((avStream->time_base.num) * avCodecContext->time_base.den);
        //返回-1表示编码出错，应结束循环
        if (encode(avCodecContext, avFrame, avPacket, fileOutput)== -1)break;
    }
    cout << "frameCount=" << i << endl;
    cout << "avStream->time_base.den=" << avStream->time_base.den << endl;
    cout << "avStream->time_base.num=" << avStream->time_base.num << endl;
    cout << "(avStream->time_base.den) / ((avStream->time_base.num) * avCodecContext->time_base.den)="
         << (avStream->time_base.den) / ((avStream->time_base.num) * avCodecContext->time_base.den) << endl;
    encode(avCodecContext, NULL, avPacket, fileOutput);
    av_write_trailer(avFormatContextOut);

    end:
    //清理各种内存
    avformat_free_context(avFormatContextOut);
    avio_close(avFormatContextOut->pb);
    avcodec_close(avCodecContext);
    av_free(picture_buf);
    av_free(avFrame);
    fclose(fileInput);
    fclose(fileOutput);
    return 0;
}

#endif //FFMPEGDEMO_ENCODE_VIDEO_YUV_H264_H