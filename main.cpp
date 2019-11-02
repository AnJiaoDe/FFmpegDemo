#define  _CRT_SECURE_NO_WARNINGS

#include <iostream>
//#include <remuxer.h>
//#include <encode_video_yuv_h264_lxy.h>
//#include <encode_video_yuv_h264.h>
#include <encode_audio_pcm_aac.h>
//#include <encode_audio_pcm_aac_lxy.h>

int main() {
//    main_remuxer("../resources/video.avi","../resources/video.mp4");
//    main_encode_video("../resources/video_1920x1080.yuv","../resources/video_1920x1080.h264");
//    main_encode_video_yuv_h264("../resources/video_1920x1080.yuv","../resources/video_1920x1080.h264",AV_PIX_FMT_YUV420P,1920,1080,30);
    main_encode_audio_pcm_aac("../resources/video.pcm", "../resources/video.aac");
//    main_encode_audio_pcm_aac_lxy("../resources/video.pcm", "../resources/video.aac");
//    system("F:\\ È\\ffmpeg\\ffmpeg-20190926-87ddf9f-win64-shared\\bin\\ffmpeg -i C:\\Users\\Administrator\\Desktop\\video.mp4 -vn -sn -y -acodec copy  ../resources/video.aac");
    system("pause");
    return 0;
}