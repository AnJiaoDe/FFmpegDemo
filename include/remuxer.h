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
//           tag,
//           av_ts2str(pkt->pts), av_ts2timestr(pkt->pts, time_base),
//           av_ts2str(pkt->dts), av_ts2timestr(pkt->dts, time_base),
//           av_ts2str(pkt->duration), av_ts2timestr(pkt->duration, time_base),
//           pkt->stream_index);
}

int main_remuxer(char *inFileName, char *outFileName) {
    AVOutputFormat *ofmt = NULL;
    AVFormatContext *ifmt_ctx = NULL, *ofmt_ctx = NULL;
    AVPacket pkt;
    const char *in_filename, *out_filename;
    int ret, i;
    int stream_index = 0;
    int *stream_mapping = NULL;
    int stream_mapping_size = 0;

//    if (argc < 3) {
//        printf("usage: %s input output\n"
//               "API example program to remux a media file with libavformat and libavcodec.\n"
//               "The output format is guessed according to the file extension.\n"
//               "\n", argv[0]);
//        return 1;
//    }

    in_filename = inFileName;
    out_filename = outFileName;
    //打开一个输入流，并且读取其文件头。编解码器没有打开。
    if ((ret = avformat_open_input(&ifmt_ctx, in_filename, 0, 0)) < 0) {
        fprintf(stderr, "Could not open input file '%s'", in_filename);
        goto end;
    }
    //读取媒体文件的所有packets，获取流信息。
    if ((ret = avformat_find_stream_info(ifmt_ctx, 0)) < 0) {
        fprintf(stderr, "Failed to retrieve input stream information");
        goto end;
    }

    /** 打印输入或输出格式的详细信息，
        is_output:0表示input，1表示output
     * Input #0, flv, from '../resources/video.flv':
  Metadata:
    metadatacreator : iku
    hasKeyframes    : true
    hasVideo        : true
    hasAudio        : true
    hasMetadata     : true
    canSeekToEnd    : false
    datasize        : 932906
    videosize       : 787866
    audiosize       : 140052
    lasttimestamp   : 34
    lastkeyframetimestamp: 30
    lastkeyframelocation: 886498
    encoder         : Lavf55.19.104
  Duration: 00:00:34.20, start: 0.042000, bitrate: 394 kb/s
    Stream #0:0: Video: h264 (High), yuv420p(progressive), 512x288 [SAR 1:1 DAR 16:9], 15 fps, 15 tbr, 1k tbn, 30 tbc
    Stream #0:1: Audio: mp3, 44100 Hz, stereo, fltp, 128 kb/s
     */
    av_dump_format(ifmt_ctx, 0, in_filename, 0);
    //为输出格式分配AVFormatContext指针。
    avformat_alloc_output_context2(&ofmt_ctx, NULL, NULL, out_filename);
    if (!ofmt_ctx) {
        fprintf(stderr, "Could not create output context\n");
        ret = AVERROR_UNKNOWN;
        goto end;
    }
    /**
     *
        class A
        {
        public:
            int a = 0;
        };
        int main()
        {
            A b;
            A *p = &b;
            b.a; //类类型的对象访问类的成员
            p->a; //类类型的指针访问类的成员
        }
     */
    //流的长度
    stream_mapping_size = ifmt_ctx->nb_streams;
    //数组数量，int长度
    stream_mapping = static_cast<int *>(av_mallocz_array(stream_mapping_size, sizeof(*stream_mapping)));
    if (!stream_mapping) {
        ret = AVERROR(ENOMEM);
        goto end;
    }
    //格式
    ofmt = ofmt_ctx->oformat;
    for (i = 0; i < ifmt_ctx->nb_streams; i++) {
        AVStream *out_stream;
        AVStream *in_stream = ifmt_ctx->streams[i];
        AVCodecParameters *in_codecpar = in_stream->codecpar;

        if (in_codecpar->codec_type != AVMEDIA_TYPE_AUDIO &&
            in_codecpar->codec_type != AVMEDIA_TYPE_VIDEO &&
            in_codecpar->codec_type != AVMEDIA_TYPE_SUBTITLE) {
            stream_mapping[i] = -1;
            continue;
        }

        stream_mapping[i] = stream_index++;
        //为多媒体文件创建一个流
        out_stream = avformat_new_stream(ofmt_ctx, NULL);
        if (!out_stream) {
            fprintf(stderr, "Failed allocating output stream\n");
            ret = AVERROR_UNKNOWN;
            goto end;
        }
        //将输入的AVCodecParameters内容拷贝到输出的AVCodecParameters中
        ret = avcodec_parameters_copy(out_stream->codecpar, in_codecpar);
        if (ret < 0) {
            fprintf(stderr, "Failed to copy codec parameters\n");
            goto end;
        }
        out_stream->codecpar->codec_tag = 0;
    }
    /**打印输入或输出格式的详细信息，
       is_output:0表示input，1表示output
     * Output #0, mp4, to '../resources/video.mp4':
    Stream #0:0: Video: h264 (High), yuv420p(progressive), 512x288 [SAR 1:1 DAR 16:9], q=2-31
    Stream #0:1: Audio: mp3, 44100 Hz, stereo, fltp, 128 kb/s
     */
    av_dump_format(ofmt_ctx, 0, out_filename, 1);

    if (!(ofmt->flags & AVFMT_NOFILE)) {
        ret = avio_open(&ofmt_ctx->pb, out_filename, AVIO_FLAG_WRITE);
        if (ret < 0) {
            fprintf(stderr, "Could not open output file '%s'", out_filename);
            goto end;
        }
    }

    ret = avformat_write_header(ofmt_ctx, NULL);
    if (ret < 0) {
        fprintf(stderr, "Error occurred when opening output file\n");
        goto end;
    }

    while (1) {
        AVStream *in_stream, *out_stream;

        ret = av_read_frame(ifmt_ctx, &pkt);
        if (ret < 0)
            break;

        in_stream = ifmt_ctx->streams[pkt.stream_index];
        if (pkt.stream_index >= stream_mapping_size ||
            stream_mapping[pkt.stream_index] < 0) {
            //清除packet占用的内存
            av_packet_unref(&pkt);
            continue;
        }

        pkt.stream_index = stream_mapping[pkt.stream_index];
        out_stream = ofmt_ctx->streams[pkt.stream_index];
        log_packet(ifmt_ctx, &pkt, "in");

        /*音频和视频流都有一些关于以多快速度和什么时间来播放它们的信息在里面。
         * 音频流有采样，视频流有每秒的帧率。
         * 然而，如果我们只是简单的通过数帧和乘以帧率的方式来同步视频，那么就很有可能会失去同步。
         * 于是作为一种补充，在流中的包有种叫做DTS（解码时间戳）和PTS（显示时间戳）的机制。
         * 为了这两个参数，你需要了解电影存放的方式。
         * 像MPEG等格式，使用被叫做B帧（B表示双向bidrectional）的方式。
         * 另外两种帧被叫做I帧和P帧（I表示关键帧，P表示预测帧）。
         * I帧包含了某个特定的完整图像。P帧依赖于前面的I帧和P帧并且使用比较或者差分的方式来编码。
         * B帧与P帧有点类似，但是它是依赖于前面和后面的帧的信息的。
         * 这也就解释了为什么我们可能在调用avcodec_decode_video以后会得不到一帧图像。
         * a * bq / cq
         * 将以时钟基为out_stream->time_base 的时间戳pkt.pts 转换成以in_stream->time_base为时钟基并且以rnd 这种方式进行运算的值
         * */
        pkt.pts = av_rescale_q_rnd(pkt.pts, in_stream->time_base, out_stream->time_base,
                                   static_cast<AVRounding>(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));
        pkt.dts = av_rescale_q_rnd(pkt.dts, in_stream->time_base, out_stream->time_base,
                                   static_cast<AVRounding>(AV_ROUND_NEAR_INF | AV_ROUND_PASS_MINMAX));
        pkt.duration = av_rescale_q(pkt.duration, in_stream->time_base, out_stream->time_base);
        pkt.pos = -1;
        log_packet(ofmt_ctx, &pkt, "out");

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
        avio_closep(&ofmt_ctx->pb);
    //释放AVFormatContext所有占用的内存
    avformat_free_context(ofmt_ctx);
    //释放内存
    av_freep(&stream_mapping);

    if (ret < 0 && ret != AVERROR_EOF) {
//        fprintf(stderr, "Error occurred: %s\n", av_err2str(ret));
        return 1;
    }

    return 0;
}
