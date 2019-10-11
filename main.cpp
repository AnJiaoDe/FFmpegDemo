#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <remuxer.h>
//#include <encode_video.h>
#include <decode_video.h>
int main() {
//    main_remuxer("../resources/video.avi","../resources/video.mp4");
//    main_encode_video("../resources/video.h264",AV_CODEC_ID_H264);//播放过程卡死
//    main_encode_video("../resources/video.mpeg4",AV_CODEC_ID_MPEG4);
//    main_encode_video("../resources/video.flv",AV_CODEC_ID_FLV1);//不支持


    devode_video("../resources/video.h264", "../resources/decode_video.yuv", AV_CODEC_ID_H264);
    system("pause");
    return 0;
}