//
// Created by Administrator on 2019/10/15 0015.
//

#ifndef FFMPEGDEMO_DEMUXER_H
#define FFMPEGDEMO_DEMUXER_H
extern "C"{
#include <libavformat/avformat.h>
};
int main_demuxe(char *fileInPath, char *fileOutPath){
    AVFormatContext *avFormatContext;
    int ret = 0;
    AVPacket avPacket;
    FILE *fileOut = fopen(fileOutPath, "wb+");

    /* open input file, and allocate format context */
    if (avformat_open_input(&avFormatContext, fileInPath, NULL, NULL) < 0) {
        fprintf(stderr, "Could not open source file %s\n", fileInPath);
        exit(1);
    }

    /* retrieve stream information */
    if (avformat_find_stream_info(avFormatContext, NULL) < 0) {
        fprintf(stderr, "Could not find stream information\n");
        exit(1);
    }

    /* read frames from the file */
    while (av_read_frame(avFormatContext, &avPacket) >= 0) {

        fwrite(avPacket.data, 1, avPacket.size, fileOut); //把H264数据写入fp_h264文件
        av_packet_unref(&avPacket);
    }

    printf("Demuxing succeeded.\n");

    end:
    avformat_close_input(&avFormatContext);
    return ret < 0;
}
#endif //FFMPEGDEMO_DEMUXER_H
