cmake_minimum_required(VERSION 3.14)
project(FFmpegDemo)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)
include_directories(ffmpeg/include)
link_directories(ffmpeg/lib)

link_libraries(avcodec)
link_libraries(avformat)
link_libraries(avutil)
link_libraries(avdevice)
link_libraries(avfilter)
link_libraries(postproc)
link_libraries(swresample)
link_libraries(swscale)

add_executable(FFmpegDemo main.cpp)

