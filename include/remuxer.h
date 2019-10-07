/*
 * Copyright (c) 2013 Stefano Sabatini
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */
/**
 * @file
 * libavformat/libavcodec demuxing and muxing API example.
 *
 * Remux streams from one container format to another.
 * @example remuxing.c
 */
extern "C" {
#include <libavutil/timestamp.h>
#include <libavformat/avformat.h>
}

static void log_packet(const AVFormatContext *fmt_ctx, const AVPacket *pkt, const char *tag) {
    AVRational *time_base = &fmt_ctx->streams[pkt->stream_index]->time_base;
//    printf("%s: pts:%s pts_time:%s dts:%s dts_time:%s duration:%s duration_time:%s stream_index:%d\n",
//           tag,av_ts2str(pkt->pts), av_ts2timestr(pkt->pts, time_base),
//           av_ts2str(pkt->dts), av_ts2timestr(pkt->dts, time_base),
//           av_ts2str(pkt->duration), av_ts2timestr(pkt->duration, time_base),
//           pkt->stream_index);
}

int main_remuxer(char *inPath, char *outPath) {
    AVOutputFormat *ofmt = NULL;
    AVFormatContext *ifmt_ctx = NULL, *ofmt_ctx = NULL;
    AVPacket pkt;
    const char *pathIn, *pathOut;
    int ret, i;
//    int stream_index = 0;
//    int *stream_mapping = NULL;
//    int stream_mapping_size = 0;
//    if (argc < 3) {
//        printf("usage: %s input output\n"
//               "API example program to remux a media file with libavformat and libavcodec.\n"
//               "The output format is guessed according to the file extension.\n"
//               "\n", argv[0]);
//        return 1;
//    }
    pathIn = inPath;
    pathOut = outPath;
    //打开一个输入流，并且读取其文件头。编解码器没有打开。
    if ((ret = avformat_open_input(&ifmt_ctx, pathIn, 0, 0)) < 0) {
        fprintf(stderr, "Could not open input file '%s'", pathIn);
        goto end;
    }
    /**读取媒体文件的所有packets，获取流信息。
       有些格式(如MPEG)没有文件头，或者没有在其中存储足够的信息，
       因此建议您调用avformat_find_stream_info()函数，该函数尝试读取和解码几个帧以查找丢失的信息。
     */
    if ((ret = avformat_find_stream_info(ifmt_ctx, 0)) < 0) {
        fprintf(stderr, "Failed to retrieve input stream information");
        goto end;
    }
    /**打印输入或输出格式的详细信息，
        is_output:0表示input，1表示output
     */
    av_dump_format(ifmt_ctx, 0, pathIn, 0);
    /**为输出格式初始化AVFormatContext指针。
     */
    avformat_alloc_output_context2(&ofmt_ctx, NULL, NULL, pathOut);
    if (!ofmt_ctx) {
        fprintf(stderr, "Could not create output context\n");
        ret = AVERROR_UNKNOWN;
        goto end;
    }
//    stream_mapping_size = ifmt_ctx->nb_streams;
    /**创建int数组
     * @param nmemb Number of elements 数组元素的个数
     * @param size  Size of the single element 每个元素的内存长度
     */
//    stream_mapping = static_cast<int *>(av_mallocz_array(stream_mapping_size, sizeof(*stream_mapping)));
//    if (!stream_mapping) {
//        ret = AVERROR(ENOMEM);
//        goto end;
//    }
    /**输出文件的格式，只有在封装时使用，必须在调用avformat_write_header()前初始化
     */
    ofmt = ofmt_ctx->oformat;
    /*AVFormatContext 结构体中定义了AVStream **streams 数组;
     * nb_streams即为数组元素的个数
     */
    for (i = 0; i < ifmt_ctx->nb_streams; i++) {
        AVStream *out_stream;
        AVStream *in_stream = ifmt_ctx->streams[i];
        /**当前流的编解码参数，
        avformat_new_stream()调用后会初始化，
        avformat_free_context()调用后会被释放。
        解封装：在创建流的时候或者avformat_find_stream_info()调用后，被初始化；
        封装：avformat_write_header()调用前，手动初始化
         */
        AVCodecParameters *in_codecpar = in_stream->codecpar;
        /**如果输入多媒体文件的当前遍历到的流的 媒体类型不是音频、视频、字幕，那么stream_mapping[i]赋值为-1
         */
        if (in_codecpar->codec_type != AVMEDIA_TYPE_AUDIO &&
            in_codecpar->codec_type != AVMEDIA_TYPE_VIDEO &&
            in_codecpar->codec_type != AVMEDIA_TYPE_SUBTITLE) {
//            stream_mapping[i] = -1;
            continue;
        }
        //记录流索引
//        stream_mapping[i] = stream_index++;
        /**创建一个用于输出的AVStream指针对象
         */
        out_stream = avformat_new_stream(ofmt_ctx, NULL);
        if (!out_stream) {
            fprintf(stderr, "Failed allocating output stream\n");
            ret = AVERROR_UNKNOWN;
            goto end;
        }
        /**输出的AVCodecParameters指针所占内存被释放，然后将输入的AVCodecParameters指针内存拷贝到输出的AVCodecParameters中
         */
        ret = avcodec_parameters_copy(out_stream->codecpar, in_codecpar);
        if (ret < 0) {
            fprintf(stderr, "Failed to copy codec parameters\n");
            goto end;
        }
        /**
         * Additional information about the codec (corresponds to the AVI FOURCC).
           uint32_t         codec_tag;
           为编解码器添加额外信息，这里懵逼了,这行不写，输出视频文件会有毛病
         */
        out_stream->codecpar->codec_tag = 0;
    }
    /**打印输入或输出格式的详细信息，
       is_output:0表示input，1表示output
     */
    av_dump_format(ofmt_ctx, 0, pathOut, 1);
    /**解封装时，AVFormatContext中的AVIOContext *pb， 可以在调用avformat_open_input（）之前初始化，
                   或者通过调用avformat_open_input（）初始化
           封装时,AVFormatContext中的AVIOContext *pb，可以在调用avformat_write_header()之前初始化，
           完事后必须释放AVFormatContext中的AVIOContext *pb占用的内存
           如果ofmt->flags值为AVFMT_NOFILE，就不要初始化AVFormatContext中的AVIOContext *pb，在这种情况下，
           解封装器/封装器将会通过其它方式处理I/O，而且AVFormatContext中的AVIOContext *pb为NULL
     */
    if (!(ofmt->flags & AVFMT_NOFILE)) {
        /**为对应url的文件初始化一个AVIOContext 二级指针对象
         */
        ret = avio_open(&ofmt_ctx->pb, pathOut, AVIO_FLAG_WRITE);
        if (ret < 0) {
            fprintf(stderr, "Could not open output file '%s'", pathOut);
            goto end;
        }
    }
    //初始化流的私有数据并将流头写入输出媒体文件
    ret = avformat_write_header(ofmt_ctx, NULL);
    if (ret < 0) {
        fprintf(stderr, "Error occurred when opening output file\n");
        goto end;
    }
    while (1) {
        AVStream *in_stream, *out_stream;
        /**返回流的下一帧。
      此函数读取存储在文件中的内容到AVPacket *pkt，而不验证是否存在解码器的有效帧。
      它将*存储在文件中的内容分割成帧，并为每个调用返回一个AVPacket *pkt。
      它不会*省略有效帧之间的无效数据，以便给解码器最大的解码信息。
      返回0表示读取一帧成功，返回负数，表示出错了或者已经读到文件末尾了。
         */
        ret = av_read_frame(ifmt_ctx, &pkt);
        if (ret < 0)
            break;
        //初始化输入的AVStream，AVpacket 中的stream_index定义了流的索引
        in_stream = ifmt_ctx->streams[pkt.stream_index];
//        if (pkt.stream_index >= stream_mapping_size ||stream_mapping[pkt.stream_index] < 0) {
//            //清除packet占用的内存
//            av_packet_unref(&pkt);
//            continue;
//        }
//        pkt.stream_index = stream_mapping[pkt.stream_index];
        //初始化输出的AVStream
        out_stream = ofmt_ctx->streams[pkt.stream_index];
        log_packet(ifmt_ctx, &pkt, "in");
        /*pkt.pts **乘** in_stream->time_base **除** out_stream->time_base
        得到out_stream下pkt的pts，输出文件的一帧数据包的pts
        即同步了输入输出的显示时间戳
        pkt为从输入文件读取的一帧的数据包，
         * */
        pkt.pts = av_rescale_q_rnd(pkt.pts, in_stream->time_base, out_stream->time_base,
                                   static_cast<AVRounding>(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));
        /**pkt.dts  **乘** in_stream->time_base **除** out_stream->time_base
        得到out_stream下pkt的dts ，输出文件的一帧数据包的dts
        即同步了输入输出的解压时间戳
        pkt为从输入文件读取的一帧的数据包，
         */
        pkt.dts = av_rescale_q_rnd(pkt.dts, in_stream->time_base, out_stream->time_base,
                                   static_cast<AVRounding>(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));
        /**pkt.duration**乘** in_stream->time_base **除** out_stream->time_base
        得到out_stream下pkt的duration ，输出文件的一帧数据包的持续时间
        即同步了输入输出的持续时间戳
        pkt为从输入文件读取的一帧的数据包，
         */
        pkt.duration = av_rescale_q(pkt.duration, in_stream->time_base, out_stream->time_base);
//        pkt.pos = -1;
        log_packet(ofmt_ctx, &pkt, "out");
        /**将一帧数据包写入输出媒体文件。
          此函数将根据需要在内部缓冲数据包，以确保输出文件中的数据包按照dts的顺序正确交叉存储。
          调用者进行自己的交叉存储时，应该调用av_write_frame()，而不是这个函数。
          使用此函数而不是av_write_frame()可以使muxers提前了解未来的数据包，例如改善MP4对VFR内容在碎片模式下的行为。
         */
        ret = av_interleaved_write_frame(ofmt_ctx, &pkt);
        if (ret < 0) {
            fprintf(stderr, "Error muxing packet\n");
            break;
        }
        //清除packet占用的内存
        av_packet_unref(&pkt);
    }
    // *将流的尾部写入输出媒体文件，并且释放其私有数据占用的内存
    av_write_trailer(ofmt_ctx);
    end:
    //关闭打开的input AVFormatContext。释放其所有内容占用的内存，赋值为NULL。
    avformat_close_input(&ifmt_ctx);
    /* close output */
    if (ofmt_ctx && !(ofmt->flags & AVFMT_NOFILE))
//        关闭被AVIOContext使用的资源，释放AVIOContext占用的内存并且置为NULL
        avio_closep(&ofmt_ctx->pb);
    //释输出的放AVFormatContext所有占用的内存
    avformat_free_context(ofmt_ctx);
    //释放内存
//    av_freep(&stream_mapping);
    if (ret < 0 && ret != AVERROR_EOF) {
//        fprintf(stderr, "Error occurred: %s\n", av_err2str(ret));
        return 1;
    }
    return 0;
}
