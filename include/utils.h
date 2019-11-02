//
// Created by Administrator on 2019/11/2 0002.
//

#ifndef FFMPEGDEMO_UTILS_H
#define FFMPEGDEMO_UTILS_H
extern "C" {
#include <iostream>
#include <libavcodec/avcodec.h>
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
#endif //FFMPEGDEMO_UTILS_H
