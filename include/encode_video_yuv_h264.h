//
// Created by Administrator on 2019/10/24 0024.
//

#ifndef FFMPEGDEMO_ENCODE_VIDEO_YUV_H264_H
#define FFMPEGDEMO_ENCODE_VIDEO_YUV_H264_H
extern "C" {
#include <libavcodec/avcodec.h>
#include "libavformat/avformat.h"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#include <libavutil/opt.h>
#include <libavutil/imgutils.h>
}

void encode(AVCodecContext *avCodecContext, AVFrame *avFrame, AVPacket *avPacket, FILE *fileOut) {
    int ret;

    /* send the frame to the encoder */
    if (avFrame)
        printf("Send frame %3"
               PRId64
               "\n", avFrame->pts);

    ret = avcodec_send_frame(avCodecContext, avFrame);
    if (ret < 0) {
        fprintf(stderr, "Error sending a frame for encoding\n");
        exit(1);
    }

    while (ret >= 0) {
        ret = avcodec_receive_packet(avCodecContext, avPacket);
        if (ret == AVERROR(EAGAIN) || ret == AVERROR_EOF)
            return;
        else if (ret < 0) {
            fprintf(stderr, "Error during encoding\n");
            exit(1);
        }

        printf("Write packet %3"
               PRId64
               " (size=%5d)\n", avPacket->pts, avPacket->size);
        fwrite(avPacket->data, 1, avPacket->size, fileOut);
        av_packet_unref(avPacket);
    }
}

int main_encode_video_yuv_h264(char *fileInPath, const char *fileOutPath) {
    /**为输出格式初始化AVFormatContext指针。
  */
    AVFormatContext *avFormatContextOut;
    int ret;
    FILE *fileInput = fopen(fileInPath, "rb");
    AVCodec *avCodec;
    AVCodecContext *avCodecContext;
    AVPacket *avPacket;
    AVFrame *avFrame;
    AVStream *avStream;
    int picture_size;
    int frameTotal = 207;  //Frames to encode
    uint8_t *picture_buf;
    int y_size;

    avformat_alloc_output_context2(&avFormatContextOut, NULL, NULL, fileOutPath);
    avStream = avformat_new_stream(avFormatContextOut, 0);
    if (!avStream)goto end;
    FILE *fileOut = fopen(fileOutPath, "wb");
    if (!fileOut) {
        fprintf(stderr, "Could not open %s\n", fileOutPath);
        goto end;
    }
    AVOutputFormat *avOutputFormat = avFormatContextOut->oformat;


    avCodec = avcodec_find_encoder(avOutputFormat->video_codec);

    if (!avCodec) {
        fprintf(stderr, "Codec '%s' not found\n", fileOutPath);
        goto end;
    }

    avCodecContext = avcodec_alloc_context3(avCodec);
    if (!avCodecContext) {
        fprintf(stderr, "Could not allocate video codec context\n");
        goto end;

    }

    avCodecContext->bit_rate = 4000000;
    /* resolution must be a multiple of two */
    avCodecContext->width = 1920;
    avCodecContext->height = 1080;
    /* frames per second */
    avCodecContext->time_base.num = 1;
    avCodecContext->framerate.den = 25;

    /* emit one intra frame every ten frames
     * check frame pict_type before passing frame
     * to encoder, if frame->pict_type is AV_PICTURE_TYPE_I
     * then gop_size is ignored and the output of encoder
     * will always be I frame irrespective to gop_size
     */
    avCodecContext->gop_size = 10;
    avCodecContext->max_b_frames = 1;
    avCodecContext->pix_fmt = AV_PIX_FMT_YUV420P;

    if (avCodec->id == AV_CODEC_ID_H264)
        av_opt_set(avCodecContext->priv_data, "preset", "slow", 0);

    ret = avcodec_open2(avCodecContext, avCodec, NULL);
    if (ret < 0) {
        fprintf(stderr, "Could not open codec: ");
        goto end;
    }

    avFrame = av_frame_alloc();
    if (!avFrame) {
        fprintf(stderr, "Could not allocate video frame\n");
        goto end;
    }
    avFrame->format = avCodecContext->pix_fmt;
    avFrame->width = avCodecContext->width;
    avFrame->height = avCodecContext->height;

    ret = av_frame_get_buffer(avFrame, 32);
    if (ret < 0) {
        fprintf(stderr, "Could not allocate the video frame data\n");
        goto end;
    }

    picture_size = av_image_get_buffer_size(avCodecContext->pix_fmt, avCodecContext->width, avCodecContext->height, 32);
    picture_buf = static_cast<uint8_t *>(av_malloc(picture_size));
    /**
     * int av_image_fill_arrays(uint8_t *dst_data[4], int dst_linesize[4],
                         const uint8_t *src,
                         enum AVPixelFormat pix_fmt, int width, int height, int align);
     */

            av_image_fill_arrays(avFrame->data, avFrame->linesize, picture_buf, avCodecContext->pix_fmt, avCodecContext->width,
                                 avCodecContext->height, 32);
//    avpicture_fill((AVPicture *) pFrame, picture_buf, pCodecCtx->pix_fmt, pCodecCtx->width, pCodecCtx->height);

    avformat_write_header(avFormatContextOut, NULL);

    av_new_packet(avPacket, picture_size);

    y_size = avCodecContext->width * avCodecContext->height;


    for (int i = 0; i < frameTotal; i++) {
        //Read raw YUV data
        if (fread(picture_buf, 1, y_size * 3 / 2, fileInput) <= 0) {
            printf("Failed to read raw data! \n");
            return -1;
        } else if (feof(fileInput)) {
            break;
        }
        avFrame->data[0] = picture_buf;              // Y
        avFrame->data[1] = picture_buf + y_size;      // U
        avFrame->data[2] = picture_buf + y_size * 5 / 4;  // V
        //PTS
        //pFrame->pts=i;
        avFrame->pts = i * (avStream->time_base.den) / ((avStream->time_base.num) * 25);
        encode(avCodecContext, avFrame, avPacket, fileOut);
    }
    av_write_trailer(avFormatContextOut);

    end:

    fclose(fileInput);
    fclose(fileOut);
    av_free(avFrame);
    avformat_free_context(avFormatContextOut);
    avcodec_free_context(&avCodecContext);
    av_frame_free(&avFrame);
    av_packet_free(&avPacket);
    av_free(picture_buf);
    return 0;
}


#endif //FFMPEGDEMO_ENCODE_VIDEO_YUV_H264_H
