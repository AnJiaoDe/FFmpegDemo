#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <remuxer.h>
//#include <encode_video.h>
#include <decode_video.h>
#include <test.h>
#include <encode_test.h>
int main() {
//    main_remuxer("../resources/video.avi","../resources/video.mp4");
//    main_encode_video("../resources/video.h264",AV_CODEC_ID_H264);//播放过程卡死
//    main_encode_video("../resources/video.mpeg4",AV_CODEC_ID_MPEG4);
//    main_encode_video("../resources/video.flv",AV_CODEC_ID_FLV1);//不支持


//    main_devode_video("../resources/video.h264", "../resources/decode_video.yuv", AV_CODEC_ID_H264);
//    main_test_decode("../resources/video.h264", "../resources/decode_video.yuv");
    main_encode_test("../resources/decode_video.yuv", "../resources/decoded_video.h264");
    system("pause");
    return 0;
}