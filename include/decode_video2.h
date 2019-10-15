//
// Created by Administrator on 2019/10/15 0015.
//

#ifndef FFMPEGDEMO_DECODE_VIDEO2_H
#define FFMPEGDEMO_DECODE_VIDEO2_H
#include <iostream>
#ifdef __cplusplus
extern "C"
{
#endif
#include <libavcodec/avcodec.h>
#include <libavformat/avformat.h>
#include <libswscale/swscale.h>
#ifdef __cplusplus
};
#endif

using namespace std;

int main_decode_video2()
{
    char filepath[] = "../resources/video.mp4";
    FILE *fp_yuv = fopen("../resources/video.yuv", "wb+");
    FILE *fp_h264 = fopen("../resources/video.h264", "wb+");
    //注册所有组件
    av_register_all();
    //初始化一个AVFormatContext
    AVFormatContext *pFormatCtx = avformat_alloc_context();
    //打开输入的视频文件
    if (avformat_open_input(&pFormatCtx, filepath, NULL, NULL) != 0)
    {
        cout << "Couldn't open input stream." << endl;
        return -1;
    }
    //获取视频文件信息
    if (avformat_find_stream_info(pFormatCtx, NULL) < 0)
    {
        cout << "Couldn't find stream information." << endl;
        return -1;
    }
    int videoindex = -1;
    for (int i = 0; i < pFormatCtx->nb_streams; i++)
    {
        if (pFormatCtx->streams[i]->codec->codec_type == AVMEDIA_TYPE_VIDEO)
        {
            videoindex = i;
            break;
        }
    }
    if (videoindex == -1)
    {
        cout << "Didn't find a video stream." << endl;
        return -1;
    }
    AVCodecContext  *pCodecCtx = pFormatCtx->streams[videoindex]->codec;
    //查找解码器
    AVCodec *pCodec = avcodec_find_decoder(pCodecCtx->codec_id);
    if (pCodec == NULL)
    {
        cout << "Codec not found." << endl;
        return -1;
    }
    //打开解码器
    if (avcodec_open2(pCodecCtx, pCodec, NULL)<0)
    {
        cout << "Could not open codec." << endl;
        return -1;
    }
    AVFrame *pFrame = av_frame_alloc();
    AVFrame *pFrameYUV = av_frame_alloc();
    uint8_t *out_buffer = (uint8_t *)av_malloc(avpicture_get_size(AV_PIX_FMT_YUV420P, pCodecCtx->width, pCodecCtx->height));
    cout << "frame width" << pCodecCtx->width<<"frame height"<<pCodecCtx->height << endl;
    avpicture_fill((AVPicture *)pFrameYUV, out_buffer, AV_PIX_FMT_YUV420P, pCodecCtx->width, pCodecCtx->height);
    AVPacket *packet = (AVPacket *)av_malloc(sizeof(AVPacket));

    //调试输出文件信息
    cout << "--------------- File Information ----------------" << endl;;
    av_dump_format(pFormatCtx, 0, filepath, 0);
    cout << "-------------------------------------------------" << endl;
    //对图形进行宽度上方的裁剪，以便于显示得更好
    struct SwsContext *img_convert_ctx = sws_getContext(pCodecCtx->width, pCodecCtx->height, pCodecCtx->pix_fmt, pCodecCtx->width, pCodecCtx->height, AV_PIX_FMT_YUV420P, SWS_BICUBIC, NULL, NULL, NULL);

    int got_picture;
    while (av_read_frame(pFormatCtx, packet) >= 0)
    {
        if (packet->stream_index == videoindex)//读取一帧压缩数据
        {
            fwrite(packet->data, 1, packet->size, fp_h264); //把H264数据写入fp_h264文件
            int ret = avcodec_decode_video2(pCodecCtx, pFrame, &got_picture, packet);//解码一帧压缩数据
            if (ret < 0)
            {
                cout << "Decode Error." << endl;
                return -1;
            }
            if (got_picture)
            {
                sws_scale(img_convert_ctx, (const uint8_t* const*)pFrame->data, pFrame->linesize, 0, pCodecCtx->height, pFrameYUV->data, pFrameYUV->linesize);
                int y_size = pCodecCtx->width*pCodecCtx->height;
                fwrite(pFrameYUV->data[0], 1, y_size, fp_yuv);    //Y
                fwrite(pFrameYUV->data[1], 1, y_size / 4, fp_yuv);  //U
                fwrite(pFrameYUV->data[2], 1, y_size / 4, fp_yuv);  //V
                cout << "Succeed to decode frame " << pCodecCtx->frame_number << endl;
            }
        }
        av_free_packet(packet);
    }
    //flush decoder
    while (1)
    {
        int ret = avcodec_decode_video2(pCodecCtx, pFrame, &got_picture, packet);
        if (ret < 0)
            break;
        if (!got_picture)
            break;
        sws_scale(img_convert_ctx, (const uint8_t* const*)pFrame->data, pFrame->linesize, 0, pCodecCtx->height, pFrameYUV->data, pFrameYUV->linesize);
        int y_size = pCodecCtx->width*pCodecCtx->height;
        fwrite(pFrameYUV->data[0], 1, y_size, fp_yuv);    //Y
        fwrite(pFrameYUV->data[1], 1, y_size / 4, fp_yuv);  //U
        fwrite(pFrameYUV->data[2], 1, y_size / 4, fp_yuv);  //V
        cout << "Succeed to decode frame " << pCodecCtx->frame_number << endl;
    }
    sws_freeContext(img_convert_ctx);
    //关闭文件以及释放内存
    fclose(fp_yuv);
    fclose(fp_h264);
    av_frame_free(&pFrameYUV);
    av_frame_free(&pFrame);
    avcodec_close(pCodecCtx);
    avformat_close_input(&pFormatCtx);
    return getchar();
}
#endif //FFMPEGDEMO_DECODE_VIDEO2_H
