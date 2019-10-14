//
// Created by Administrator on 2019/10/14 0014.
//

#ifndef FFMPEGDEMO_TEST_H
#define FFMPEGDEMO_TEST_H
/**
* 本程序实现了视频文件解码为YUV数据。
*
*/
#include <stdio.h>


extern "C"
{
#include "libavcodec/avcodec.h"
#include "libavformat/avformat.h"
#include "libswscale/swscale.h"
#include "libavutil/imgutils.h"
};
char *src_filename ;
char *dst_filename ;
const int dst_w = 200, dst_h = 200;
int video_stream_idx = -1;

int open_codec_context(int *stream_idx,
                       AVFormatContext *fmt_ctx, AVCodecContext **codec_context, enum AVMediaType type) {
    int ret;

    ret = av_find_best_stream(fmt_ctx, type, -1, -1, NULL, 0);
    if (ret < 0) {
        fprintf(stderr, "Could not find %s stream in input file '%s'\n",
                av_get_media_type_string(type), src_filename);
        return ret;
    } else {
        int stream_index = ret;
        AVStream *st = fmt_ctx->streams[stream_index];

        /* find decoder for the stream */
        *codec_context = st->codec;
        AVCodec *dec = avcodec_find_decoder((*codec_context)->codec_id);
        if (!dec) {
            fprintf(stderr, "Failed to find %s codec\n",
                    av_get_media_type_string(type));
            return AVERROR(EINVAL);
        }


        if ((ret = avcodec_open2(*codec_context, dec, NULL)) < 0) {
            fprintf(stderr, "Failed to open %s codec\n",
                    av_get_media_type_string(type));
            return ret;
        }
        *stream_idx = stream_index;
    }

    return 0;
}

void initPakcet(AVPacket *packet) {

    av_init_packet(packet);
    packet->data = NULL;
    packet->size = 0;
}

void inityuvframe(AVFrame **yuvFrame, AVCodecContext *codec_context) {
    *yuvFrame = av_frame_alloc();
    uint8_t *out_buffer = (uint8_t *) av_malloc(avpicture_get_size(AV_PIX_FMT_YUV420P, dst_w, dst_h));
    avpicture_fill((AVPicture *) (*yuvFrame), out_buffer, AV_PIX_FMT_YUV420P, dst_w, dst_h);

}

void makeyuvfile(FILE *fp_yuv, AVFrame *yuvFrame) {

    int y_size = dst_w * dst_h;
    fwrite(yuvFrame->data[0], 1, y_size, fp_yuv);
    fwrite(yuvFrame->data[1], 1, y_size / 4, fp_yuv);
    fwrite(yuvFrame->data[2], 1, y_size / 4, fp_yuv);
    av_frame_free(&yuvFrame);


}

void decodeVideo(AVFormatContext *format_context, AVCodecContext *codec_context) {
    int framecount = 0;
    //用于改变像素格式或者图像宽高
    SwsContext *sws_ctx = sws_getContext(
            codec_context->width, codec_context->height, codec_context->pix_fmt,
            dst_w, dst_h, AV_PIX_FMT_YUV420P,
            SWS_BILINEAR, NULL, NULL, NULL);
    FILE *fp_yuv = fopen(dst_filename, "wb");
    while (1) {
        int got_frame = 0;
        AVPacket packet;
        initPakcet(&packet);
        AVFrame *frame = av_frame_alloc();
        if (av_read_frame(format_context, &packet) >= 0) {
            if (packet.stream_index == video_stream_idx) {
                avcodec_decode_video2(codec_context, frame, &got_frame, &packet);
                if (got_frame) {
                    //sws_getContext只是起手式，实际的图像转换在这里
                    AVFrame *yuvFrame = NULL;
                    inityuvframe(&yuvFrame, codec_context);
                    sws_scale(sws_ctx,
                              frame->data, frame->linesize, 0, frame->height,
                              yuvFrame->data, yuvFrame->linesize);
                    //AVFrame->YUV
                    makeyuvfile(fp_yuv, yuvFrame);
                    framecount++;
                    printf("parse %d\n", framecount);
                    av_free_packet(&packet);
                    av_frame_free(&frame);
                }
            }
        } else {
            break;
        }
    }
    fclose(fp_yuv);
    sws_freeContext(sws_ctx);

}

void main_test_decode(char *inPath, char *outPath) {
    src_filename=inPath;
    dst_filename=outPath;
    AVFormatContext *fmt_ctx = NULL;
    AVCodecContext *codec_context = NULL;
    /* register all formats and codecs */
    av_register_all();
    avformat_network_init();

    /* open input file, and allocate format context */
    if (avformat_open_input(&fmt_ctx, src_filename, NULL, NULL) < 0) {
        fprintf(stderr, "Could not open source file %s\n", src_filename);
        exit(1);
    }

    /* retrieve stream information */
    if (avformat_find_stream_info(fmt_ctx, NULL) < 0) {
        fprintf(stderr, "Could not find stream information\n");
        exit(1);
    }
    if (open_codec_context(&video_stream_idx, fmt_ctx, &codec_context, AVMEDIA_TYPE_VIDEO) < 0) {
        exit(1);
    }
    av_dump_format(fmt_ctx, 0, src_filename, 0);
    decodeVideo(fmt_ctx, codec_context);

    if (codec_context)
        avcodec_close(codec_context);
    if (fmt_ctx)
        avformat_close_input(&fmt_ctx);
}

#endif //FFMPEGDEMO_TEST_H
