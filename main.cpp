#include <iostream>
#include <remuxer.h>
#include <encode_video.h>
int main() {
//    main_remuxer("../resources/video.avi","../resources/video.mp4");
    main_encode_video("../resources/480x720.yuv","../resources/video.h264");
    system("pause");
    return 0;
}