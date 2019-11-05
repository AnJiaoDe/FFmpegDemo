//
// Created by Administrator on 2019/11/2 0002.
//

#ifndef FFMPEGDEMO_ENCODE_AUDIO_PCM_AAC_H
#define FFMPEGDEMO_ENCODE_AUDIO_PCM_AAC_H
extern "C" {

#include <iostream>
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <utils.h>
using namespace std;
}

/* select layout with the highest channel count */
int select_channel_layout(const AVCodec *codec) {
    const uint64_t *p;
    uint64_t best_ch_layout = 0;
    int best_nb_channels = 0;

    if (!codec->channel_layouts)
        return AV_CH_LAYOUT_STEREO;

    p = codec->channel_layouts;
    while (*p) {
        int nb_channels = av_get_channel_layout_nb_channels(*p);

        if (nb_channels > best_nb_channels) {
            best_ch_layout = *p;
            best_nb_channels = nb_channels;
        }
        p++;
    }
    return best_ch_layout;
}
static int check_sample_fmt(const AVCodec *codec, enum AVSampleFormat sample_fmt)
{
    const enum AVSampleFormat *p = codec->sample_fmts;

    while (*p != AV_SAMPLE_FMT_NONE) {
        if (*p == sample_fmt)
            return 1;
        p++;
    }
    return 0;
}
int main_encode_audio_pcm_aac(char *fileInPath, const char *fileOutPath) {
    AVFormatContext *avFormatContextOut;
    AVStream *avStreamOut;
    AVCodec *avCodec;
    AVCodecContext *avCodecContext;
    AVFrame *avFrame;
    AVPacket *avPacket;
    FILE *fileInput = fopen(fileInPath, "rb");
    FILE *fileOutput = fopen(fileOutPath, "wb");
    uint8_t *bufFrame;

    avformat_alloc_output_context2(&avFormatContextOut, NULL, NULL, fileOutPath);
    avStreamOut = avformat_new_stream(avFormatContextOut, NULL);
    avCodec = avcodec_find_encoder(avFormatContextOut->oformat->audio_codec);
    if (!avCodec) {
        printf("Can not find encoder!\n");
        goto end;
    }
    avCodec->sample_fmts;
    avCodecContext = avcodec_alloc_context3(avCodec);
    avCodecContext->codec_type = AVMEDIA_TYPE_AUDIO;
    avCodecContext->sample_fmt = AV_SAMPLE_FMT_S16;
//    if (!check_sample_fmt(avCodec, avCodecContext->sample_fmt)) {
//        fprintf(stderr, "Encoder does not support sample format %s",
//                av_get_sample_fmt_name(avCodecContext->sample_fmt));
//        goto end;
//    }
    avCodecContext->sample_rate = 44100;
    avCodecContext->channel_layout = select_channel_layout(avCodec);
    avCodecContext->channels = av_get_channel_layout_nb_channels(avCodecContext->channel_layout);
    avCodecContext->bit_rate = 64000;

    av_dump_format(avFormatContextOut, 0, fileOutPath, 1);

    if (avcodec_open2(avCodecContext, avCodec, NULL) < 0) {
        cout << "Failed to open encoder! \n" << endl;
        goto end;
    }

    avFrame = av_frame_alloc();
    cout << "++++++++++++++++++++" << endl;
    avFrame->nb_samples = avCodecContext->frame_size;
    avFrame->format = avCodecContext->sample_fmt;
    avFrame->channel_layout = avCodecContext->channel_layout;
    cout << "++++++++++++11111111111++++++++" << endl;

    int size = av_samples_get_buffer_size(NULL, avCodecContext->channels, avCodecContext->frame_size,
                                          avCodecContext->sample_fmt, 1);
    bufFrame = (uint8_t *) av_malloc(size);
    avcodec_fill_audio_frame(avFrame, avCodecContext->channels, avCodecContext->sample_fmt, bufFrame, size, 1);

    cout << "++++++++++++22222222222222++++++++" << endl;

    avformat_write_header(avFormatContextOut, NULL);

    avPacket = av_packet_alloc();
    av_new_packet(avPacket, size);

    int i = 0;
    while (fread(bufFrame, 1, size, fileInput) == size) {
        avFrame->data[0] = bufFrame;
        avFrame->pts = i++ * 100;
        encode(avCodecContext, avFrame, avPacket, fileOutput);
    }
    /* flush the encoder */
    encode(avCodecContext, NULL, avPacket, fileOutput);

    av_write_trailer(avFormatContextOut);

    end:
    //清理各种内存
    avformat_free_context(avFormatContextOut);
    avio_close(avFormatContextOut->pb);
    avcodec_close(avCodecContext);
    av_free(avFrame);
    av_free(bufFrame);
    fclose(fileInput);
    fclose(fileOutput);

    return 0;

}

#endif //FFMPEGDEMO_ENCODE_AUDIO_PCM_AAC_H
