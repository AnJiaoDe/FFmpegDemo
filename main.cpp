#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <remuxer.h>
#include <encode_video.h>
#include <decode_video.h>
#include <test.h>
//#include <encode_test.h>
#include <decode_video2.h>
#include <demuxer.h>
#include <demuxer_test.h>
int main() {
//    main_remuxer("../resources/video.avi","../resources/video.mp4");
//    main_encode_video("../resources/video.h264",AV_CODEC_ID_H264);//播放过程卡死
//    main_encode_video("../resources/video.mpeg4",AV_CODEC_ID_MPEG4);
//    main_encode_video("../resources/video.flv",AV_CODEC_ID_FLV1);//不支持
//    main_devode_video("../resources/video.h264", "../resources/video_1920x1080.yuv", AV_CODEC_ID_H264);
//    main_demuxe("../resources/video.mp4", "../resources/demuxed.h264");
//    main_test_decode("../resources/video.h264", "../resources/video_1920x1080.yuv");
//    main_encode_test("../resources/decode_video.yuv", "../resources/decoded_video.h264");
//    main_decode_video2();
//    main_demuxe_test();
    main_encode_video("../resources/video_1920x1080.yuv","../resources/video_1920x1080.h264");
    system("pause");
    return 0;
}