
G:\IT\ffmpeg\ffmpeg-20190926-87ddf9f-win64-shared\bin>ffmpeg -help
ffmpeg version N-95111-g87ddf9f1ef Copyright (c) 2000-2019 the FFmpeg developers
  built with gcc 9.2.1 (GCC) 20190918
  configuration: --disable-static --enable-shared --enable-gpl --enable-version3 --enable-sdl2 --enable-fontconfig --enable-gnutls --enable-iconv --enable-libass --enable-libdav1d --enable-libbluray --enable-libfreetype --enable-libmp3lame --enable-libopencore-amrnb --enable-libopencore-amrwb --enable-libopenjpeg --enable-libopus --enable-libshine --enable-libsnappy --enable-libsoxr --enable-libtheora --enable-libtwolame --enable-libvpx --enable-libwavpack --enable-libwebp --enable-libx264 --enable-libx265 --enable-libxml2 --enable-libzimg --enable-lzma --enable-zlib --enable-gmp --enable-libvidstab --enable-libvorbis --enable-libvo-amrwbenc --enable-libmysofa --enable-libspeex --enable-libxvid --enable-libaom --enable-libmfx --enable-ffnvcodec --enable-cuvid --enable-d3d11va --enable-nvenc --enable-nvdec --enable-dxva2 --enable-avisynth --enable-libopenmpt --enable-amf
  libavutil      56. 35.100 / 56. 35.100
  libavcodec     58. 59.100 / 58. 59.100
  libavformat    58. 33.100 / 58. 33.100
  libavdevice    58.  9.100 / 58.  9.100
  libavfilter     7. 59.100 /  7. 59.100
  libswscale      5.  6.100 /  5.  6.100
  libswresample   3.  6.100 /  3.  6.100
  libpostproc    55.  6.100 / 55.  6.100
Hyper fast Audio and Video encoder
usage: ffmpeg [options] [[infile options] -i infile]... {[outfile options] outfile}...

Getting help:
    -h      -- print basic options
    -h long -- print more options
    -h full -- print all options (including all format and codec specific options, very long)
    -h type=name -- print all options for the named decoder/encoder/demuxer/muxer/filter/bsf
    See man ffmpeg for detailed description of the options.

Print help / information / capabilities:
-L                  show license
-h topic            show help
-? topic            show help
-help topic         show help
--help topic        show help
-version            show version
-buildconf          show build configuration
-formats            show available formats
-muxers             show available muxers
-demuxers           show available demuxers
-devices            show available devices
-codecs             show available codecs
-decoders           show available decoders
-encoders           show available encoders
-bsfs               show available bit stream filters
-protocols          show available protocols
-filters            show available filters
-pix_fmts           show available pixel formats
-layouts            show standard channel layouts
-sample_fmts        show available audio sample formats
-colors             show available color names
-sources device     list sources of the input device
-sinks device       list sinks of the output device
-hwaccels           show available HW acceleration methods

Global options (affect whole program instead of just one file:
-loglevel loglevel  set logging level
-v loglevel         set logging level
-report             generate a report
-max_alloc bytes    set maximum size of a single allocated block
-y                  overwrite output files
-n                  never overwrite output files
-ignore_unknown     Ignore unknown stream types
-filter_threads     number of non-complex filter threads
-filter_complex_threads  number of threads for -filter_complex
-stats              print progress report during encoding
-max_error_rate maximum error rate  ratio of errors (0.0: no errors, 1.0: 100% errors) above which ffmpeg returns an error instead of success.
-bits_per_raw_sample number  set the number of bits per raw sample
-vol volume         change audio volume (256=normal)

Per-file main options:
-f fmt              force format
-c codec            codec name
-codec codec        codec name
-pre preset         preset name
-map_metadata outfile[,metadata]:infile[,metadata]  set metadata information of outfile from infile
-t duration         record or transcode "duration" seconds of audio/video
-to time_stop       record or transcode stop time
-fs limit_size      set the limit file size in bytes
-ss time_off        set the start time offset
-sseof time_off     set the start time offset relative to EOF
-seek_timestamp     enable/disable seeking by timestamp with -ss
-timestamp time     set the recording timestamp ('now' to set the current time)
-metadata string=string  add metadata
-program title=string:st=number...  add program with specified streams
-target type        specify target file type ("vcd", "svcd", "dvd", "dv" or "dv50" with optional prefixes "pal-", "ntsc-" or "film-")
-apad               audio pad
-frames number      set the number of frames to output
-filter filter_graph  set stream filtergraph
-filter_script filename  read stream filtergraph description from a file
-reinit_filter      reinit filtergraph on input parameter changes
-discard            discard
-disposition        disposition

Video options:
-vframes number     set the number of video frames to output
-r rate             set frame rate (Hz value, fraction or abbreviation)
-s size             set frame size (WxH or abbreviation)
-aspect aspect      set aspect ratio (4:3, 16:9 or 1.3333, 1.7777)
-bits_per_raw_sample number  set the number of bits per raw sample
-vn                 disable video
-vcodec codec       force video codec ('copy' to copy stream)
-timecode hh:mm:ss[:;.]ff  set initial TimeCode value.
-pass n             select the pass number (1 to 3)
-vf filter_graph    set video filters
-ab bitrate         audio bitrate (please use -b:a)
-b bitrate          video bitrate (please use -b:v)
-dn                 disable data

Audio options:
-aframes number     set the number of audio frames to output
-aq quality         set audio quality (codec-specific)
-ar rate            set audio sampling rate (in Hz)
-ac channels        set number of audio channels
-an                 disable audio
-acodec codec       force audio codec ('copy' to copy stream)
-vol volume         change audio volume (256=normal)
-af filter_graph    set audio filters

Subtitle options:
-s size             set frame size (WxH or abbreviation)
-sn                 disable subtitle
-scodec codec       force subtitle codec ('copy' to copy stream)
-stag fourcc/tag    force subtitle tag/fourcc
-fix_sub_duration   fix subtitles duration
-canvas_size size   set canvas size (WxH or abbreviation)
-spre preset        set the subtitle options to the indicated preset



G:\IT\ffmpeg\ffmpeg-20190926-87ddf9f-win64-shared\bin>ffmpeg -help long
ffmpeg version N-95111-g87ddf9f1ef Copyright (c) 2000-2019 the FFmpeg developers
  built with gcc 9.2.1 (GCC) 20190918
  configuration: --disable-static --enable-shared --enable-gpl --enable-version3 --enable-sdl2 --enable-fontconfig --enable-gnutls --enable-iconv --enable-libass --enable-libdav1d --enable-libbluray --enable-libfreetype --enable-libmp3lame --enable-libopencore-amrnb --enable-libopencore-amrwb --enable-libopenjpeg --enable-libopus --enable-libshine --enable-libsnappy --enable-libsoxr --enable-libtheora --enable-libtwolame --enable-libvpx --enable-libwavpack --enable-libwebp --enable-libx264 --enable-libx265 --enable-libxml2 --enable-libzimg --enable-lzma --enable-zlib --enable-gmp --enable-libvidstab --enable-libvorbis --enable-libvo-amrwbenc --enable-libmysofa --enable-libspeex --enable-libxvid --enable-libaom --enable-libmfx --enable-ffnvcodec --enable-cuvid --enable-d3d11va --enable-nvenc --enable-nvdec --enable-dxva2 --enable-avisynth --enable-libopenmpt --enable-amf
  libavutil      56. 35.100 / 56. 35.100
  libavcodec     58. 59.100 / 58. 59.100
  libavformat    58. 33.100 / 58. 33.100
  libavdevice    58.  9.100 / 58.  9.100
  libavfilter     7. 59.100 /  7. 59.100
  libswscale      5.  6.100 /  5.  6.100
  libswresample   3.  6.100 /  3.  6.100
  libpostproc    55.  6.100 / 55.  6.100
Hyper fast Audio and Video encoder
usage: ffmpeg [options] [[infile options] -i infile]... {[outfile options] outfile}...

Getting help:
    -h      -- print basic options
    -h long -- print more options
    -h full -- print all options (including all format and codec specific options, very long)
    -h type=name -- print all options for the named decoder/encoder/demuxer/muxer/filter/bsf
    See man ffmpeg for detailed description of the options.

Print help / information / capabilities:
-L                  show license
-h topic            show help
-? topic            show help
-help topic         show help
--help topic        show help
-version            show version
-buildconf          show build configuration
-formats            show available formats
-muxers             show available muxers
-demuxers           show available demuxers
-devices            show available devices
-codecs             show available codecs
-decoders           show available decoders
-encoders           show available encoders
-bsfs               show available bit stream filters
-protocols          show available protocols
-filters            show available filters
-pix_fmts           show available pixel formats
-layouts            show standard channel layouts
-sample_fmts        show available audio sample formats
-colors             show available color names
-sources device     list sources of the input device
-sinks device       list sinks of the output device
-hwaccels           show available HW acceleration methods

Global options (affect whole program instead of just one file:
-loglevel loglevel  set logging level
-v loglevel         set logging level
-report             generate a report
-max_alloc bytes    set maximum size of a single allocated block
-y                  overwrite output files
-n                  never overwrite output files
-ignore_unknown     Ignore unknown stream types
-filter_threads     number of non-complex filter threads
-filter_complex_threads  number of threads for -filter_complex
-stats              print progress report during encoding
-max_error_rate maximum error rate  ratio of errors (0.0: no errors, 1.0: 100% errors) above which ffmpeg returns an error instead of success.
-bits_per_raw_sample number  set the number of bits per raw sample
-vol volume         change audio volume (256=normal)

Advanced global options:
-cpuflags flags     force specific cpu flags
-hide_banner hide_banner  do not show program banner
-copy_unknown       Copy unknown stream types
-benchmark          add timings for benchmarking
-benchmark_all      add timings for each task
-progress url       write program-readable progress information
-stdin              enable or disable interaction on standard input
-timelimit limit    set max runtime in seconds
-dump               dump each input packet
-hex                when dumping packets, also dump the payload
-vsync              video sync method
-frame_drop_threshold   frame drop threshold
-async              audio sync method
-adrift_threshold threshold  audio drift threshold
-copyts             copy timestamps
-start_at_zero      shift input timestamps to start at 0 when using copyts
-copytb mode        copy input stream time base when stream copying
-dts_delta_threshold threshold  timestamp discontinuity delta threshold
-dts_error_threshold threshold  timestamp error delta threshold
-xerror error       exit on error
-abort_on flags     abort on the specified condition flags
-filter_complex graph_description  create a complex filtergraph
-lavfi graph_description  create a complex filtergraph
-filter_complex_script filename  read complex filtergraph description from a file
-debug_ts           print timestamp debugging info
-intra              deprecated use -g 1
-sameq              Removed
-same_quant         Removed
-deinterlace        this option is deprecated, use the yadif filter instead
-psnr               calculate PSNR of compressed frames
-vstats             dump video coding statistics to file
-vstats_file file   dump video coding statistics to file
-vstats_version     Version of the vstats format to use.
-qphist             show QP histogram
-vc channel         deprecated, use -channel
-tvstd standard     deprecated, use -standard
-isync              this option is deprecated and does nothing
-sdp_file file      specify a file in which to print sdp information
-qsv_device device  set QSV hardware device (DirectX adapter index, DRM path or X11 display name)
-init_hw_device args  initialise hardware device
-filter_hw_device device  set hardware device used when filtering

Per-file main options:
-f fmt              force format
-c codec            codec name
-codec codec        codec name
-pre preset         preset name
-map_metadata outfile[,metadata]:infile[,metadata]  set metadata information of outfile from infile
-t duration         record or transcode "duration" seconds of audio/video
-to time_stop       record or transcode stop time
-fs limit_size      set the limit file size in bytes
-ss time_off        set the start time offset
-sseof time_off     set the start time offset relative to EOF
-seek_timestamp     enable/disable seeking by timestamp with -ss
-timestamp time     set the recording timestamp ('now' to set the current time)
-metadata string=string  add metadata
-program title=string:st=number...  add program with specified streams
-target type        specify target file type ("vcd", "svcd", "dvd", "dv" or "dv50" with optional prefixes "pal-", "ntsc-" or "film-")
-apad               audio pad
-frames number      set the number of frames to output
-filter filter_graph  set stream filtergraph
-filter_script filename  read stream filtergraph description from a file
-reinit_filter      reinit filtergraph on input parameter changes
-discard            discard
-disposition        disposition

Advanced per-file options:
-map [-]input_file_id[:stream_specifier][,sync_file_id[:stream_s  set input stream mapping
-map_channel file.stream.channel[:syncfile.syncstream]  map an audio channel from one stream to another
-map_chapters input_file_index  set chapters mapping
-accurate_seek      enable/disable accurate seeking with -ss
-itsoffset time_off  set the input ts offset
-itsscale scale     set the input ts scale
-dframes number     set the number of data frames to output
-re                 read input at native frame rate
-shortest           finish encoding within shortest input
-bitexact           bitexact mode
-copyinkf           copy initial non-keyframes
-copypriorss        copy or discard frames before start time
-tag fourcc/tag     force codec tag/fourcc
-q q                use fixed quality scale (VBR)
-qscale q           use fixed quality scale (VBR)
-profile profile    set profile
-attach filename    add an attachment to the output file
-dump_attachment filename  extract an attachment into a file
-stream_loop loop count  set number of times input stream shall be looped
-thread_queue_size  set the maximum number of queued packets from the demuxer
-find_stream_info   read and decode the streams to fill missing information with heuristics
-autorotate         automatically insert correct rotate filters
-muxdelay seconds   set the maximum demux-decode delay
-muxpreload seconds  set the initial demux-decode delay
-time_base ratio    set the desired time base hint for output stream (1:24, 1:48000 or 0.04166, 2.0833e-5)
-enc_time_base ratio  set the desired time base for the encoder (1:24, 1:48000 or 0.04166, 2.0833e-5). two special values are defined - 0 = use frame rate (video) or sample rate (audio),-1 = match source time base
-bsf bitstream_filters  A comma-separated list of bitstream filters
-fpre filename      set options from indicated preset file
-max_muxing_queue_size packets  maximum number of packets that can be buffered while waiting for all streams to initialize
-dcodec codec       force data codec ('copy' to copy stream)

Video options:
-vframes number     set the number of video frames to output
-r rate             set frame rate (Hz value, fraction or abbreviation)
-s size             set frame size (WxH or abbreviation)
-aspect aspect      set aspect ratio (4:3, 16:9 or 1.3333, 1.7777)
-bits_per_raw_sample number  set the number of bits per raw sample
-vn                 disable video
-vcodec codec       force video codec ('copy' to copy stream)
-timecode hh:mm:ss[:;.]ff  set initial TimeCode value.
-pass n             select the pass number (1 to 3)
-vf filter_graph    set video filters
-ab bitrate         audio bitrate (please use -b:a)
-b bitrate          video bitrate (please use -b:v)
-dn                 disable data

Advanced Video options:
-pix_fmt format     set pixel format
-intra              deprecated use -g 1
-rc_override override  rate control override for specific intervals
-sameq              Removed
-same_quant         Removed
-passlogfile prefix  select two pass log file name prefix
-deinterlace        this option is deprecated, use the yadif filter instead
-psnr               calculate PSNR of compressed frames
-vstats             dump video coding statistics to file
-vstats_file file   dump video coding statistics to file
-vstats_version     Version of the vstats format to use.
-intra_matrix matrix  specify intra matrix coeffs
-inter_matrix matrix  specify inter matrix coeffs
-chroma_intra_matrix matrix  specify intra matrix coeffs
-top                top=1/bottom=0/auto=-1 field first
-vtag fourcc/tag    force video tag/fourcc
-qphist             show QP histogram
-force_fps          force the selected framerate, disable the best supported framerate selection
-streamid streamIndex:value  set the value of an outfile streamid
-force_key_frames timestamps  force key frames at specified timestamps
-hwaccel hwaccel name  use HW accelerated decoding
-hwaccel_device devicename  select a device for HW acceleration
-hwaccel_output_format format  select output format used with HW accelerated decoding
-vc channel         deprecated, use -channel
-tvstd standard     deprecated, use -standard
-vbsf video bitstream_filters  deprecated
-vpre preset        set the video options to the indicated preset

Audio options:
-aframes number     set the number of audio frames to output
-aq quality         set audio quality (codec-specific)
-ar rate            set audio sampling rate (in Hz)
-ac channels        set number of audio channels
-an                 disable audio
-acodec codec       force audio codec ('copy' to copy stream)
-vol volume         change audio volume (256=normal)
-af filter_graph    set audio filters

Advanced Audio options:
-atag fourcc/tag    force audio tag/fourcc
-sample_fmt format  set sample format
-channel_layout layout  set channel layout
-guess_layout_max   set the maximum number of channels to try to guess the channel layout
-absf audio bitstream_filters  deprecated
-apre preset        set the audio options to the indicated preset

Subtitle options:
-s size             set frame size (WxH or abbreviation)
-sn                 disable subtitle
-scodec codec       force subtitle codec ('copy' to copy stream)
-stag fourcc/tag    force subtitle tag/fourcc
-fix_sub_duration   fix subtitles duration
-canvas_size size   set canvas size (WxH or abbreviation)
-spre preset        set the subtitle options to the indicated preset



G:\IT\ffmpeg\ffmpeg-20190926-87ddf9f-win64-shared\bin>ffmpeg -help full
ffmpeg version N-95111-g87ddf9f1ef Copyright (c) 2000-2019 the FFmpeg developers
  built with gcc 9.2.1 (GCC) 20190918
  configuration: --disable-static --enable-shared --enable-gpl --enable-version3 --enable-sdl2 --enable-fontconfig --enable-gnutls --enable-iconv --enable-libass --enable-libdav1d --enable-libbluray --enable-libfreetype --enable-libmp3lame --enable-libopencore-amrnb --enable-libopencore-amrwb --enable-libopenjpeg --enable-libopus --enable-libshine --enable-libsnappy --enable-libsoxr --enable-libtheora --enable-libtwolame --enable-libvpx --enable-libwavpack --enable-libwebp --enable-libx264 --enable-libx265 --enable-libxml2 --enable-libzimg --enable-lzma --enable-zlib --enable-gmp --enable-libvidstab --enable-libvorbis --enable-libvo-amrwbenc --enable-libmysofa --enable-libspeex --enable-libxvid --enable-libaom --enable-libmfx --enable-ffnvcodec --enable-cuvid --enable-d3d11va --enable-nvenc --enable-nvdec --enable-dxva2 --enable-avisynth --enable-libopenmpt --enable-amf
  libavutil      56. 35.100 / 56. 35.100
  libavcodec     58. 59.100 / 58. 59.100
  libavformat    58. 33.100 / 58. 33.100
  libavdevice    58.  9.100 / 58.  9.100
  libavfilter     7. 59.100 /  7. 59.100
  libswscale      5.  6.100 /  5.  6.100
  libswresample   3.  6.100 /  3.  6.100
  libpostproc    55.  6.100 / 55.  6.100
Hyper fast Audio and Video encoder
usage: ffmpeg [options] [[infile options] -i infile]... {[outfile options] outfile}...

Getting help:
    -h      -- print basic options
    -h long -- print more options
    -h full -- print all options (including all format and codec specific options, very long)
    -h type=name -- print all options for the named decoder/encoder/demuxer/muxer/filter/bsf
    See man ffmpeg for detailed description of the options.

Print help / information / capabilities:
-L                  show license
-h topic            show help
-? topic            show help
-help topic         show help
--help topic        show help
-version            show version
-buildconf          show build configuration
-formats            show available formats
-muxers             show available muxers
-demuxers           show available demuxers
-devices            show available devices
-codecs             show available codecs
-decoders           show available decoders
-encoders           show available encoders
-bsfs               show available bit stream filters
-protocols          show available protocols
-filters            show available filters
-pix_fmts           show available pixel formats
-layouts            show standard channel layouts
-sample_fmts        show available audio sample formats
-colors             show available color names
-sources device     list sources of the input device
-sinks device       list sinks of the output device
-hwaccels           show available HW acceleration methods

Global options (affect whole program instead of just one file:
-loglevel loglevel  set logging level
-v loglevel         set logging level
-report             generate a report
-max_alloc bytes    set maximum size of a single allocated block
-y                  overwrite output files
-n                  never overwrite output files
-ignore_unknown     Ignore unknown stream types
-filter_threads     number of non-complex filter threads
-filter_complex_threads  number of threads for -filter_complex
-stats              print progress report during encoding
-max_error_rate maximum error rate  ratio of errors (0.0: no errors, 1.0: 100% errors) above which ffmpeg returns an error instead of success.
-bits_per_raw_sample number  set the number of bits per raw sample
-vol volume         change audio volume (256=normal)

Advanced global options:
-cpuflags flags     force specific cpu flags
-hide_banner hide_banner  do not show program banner
-copy_unknown       Copy unknown stream types
-benchmark          add timings for benchmarking
-benchmark_all      add timings for each task
-progress url       write program-readable progress information
-stdin              enable or disable interaction on standard input
-timelimit limit    set max runtime in seconds
-dump               dump each input packet
-hex                when dumping packets, also dump the payload
-vsync              video sync method
-frame_drop_threshold   frame drop threshold
-async              audio sync method
-adrift_threshold threshold  audio drift threshold
-copyts             copy timestamps
-start_at_zero      shift input timestamps to start at 0 when using copyts
-copytb mode        copy input stream time base when stream copying
-dts_delta_threshold threshold  timestamp discontinuity delta threshold
-dts_error_threshold threshold  timestamp error delta threshold
-xerror error       exit on error
-abort_on flags     abort on the specified condition flags
-filter_complex graph_description  create a complex filtergraph
-lavfi graph_description  create a complex filtergraph
-filter_complex_script filename  read complex filtergraph description from a file
-debug_ts           print timestamp debugging info
-intra              deprecated use -g 1
-sameq              Removed
-same_quant         Removed
-deinterlace        this option is deprecated, use the yadif filter instead
-psnr               calculate PSNR of compressed frames
-vstats             dump video coding statistics to file
-vstats_file file   dump video coding statistics to file
-vstats_version     Version of the vstats format to use.
-qphist             show QP histogram
-vc channel         deprecated, use -channel
-tvstd standard     deprecated, use -standard
-isync              this option is deprecated and does nothing
-sdp_file file      specify a file in which to print sdp information
-qsv_device device  set QSV hardware device (DirectX adapter index, DRM path or X11 display name)
-init_hw_device args  initialise hardware device
-filter_hw_device device  set hardware device used when filtering

Per-file main options:
-f fmt              force format
-c codec            codec name
-codec codec        codec name
-pre preset         preset name
-map_metadata outfile[,metadata]:infile[,metadata]  set metadata information of outfile from infile
-t duration         record or transcode "duration" seconds of audio/video
-to time_stop       record or transcode stop time
-fs limit_size      set the limit file size in bytes
-ss time_off        set the start time offset
-sseof time_off     set the start time offset relative to EOF
-seek_timestamp     enable/disable seeking by timestamp with -ss
-timestamp time     set the recording timestamp ('now' to set the current time)
-metadata string=string  add metadata
-program title=string:st=number...  add program with specified streams
-target type        specify target file type ("vcd", "svcd", "dvd", "dv" or "dv50" with optional prefixes "pal-", "ntsc-" or "film-")
-apad               audio pad
-frames number      set the number of frames to output
-filter filter_graph  set stream filtergraph
-filter_script filename  read stream filtergraph description from a file
-reinit_filter      reinit filtergraph on input parameter changes
-discard            discard
-disposition        disposition

Advanced per-file options:
-map [-]input_file_id[:stream_specifier][,sync_file_id[:stream_s  set input stream mapping
-map_channel file.stream.channel[:syncfile.syncstream]  map an audio channel from one stream to another
-map_chapters input_file_index  set chapters mapping
-accurate_seek      enable/disable accurate seeking with -ss
-itsoffset time_off  set the input ts offset
-itsscale scale     set the input ts scale
-dframes number     set the number of data frames to output
-re                 read input at native frame rate
-shortest           finish encoding within shortest input
-bitexact           bitexact mode
-copyinkf           copy initial non-keyframes
-copypriorss        copy or discard frames before start time
-tag fourcc/tag     force codec tag/fourcc
-q q                use fixed quality scale (VBR)
-qscale q           use fixed quality scale (VBR)
-profile profile    set profile
-attach filename    add an attachment to the output file
-dump_attachment filename  extract an attachment into a file
-stream_loop loop count  set number of times input stream shall be looped
-thread_queue_size  set the maximum number of queued packets from the demuxer
-find_stream_info   read and decode the streams to fill missing information with heuristics
-autorotate         automatically insert correct rotate filters
-muxdelay seconds   set the maximum demux-decode delay
-muxpreload seconds  set the initial demux-decode delay
-time_base ratio    set the desired time base hint for output stream (1:24, 1:48000 or 0.04166, 2.0833e-5)
-enc_time_base ratio  set the desired time base for the encoder (1:24, 1:48000 or 0.04166, 2.0833e-5). two special values are defined - 0 = use frame rate (video) or sample rate (audio),-1 = match source time base
-bsf bitstream_filters  A comma-separated list of bitstream filters
-fpre filename      set options from indicated preset file
-max_muxing_queue_size packets  maximum number of packets that can be buffered while waiting for all streams to initialize
-dcodec codec       force data codec ('copy' to copy stream)

Video options:
-vframes number     set the number of video frames to output
-r rate             set frame rate (Hz value, fraction or abbreviation)
-s size             set frame size (WxH or abbreviation)
-aspect aspect      set aspect ratio (4:3, 16:9 or 1.3333, 1.7777)
-bits_per_raw_sample number  set the number of bits per raw sample
-vn                 disable video
-vcodec codec       force video codec ('copy' to copy stream)
-timecode hh:mm:ss[:;.]ff  set initial TimeCode value.
-pass n             select the pass number (1 to 3)
-vf filter_graph    set video filters
-ab bitrate         audio bitrate (please use -b:a)
-b bitrate          video bitrate (please use -b:v)
-dn                 disable data

Advanced Video options:
-pix_fmt format     set pixel format
-intra              deprecated use -g 1
-rc_override override  rate control override for specific intervals
-sameq              Removed
-same_quant         Removed
-passlogfile prefix  select two pass log file name prefix
-deinterlace        this option is deprecated, use the yadif filter instead
-psnr               calculate PSNR of compressed frames
-vstats             dump video coding statistics to file
-vstats_file file   dump video coding statistics to file
-vstats_version     Version of the vstats format to use.
-intra_matrix matrix  specify intra matrix coeffs
-inter_matrix matrix  specify inter matrix coeffs
-chroma_intra_matrix matrix  specify intra matrix coeffs
-top                top=1/bottom=0/auto=-1 field first
-vtag fourcc/tag    force video tag/fourcc
-qphist             show QP histogram
-force_fps          force the selected framerate, disable the best supported framerate selection
-streamid streamIndex:value  set the value of an outfile streamid
-force_key_frames timestamps  force key frames at specified timestamps
-hwaccel hwaccel name  use HW accelerated decoding
-hwaccel_device devicename  select a device for HW acceleration
-hwaccel_output_format format  select output format used with HW accelerated decoding
-vc channel         deprecated, use -channel
-tvstd standard     deprecated, use -standard
-vbsf video bitstream_filters  deprecated
-vpre preset        set the video options to the indicated preset

Audio options:
-aframes number     set the number of audio frames to output
-aq quality         set audio quality (codec-specific)
-ar rate            set audio sampling rate (in Hz)
-ac channels        set number of audio channels
-an                 disable audio
-acodec codec       force audio codec ('copy' to copy stream)
-vol volume         change audio volume (256=normal)
-af filter_graph    set audio filters

Advanced Audio options:
-atag fourcc/tag    force audio tag/fourcc
-sample_fmt format  set sample format
-channel_layout layout  set channel layout
-guess_layout_max   set the maximum number of channels to try to guess the channel layout
-absf audio bitstream_filters  deprecated
-apre preset        set the audio options to the indicated preset

Subtitle options:
-s size             set frame size (WxH or abbreviation)
-sn                 disable subtitle
-scodec codec       force subtitle codec ('copy' to copy stream)
-stag fourcc/tag    force subtitle tag/fourcc
-fix_sub_duration   fix subtitles duration
-canvas_size size   set canvas size (WxH or abbreviation)
-spre preset        set the subtitle options to the indicated preset


AVCodecContext AVOptions:
  -b                 <int64>      E..VA.... set bitrate (in bits/s) (from 0 to I64_MAX) (default 200000)
  -ab                <int64>      E...A.... set bitrate (in bits/s) (from 0 to INT_MAX) (default 128000)
  -bt                <int>        E..V..... Set video bitrate tolerance (in bits/s). In 1-pass mode, bitrate tolerance specifies how far ratecontrol is willing to deviate from the target average bitrate value. This is not related to minimum/maximum bitrate. Lowering tolerance too much has an adverse effect on quality. (from 1 to INT_MAX) (default 4000000)
  -flags             <flags>      ED.VAS... (default 0)
     unaligned                    .D.V..... allow decoders to produce unaligned output
     mv4                          E..V..... use four motion vectors per macroblock (MPEG-4)
     qpel                         E..V..... use 1/4-pel motion compensation
     loop                         E..V..... use loop filter
     gray                         ED.V..... only decode/encode grayscale
     psnr                         E..V..... error[?] variables will be set during encoding
     truncated                    .D.V..... Input bitstream might be randomly truncated
     ildct                        E..V..... use interlaced DCT
     low_delay                    ED.V..... force low delay
     global_header                E..VA.... place global headers in extradata instead of every keyframe
     bitexact                     ED.VAS... use only bitexact functions (except (I)DCT)
     aic                          E..V..... H.263 advanced intra coding / MPEG-4 AC prediction
     ilme                         E..V..... interlaced motion estimation
     cgop                         E..V..... closed GOP
     output_corrupt               .D.V..... Output even potentially corrupted frames
     drop_changed                 .D.VA.... Drop frames whose parameters differ from first decoded frame
  -flags2            <flags>      ED.VA.... (default 0)
     fast                         E..V..... allow non-spec-compliant speedup tricks
     noout                        E..V..... skip bitstream encoding
     ignorecrop                   .D.V..... ignore cropping information from sps
     local_header                 E..V..... place global headers at every keyframe instead of in extradata
     chunks                       .D.V..... Frame data might be split into multiple chunks
     showall                      .D.V..... Show all frames before the first keyframe
     export_mvs                   .D.V..... export motion vectors through frame side data
     skip_manual                  .D.V..... do not skip samples and export skip information as frame side data
     ass_ro_flush_noop              .D...S... do not reset ASS ReadOrder field on flush
  -g                 <int>        E..V..... set the group of picture (GOP) size (from INT_MIN to INT_MAX) (default 12)
  -ar                <int>        ED..A.... set audio sampling rate (in Hz) (from 0 to INT_MAX) (default 0)
  -ac                <int>        ED..A.... set number of audio channels (from 0 to INT_MAX) (default 0)
  -cutoff            <int>        E...A.... set cutoff bandwidth (from INT_MIN to INT_MAX) (default 0)
  -frame_size        <int>        E...A.... (from 0 to INT_MAX) (default 0)
  -qcomp             <float>      E..V..... video quantizer scale compression (VBR). Constant of ratecontrol equation. Recommended range for default rc_eq: 0.0-1.0 (from -FLT_MAX to FLT_MAX) (default 0.5)
  -qblur             <float>      E..V..... video quantizer scale blur (VBR) (from -1 to FLT_MAX) (default 0.5)
  -qmin              <int>        E..V..... minimum video quantizer scale (VBR) (from -1 to 69) (default 2)
  -qmax              <int>        E..V..... maximum video quantizer scale (VBR) (from -1 to 1024) (default 31)
  -qdiff             <int>        E..V..... maximum difference between the quantizer scales (VBR) (from INT_MIN to INT_MAX) (default 3)
  -bf                <int>        E..V..... set maximum number of B-frames between non-B-frames (from -1 to INT_MAX) (default 0)
  -b_qfactor         <float>      E..V..... QP factor between P- and B-frames (from -FLT_MAX to FLT_MAX) (default 1.25)
  -b_strategy        <int>        E..V..... strategy to choose between I/P/B-frames (from INT_MIN to INT_MAX) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -bug               <flags>      .D.V..... work around not autodetected encoder bugs (default autodetect)
     autodetect                   .D.V.....
     xvid_ilace                   .D.V..... Xvid interlacing bug (autodetected if FOURCC == XVIX)
     ump4                         .D.V..... (autodetected if FOURCC == UMP4)
     no_padding                   .D.V..... padding bug (autodetected)
     amv                          .D.V.....
     qpel_chroma                  .D.V.....
     std_qpel                     .D.V..... old standard qpel (autodetected per FOURCC/version)
     qpel_chroma2                 .D.V.....
     direct_blocksize              .D.V..... direct-qpel-blocksize bug (autodetected per FOURCC/version)
     edge                         .D.V..... edge padding bug (autodetected per FOURCC/version)
     hpel_chroma                  .D.V.....
     dc_clip                      .D.V.....
     ms                           .D.V..... work around various bugs in Microsoft's broken decoders
     trunc                        .D.V..... truncated frames
     iedge                        .D.V.....
  -strict            <int>        ED.VA.... how strictly to follow the standards (from INT_MIN to INT_MAX) (default normal)
     very            2            ED.VA.... strictly conform to a older more strict version of the spec or reference software
     strict          1            ED.VA.... strictly conform to all the things in the spec no matter what the consequences
     normal          0            ED.VA....
     unofficial      -1           ED.VA.... allow unofficial extensions
     experimental    -2           ED.VA.... allow non-standardized experimental things
  -b_qoffset         <float>      E..V..... QP offset between P- and B-frames (from -FLT_MAX to FLT_MAX) (default 1.25)
  -err_detect        <flags>      .D.VA.... set error detection flags (default 0)
     crccheck                     .D.VA.... verify embedded CRCs
     bitstream                    .D.VA.... detect bitstream specification deviations
     buffer                       .D.VA.... detect improper bitstream length
     explode                      .D.VA.... abort decoding on minor error detection
     ignore_err                   .D.VA.... ignore errors
     careful                      .D.VA.... consider things that violate the spec, are fast to check and have not been seen in the wild as errors
     compliant                    .D.VA.... consider all spec non compliancies as errors
     aggressive                   .D.VA.... consider things that a sane encoder should not do as an error
  -mpeg_quant        <int>        E..V..... use MPEG quantizers instead of H.263 (from INT_MIN to INT_MAX) (default 0)
  -maxrate           <int64>      E..VA.... maximum bitrate (in bits/s). Used for VBV together with bufsize. (from 0 to INT_MAX) (default 0)
  -minrate           <int64>      E..VA.... minimum bitrate (in bits/s). Most useful in setting up a CBR encode. It is of little use otherwise. (from INT_MIN to INT_MAX) (default 0)
  -bufsize           <int>        E..VA.... set ratecontrol buffer size (in bits) (from INT_MIN to INT_MAX) (default 0)
  -i_qfactor         <float>      E..V..... QP factor between P- and I-frames (from -FLT_MAX to FLT_MAX) (default -0.8)
  -i_qoffset         <float>      E..V..... QP offset between P- and I-frames (from -FLT_MAX to FLT_MAX) (default 0)
  -dct               <int>        E..V..... DCT algorithm (from 0 to INT_MAX) (default auto)
     auto            0            E..V..... autoselect a good one
     fastint         1            E..V..... fast integer
     int             2            E..V..... accurate integer
     mmx             3            E..V.....
     altivec         5            E..V.....
     faan            6            E..V..... floating point AAN DCT
  -lumi_mask         <float>      E..V..... compresses bright areas stronger than medium ones (from -FLT_MAX to FLT_MAX) (default 0)
  -tcplx_mask        <float>      E..V..... temporal complexity masking (from -FLT_MAX to FLT_MAX) (default 0)
  -scplx_mask        <float>      E..V..... spatial complexity masking (from -FLT_MAX to FLT_MAX) (default 0)
  -p_mask            <float>      E..V..... inter masking (from -FLT_MAX to FLT_MAX) (default 0)
  -dark_mask         <float>      E..V..... compresses dark areas stronger than medium ones (from -FLT_MAX to FLT_MAX) (default 0)
  -idct              <int>        ED.V..... select IDCT implementation (from 0 to INT_MAX) (default auto)
     auto            0            ED.V.....
     int             1            ED.V.....
     simple          2            ED.V.....
     simplemmx       3            ED.V.....
     arm             7            ED.V.....
     altivec         8            ED.V.....
     simplearm       10           ED.V.....
     simplearmv5te   16           ED.V.....
     simplearmv6     17           ED.V.....
     simpleneon      22           ED.V.....
     xvid            14           ED.V.....
     xvidmmx         14           ED.V..... deprecated, for compatibility only
     faani           20           ED.V..... floating point AAN IDCT
     simpleauto      128          ED.V.....
  -ec                <flags>      .D.V..... set error concealment strategy (default guess_mvs+deblock)
     guess_mvs                    .D.V..... iterative motion vector (MV) search (slow)
     deblock                      .D.V..... use strong deblock filter for damaged MBs
     favor_inter                  .D.V..... favor predicting from the previous frame
  -pred              <int>        E..V..... prediction method (from INT_MIN to INT_MAX) (default left)
     left            0            E..V.....
     plane           1            E..V.....
     median          2            E..V.....
  -aspect            <rational>   E..V..... sample aspect ratio (from 0 to 10) (default 0/1)
  -sar               <rational>   E..V..... sample aspect ratio (from 0 to 10) (default 0/1)
  -debug             <flags>      ED.VAS... print specific debug info (default 0)
     pict                         .D.V..... picture info
     rc                           E..V..... rate control
     bitstream                    .D.V.....
     mb_type                      .D.V..... macroblock (MB) type
     qp                           .D.V..... per-block quantization parameter (QP)
     dct_coeff                    .D.V.....
     green_metadata               .D.V.....
     skip                         .D.V.....
     startcode                    .D.V.....
     er                           .D.V..... error recognition
     mmco                         .D.V..... memory management control operations (H.264)
     bugs                         .D.V.....
     buffers                      .D.V..... picture buffer allocations
     thread_ops                   .D.VA.... threading operations
     nomc                         .D.VA.... skip motion compensation
  -dia_size          <int>        E..V..... diamond type & size for motion estimation (from INT_MIN to INT_MAX) (default 0)
  -last_pred         <int>        E..V..... amount of motion predictors from the previous frame (from INT_MIN to INT_MAX) (default 0)
  -preme             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -pre_dia_size      <int>        E..V..... diamond type & size for motion estimation pre-pass (from INT_MIN to INT_MAX) (default 0)
  -subq              <int>        E..V..... sub-pel motion estimation quality (from INT_MIN to INT_MAX) (default 8)
  -me_range          <int>        E..V..... limit motion vectors range (1023 for DivX player) (from INT_MIN to INT_MAX) (default 0)
  -global_quality    <int>        E..VA.... (from INT_MIN to INT_MAX) (default 0)
  -coder             <int>        E..V..... (from INT_MIN to INT_MAX) (default vlc)
     vlc             0            E..V..... variable length coder / Huffman coder
     ac              1            E..V..... arithmetic coder
     raw             2            E..V..... raw (no encoding)
     rle             3            E..V..... run-length coder
  -context           <int>        E..V..... context model (from INT_MIN to INT_MAX) (default 0)
  -mbd               <int>        E..V..... macroblock decision algorithm (high quality mode) (from 0 to 2) (default simple)
     simple          0            E..V..... use mbcmp
     bits            1            E..V..... use fewest bits
     rd              2            E..V..... use best rate distortion
  -sc_threshold      <int>        E..V..... scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -nr                <int>        E..V..... noise reduction (from INT_MIN to INT_MAX) (default 0)
  -rc_init_occupancy <int>        E..V..... number of bits which should be loaded into the rc buffer before decoding starts (from INT_MIN to INT_MAX) (default 0)
  -threads           <int>        ED.VA.... set the number of threads (from 0 to INT_MAX) (default 1)
     auto            0            ED.V..... autodetect a suitable number of threads to use
  -dc                <int>        E..V..... intra_dc_precision (from -8 to 16) (default 0)
  -nssew             <int>        E..V..... nsse weight (from INT_MIN to INT_MAX) (default 8)
  -skip_top          <int>        .D.V..... number of macroblock rows at the top which are skipped (from INT_MIN to INT_MAX) (default 0)
  -skip_bottom       <int>        .D.V..... number of macroblock rows at the bottom which are skipped (from INT_MIN to INT_MAX) (default 0)
  -profile           <int>        E..VA.... (from INT_MIN to INT_MAX) (default unknown)
     unknown         -99          E..VA....
     aac_main        0            E...A....
     aac_low         1            E...A....
     aac_ssr         2            E...A....
     aac_ltp         3            E...A....
     aac_he          4            E...A....
     aac_he_v2       28           E...A....
     aac_ld          22           E...A....
     aac_eld         38           E...A....
     mpeg2_aac_low   128          E...A....
     mpeg2_aac_he    131          E...A....
     dts             20           E...A....
     dts_es          30           E...A....
     dts_96_24       40           E...A....
     dts_hd_hra      50           E...A....
     dts_hd_ma       60           E...A....
     mpeg4_sp        0            E..V.....
     mpeg4_core      2            E..V.....
     mpeg4_main      3            E..V.....
     mpeg4_asp       15           E..V.....
     main10          2            E..V.....
     msbc            1            E...A....
  -level             <int>        E..VA.... (from INT_MIN to INT_MAX) (default unknown)
     unknown         -99          E..VA....
  -lowres            <int>        .D.VA.... decode at 1= 1/2, 2=1/4, 3=1/8 resolutions (from 0 to INT_MAX) (default 0)
  -skip_threshold    <int>        E..V..... frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skipcmp           <int>        E..V..... frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... sum of absolute differences, fast
     sse             1            E..V..... sum of squared errors
     satd            2            E..V..... sum of absolute Hadamard transformed differences
     dct             3            E..V..... sum of absolute DCT transformed differences
     psnr            4            E..V..... sum of squared quantization errors (avoid, low quality)
     bit             5            E..V..... number of bits needed for the block
     rd              6            E..V..... rate distortion optimal, slow
     zero            7            E..V..... 0
     vsad            8            E..V..... sum of absolute vertical differences
     vsse            9            E..V..... sum of squared vertical differences
     nsse            10           E..V..... noise preserving sum of squared differences
     w53             11           E..V..... 5/3 wavelet, only used in snow
     w97             12           E..V..... 9/7 wavelet, only used in snow
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... sum of absolute differences, median predicted
  -cmp               <int>        E..V..... full-pel ME compare function (from INT_MIN to INT_MAX) (default sad)
     sad             0            E..V..... sum of absolute differences, fast
     sse             1            E..V..... sum of squared errors
     satd            2            E..V..... sum of absolute Hadamard transformed differences
     dct             3            E..V..... sum of absolute DCT transformed differences
     psnr            4            E..V..... sum of squared quantization errors (avoid, low quality)
     bit             5            E..V..... number of bits needed for the block
     rd              6            E..V..... rate distortion optimal, slow
     zero            7            E..V..... 0
     vsad            8            E..V..... sum of absolute vertical differences
     vsse            9            E..V..... sum of squared vertical differences
     nsse            10           E..V..... noise preserving sum of squared differences
     w53             11           E..V..... 5/3 wavelet, only used in snow
     w97             12           E..V..... 9/7 wavelet, only used in snow
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... sum of absolute differences, median predicted
  -subcmp            <int>        E..V..... sub-pel ME compare function (from INT_MIN to INT_MAX) (default sad)
     sad             0            E..V..... sum of absolute differences, fast
     sse             1            E..V..... sum of squared errors
     satd            2            E..V..... sum of absolute Hadamard transformed differences
     dct             3            E..V..... sum of absolute DCT transformed differences
     psnr            4            E..V..... sum of squared quantization errors (avoid, low quality)
     bit             5            E..V..... number of bits needed for the block
     rd              6            E..V..... rate distortion optimal, slow
     zero            7            E..V..... 0
     vsad            8            E..V..... sum of absolute vertical differences
     vsse            9            E..V..... sum of squared vertical differences
     nsse            10           E..V..... noise preserving sum of squared differences
     w53             11           E..V..... 5/3 wavelet, only used in snow
     w97             12           E..V..... 9/7 wavelet, only used in snow
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... sum of absolute differences, median predicted
  -mbcmp             <int>        E..V..... macroblock compare function (from INT_MIN to INT_MAX) (default sad)
     sad             0            E..V..... sum of absolute differences, fast
     sse             1            E..V..... sum of squared errors
     satd            2            E..V..... sum of absolute Hadamard transformed differences
     dct             3            E..V..... sum of absolute DCT transformed differences
     psnr            4            E..V..... sum of squared quantization errors (avoid, low quality)
     bit             5            E..V..... number of bits needed for the block
     rd              6            E..V..... rate distortion optimal, slow
     zero            7            E..V..... 0
     vsad            8            E..V..... sum of absolute vertical differences
     vsse            9            E..V..... sum of squared vertical differences
     nsse            10           E..V..... noise preserving sum of squared differences
     w53             11           E..V..... 5/3 wavelet, only used in snow
     w97             12           E..V..... 9/7 wavelet, only used in snow
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... sum of absolute differences, median predicted
  -ildctcmp          <int>        E..V..... interlaced DCT compare function (from INT_MIN to INT_MAX) (default vsad)
     sad             0            E..V..... sum of absolute differences, fast
     sse             1            E..V..... sum of squared errors
     satd            2            E..V..... sum of absolute Hadamard transformed differences
     dct             3            E..V..... sum of absolute DCT transformed differences
     psnr            4            E..V..... sum of squared quantization errors (avoid, low quality)
     bit             5            E..V..... number of bits needed for the block
     rd              6            E..V..... rate distortion optimal, slow
     zero            7            E..V..... 0
     vsad            8            E..V..... sum of absolute vertical differences
     vsse            9            E..V..... sum of squared vertical differences
     nsse            10           E..V..... noise preserving sum of squared differences
     w53             11           E..V..... 5/3 wavelet, only used in snow
     w97             12           E..V..... 9/7 wavelet, only used in snow
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... sum of absolute differences, median predicted
  -precmp            <int>        E..V..... pre motion estimation compare function (from INT_MIN to INT_MAX) (default sad)
     sad             0            E..V..... sum of absolute differences, fast
     sse             1            E..V..... sum of squared errors
     satd            2            E..V..... sum of absolute Hadamard transformed differences
     dct             3            E..V..... sum of absolute DCT transformed differences
     psnr            4            E..V..... sum of squared quantization errors (avoid, low quality)
     bit             5            E..V..... number of bits needed for the block
     rd              6            E..V..... rate distortion optimal, slow
     zero            7            E..V..... 0
     vsad            8            E..V..... sum of absolute vertical differences
     vsse            9            E..V..... sum of squared vertical differences
     nsse            10           E..V..... noise preserving sum of squared differences
     w53             11           E..V..... 5/3 wavelet, only used in snow
     w97             12           E..V..... 9/7 wavelet, only used in snow
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... sum of absolute differences, median predicted
  -mblmin            <int>        E..V..... minimum macroblock Lagrange factor (VBR) (from 1 to 32767) (default 236)
  -mblmax            <int>        E..V..... maximum macroblock Lagrange factor (VBR) (from 1 to 32767) (default 3658)
  -mepc              <int>        E..V..... motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -skip_loop_filter  <int>        .D.V..... skip loop filtering process for the selected frames (from INT_MIN to INT_MAX) (default default)
     none            -16          .D.V..... discard no frame
     default         0            .D.V..... discard useless frames
     noref           8            .D.V..... discard all non-reference frames
     bidir           16           .D.V..... discard all bidirectional frames
     nokey           32           .D.V..... discard all frames except keyframes
     nointra         24           .D.V..... discard all frames except I frames
     all             48           .D.V..... discard all frames
  -skip_idct         <int>        .D.V..... skip IDCT/dequantization for the selected frames (from INT_MIN to INT_MAX) (default default)
     none            -16          .D.V..... discard no frame
     default         0            .D.V..... discard useless frames
     noref           8            .D.V..... discard all non-reference frames
     bidir           16           .D.V..... discard all bidirectional frames
     nokey           32           .D.V..... discard all frames except keyframes
     nointra         24           .D.V..... discard all frames except I frames
     all             48           .D.V..... discard all frames
  -skip_frame        <int>        .D.V..... skip decoding for the selected frames (from INT_MIN to INT_MAX) (default default)
     none            -16          .D.V..... discard no frame
     default         0            .D.V..... discard useless frames
     noref           8            .D.V..... discard all non-reference frames
     bidir           16           .D.V..... discard all bidirectional frames
     nokey           32           .D.V..... discard all frames except keyframes
     nointra         24           .D.V..... discard all frames except I frames
     all             48           .D.V..... discard all frames
  -bidir_refine      <int>        E..V..... refine the two motion vectors used in bidirectional macroblocks (from 0 to 4) (default 1)
  -brd_scale         <int>        E..V..... downscale frames for dynamic B-frame decision (from 0 to 10) (default 0)
  -keyint_min        <int>        E..V..... minimum interval between IDR-frames (from INT_MIN to INT_MAX) (default 25)
  -refs              <int>        E..V..... reference frames to consider for motion compensation (from INT_MIN to INT_MAX) (default 1)
  -chromaoffset      <int>        E..V..... chroma QP offset from luma (from INT_MIN to INT_MAX) (default 0)
  -trellis           <int>        E..VA.... rate-distortion optimal quantization (from INT_MIN to INT_MAX) (default 0)
  -mv0_threshold     <int>        E..V..... (from 0 to INT_MAX) (default 256)
  -b_sensitivity     <int>        E..V..... adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -compression_level <int>        E..VA.... (from INT_MIN to INT_MAX) (default -1)
  -min_prediction_order <int>        E...A.... (from INT_MIN to INT_MAX) (default -1)
  -max_prediction_order <int>        E...A.... (from INT_MIN to INT_MAX) (default -1)
  -timecode_frame_start <int64>      E..V..... GOP timecode frame start number, in non-drop-frame format (from -1 to I64_MAX) (default -1)
  -channel_layout    <uint64>     ED..A.... (from 0 to 1.84467e+19) (default 0)
  -request_channel_layout <uint64>     .D..A.... (from 0 to 1.84467e+19) (default 0)
  -rc_max_vbv_use    <float>      E..V..... (from 0 to FLT_MAX) (default 0)
  -rc_min_vbv_use    <float>      E..V..... (from 0 to FLT_MAX) (default 3)
  -ticks_per_frame   <int>        ED.VA.... (from 1 to INT_MAX) (default 1)
  -color_primaries   <int>        ED.V..... color primaries (from 1 to INT_MAX) (default unknown)
     bt709           1            ED.V..... BT.709
     unknown         2            ED.V..... Unspecified
     bt470m          4            ED.V..... BT.470 M
     bt470bg         5            ED.V..... BT.470 BG
     smpte170m       6            ED.V..... SMPTE 170 M
     smpte240m       7            ED.V..... SMPTE 240 M
     film            8            ED.V..... Film
     bt2020          9            ED.V..... BT.2020
     smpte428        10           ED.V..... SMPTE 428-1
     smpte428_1      10           ED.V..... SMPTE 428-1
     smpte431        11           ED.V..... SMPTE 431-2
     smpte432        12           ED.V..... SMPTE 422-1
     jedec-p22       22           ED.V..... JEDEC P22
     ebu3213         22           ED.V..... EBU 3213-E
     unspecified     2            ED.V..... Unspecified
  -color_trc         <int>        ED.V..... color transfer characteristics (from 1 to INT_MAX) (default unknown)
     bt709           1            ED.V..... BT.709
     unknown         2            ED.V..... Unspecified
     gamma22         4            ED.V..... BT.470 M
     gamma28         5            ED.V..... BT.470 BG
     smpte170m       6            ED.V..... SMPTE 170 M
     smpte240m       7            ED.V..... SMPTE 240 M
     linear          8            ED.V..... Linear
     log100          9            ED.V..... Log
     log316          10           ED.V..... Log square root
     iec61966-2-4    11           ED.V..... IEC 61966-2-4
     bt1361e         12           ED.V..... BT.1361
     iec61966-2-1    13           ED.V..... IEC 61966-2-1
     bt2020-10       14           ED.V..... BT.2020 - 10 bit
     bt2020-12       15           ED.V..... BT.2020 - 12 bit
     smpte2084       16           ED.V..... SMPTE 2084
     smpte428        17           ED.V..... SMPTE 428-1
     arib-std-b67    18           ED.V..... ARIB STD-B67
     unspecified     2            ED.V..... Unspecified
     log             9            ED.V..... Log
     log_sqrt        10           ED.V..... Log square root
     iec61966_2_4    11           ED.V..... IEC 61966-2-4
     bt1361          12           ED.V..... BT.1361
     iec61966_2_1    13           ED.V..... IEC 61966-2-1
     bt2020_10bit    14           ED.V..... BT.2020 - 10 bit
     bt2020_12bit    15           ED.V..... BT.2020 - 12 bit
     smpte428_1      17           ED.V..... SMPTE 428-1
  -colorspace        <int>        ED.V..... color space (from 0 to INT_MAX) (default unknown)
     rgb             0            ED.V..... RGB
     bt709           1            ED.V..... BT.709
     unknown         2            ED.V..... Unspecified
     fcc             4            ED.V..... FCC
     bt470bg         5            ED.V..... BT.470 BG
     smpte170m       6            ED.V..... SMPTE 170 M
     smpte240m       7            ED.V..... SMPTE 240 M
     ycgco           8            ED.V..... YCGCO
     bt2020nc        9            ED.V..... BT.2020 NCL
     bt2020c         10           ED.V..... BT.2020 CL
     smpte2085       11           ED.V..... SMPTE 2085
     unspecified     2            ED.V..... Unspecified
     ycocg           8            ED.V..... YCGCO
     bt2020_ncl      9            ED.V..... BT.2020 NCL
     bt2020_cl       10           ED.V..... BT.2020 CL
  -color_range       <int>        ED.V..... color range (from 0 to INT_MAX) (default unknown)
     unknown         0            ED.V..... Unspecified
     tv              1            ED.V..... MPEG (219*2^(n-8))
     pc              2            ED.V..... JPEG (2^n-1)
     unspecified     0            ED.V..... Unspecified
     mpeg            1            ED.V..... MPEG (219*2^(n-8))
     jpeg            2            ED.V..... JPEG (2^n-1)
  -chroma_sample_location <int>        ED.V..... chroma sample location (from 0 to INT_MAX) (default unknown)
     unknown         0            ED.V..... Unspecified
     left            1            ED.V..... Left
     center          2            ED.V..... Center
     topleft         3            ED.V..... Top-left
     top             4            ED.V..... Top
     bottomleft      5            ED.V..... Bottom-left
     bottom          6            ED.V..... Bottom
     unspecified     0            ED.V..... Unspecified
  -slices            <int>        E..V..... set the number of slices, used in parallelized encoding (from 0 to INT_MAX) (default 0)
  -thread_type       <flags>      ED.VA.... select multithreading type (default slice+frame)
     slice                        ED.V.....
     frame                        ED.V.....
  -audio_service_type <int>        E...A.... audio service type (from 0 to 8) (default ma)
     ma              0            E...A.... Main Audio Service
     ef              1            E...A.... Effects
     vi              2            E...A.... Visually Impaired
     hi              3            E...A.... Hearing Impaired
     di              4            E...A.... Dialogue
     co              5            E...A.... Commentary
     em              6            E...A.... Emergency
     vo              7            E...A.... Voice Over
     ka              8            E...A.... Karaoke
  -request_sample_fmt <sample_fmt> .D..A.... sample format audio decoders should prefer (default none)
  -sub_charenc       <string>     .D...S... set input text subtitles character encoding
  -sub_charenc_mode  <flags>      .D...S... set input text subtitles character encoding mode (default 0)
     do_nothing                   .D...S...
     auto                         .D...S...
     pre_decoder                  .D...S...
     ignore                       .D...S...
  -sub_text_format   <int>        .D...S... set decoded text subtitle format (from 0 to 1) (default ass_with_timings)
     ass             0            .D...S...
     ass_with_timings 1            .D...S...
  -refcounted_frames <boolean>    .D.VA.... (default false)
  -side_data_only_packets <boolean>    E..VA.... (default true)
  -apply_cropping    <boolean>    .D.V..... (default true)
  -skip_alpha        <boolean>    .D.V..... Skip processing alpha (default false)
  -field_order       <int>        ED.V..... Field order (from 0 to 5) (default 0)
     progressive     1            ED.V.....
     tt              2            ED.V.....
     bb              3            ED.V.....
     tb              4            ED.V.....
     bt              5            ED.V.....
  -dump_separator    <string>     ED.VAS... set information dump field separator
  -codec_whitelist   <string>     .D.VAS... List of decoders that are allowed to be used
  -max_pixels        <int64>      ED.VAS... Maximum number of pixels (from 0 to INT_MAX) (default INT_MAX)
  -max_samples       <int64>      ED..A.... Maximum number of samples (from 0 to INT_MAX) (default INT_MAX)
  -hwaccel_flags     <flags>      .D.V..... (default ignore_level)
     ignore_level                 .D.V..... ignore level even if the codec level used is unknown or higher than the maximum supported level reported by the hardware driver
     allow_high_depth              .D.V..... allow to output YUV pixel formats with a different chroma sampling than 4:2:0 and/or other than 8 bits per component
     allow_profile_mismatch              .D.V..... attempt to decode anyway if HW accelerated decoder's supported profiles do not exactly match the stream
  -extra_hw_frames   <int>        .D.V..... Number of extra hardware frames to allocate for the user (from -1 to INT_MAX) (default -1)
  -discard_damaged_percentage <int>        .D.V..... Percentage of damaged samples to discard a frame (from 0 to 100) (default 95)

amv encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)
  -pred              <int>        E..V..... Prediction method (from 1 to 3) (default left)
     left            1            E..V.....
     plane           2            E..V.....
     median          3            E..V.....
  -huffman           <int>        E..V..... Huffman table strategy (from 0 to 1) (default optimal)
     default         0            E..V.....
     optimal         1            E..V.....

APNG encoder AVOptions:
  -dpi               <int>        E..V..... Set image resolution (in dots per inch) (from 0 to 65536) (default 0)
  -dpm               <int>        E..V..... Set image resolution (in dots per meter) (from 0 to 65536) (default 0)
  -pred              <int>        E..V..... Prediction method (from 0 to 5) (default none)
     none            0            E..V.....
     sub             1            E..V.....
     up              2            E..V.....
     avg             3            E..V.....
     paeth           4            E..V.....
     mixed           5            E..V.....

cinepak AVOptions:
  -max_extra_cb_iterations <int>        E..V..... Max extra codebook recalculation passes, more is better and slower (from 0 to INT_MAX) (default 2)
  -skip_empty_cb     <boolean>    E..V..... Avoid wasting bytes, ignore vintage MacOS decoder (default false)
  -max_strips        <int>        E..V..... Limit strips/frame, vintage compatible is 1..3, otherwise the more the better (from 1 to 32) (default 3)
  -min_strips        <int>        E..V..... Enforce min strips/frame, more is worse and faster, must be <= max_strips (from 1 to 32) (default 1)
  -strip_number_adaptivity <int>        E..V..... How fast the strip number adapts, more is slightly better, much slower (from 0 to 31) (default 0)

cljr encoder AVOptions:
  -dither_type       <int>        E..V..... Dither type (from 0 to 2) (default 1)

dnxhd AVOptions:
  -nitris_compat     <boolean>    E..V..... encode with Avid Nitris compatibility (default false)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 0)
  -profile           <int>        E..V..... (from 0 to 5) (default dnxhd)
     dnxhd           0            E..V.....
     dnxhr_444       5            E..V.....
     dnxhr_hqx       4            E..V.....
     dnxhr_hq        3            E..V.....
     dnxhr_sq        2            E..V.....
     dnxhr_lb        1            E..V.....

dvvideo encoder AVOptions:
  -quant_deadzone    <int>        E..V..... Quantizer dead zone (from 0 to 1024) (default 7)

ffv1 encoder AVOptions:
  -slicecrc          <boolean>    E..V..... Protect slices with CRCs (default auto)
  -coder             <int>        E..V..... Coder type (from -2 to 2) (default rice)
     rice            0            E..V..... Golomb rice
     range_def       -2           E..V..... Range with default table
     range_tab       2            E..V..... Range with custom table
     ac              1            E..V..... Range with custom table (the ac option exists for compatibility and is deprecated)
  -context           <int>        E..V..... Context model (from 0 to 1) (default 0)

ffvhuff AVOptions:
  -non_deterministic <boolean>    E..V..... Allow multithreading for e.g. context=1 at the expense of determinism (default true)
  -pred              <int>        E..V..... Prediction method (from 0 to 2) (default left)
     left            0            E..V.....
     plane           1            E..V.....
     median          2            E..V.....
  -context           <int>        E..V..... Set per-frame huffman tables (from 0 to 1) (default 0)

flv encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

GIF encoder AVOptions:
  -gifflags          <flags>      E..V..... set GIF flags (default offsetting+transdiff)
     offsetting                   E..V..... enable picture offsetting
     transdiff                    E..V..... enable transparency detection between frames
  -gifimage          <boolean>    E..V..... enable encoding only images per frame (default false)

h261 encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

H.263 encoder AVOptions:
  -obmc              <boolean>    E..V..... use overlapped block motion compensation. (default false)
  -mb_info           <int>        E..V..... emit macroblock info for RFC 2190 packetization, the parameter value is the maximum payload size (from 0 to INT_MAX) (default 0)
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

H.263p encoder AVOptions:
  -umv               <boolean>    E..V..... Use unlimited motion vectors. (default false)
  -aiv               <boolean>    E..V..... Use alternative inter VLC. (default false)
  -obmc              <boolean>    E..V..... use overlapped block motion compensation. (default false)
  -structured_slices <boolean>    E..V..... Write slice start position at every GOB header instead of just GOB number. (default false)
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

Hap encoder AVOptions:
  -format            <int>        E..V..... (from 11 to 15) (default hap)
     hap             11           E..V..... Hap 1 (DXT1 textures)
     hap_alpha       14           E..V..... Hap Alpha (DXT5 textures)
     hap_q           15           E..V..... Hap Q (DXT5-YCoCg textures)
  -chunks            <int>        E..V..... chunk count (from 1 to 64) (default 1)
  -compressor        <int>        E..V..... second-stage compressor (from 160 to 176) (default snappy)
     none            160          E..V..... None
     snappy          176          E..V..... Snappy

huffyuv AVOptions:
  -non_deterministic <boolean>    E..V..... Allow multithreading for e.g. context=1 at the expense of determinism (default true)
  -pred              <int>        E..V..... Prediction method (from 0 to 2) (default left)
     left            0            E..V.....
     plane           1            E..V.....
     median          2            E..V.....

jpeg 2000 encoder AVOptions:
  -format            <int>        E..V..... Codec Format (from 0 to 1) (default jp2)
     j2k             0            E..V.....
     jp2             1            E..V.....
  -tile_width        <int>        E..V..... Tile Width (from 1 to 1.07374e+09) (default 256)
  -tile_height       <int>        E..V..... Tile Height (from 1 to 1.07374e+09) (default 256)
  -pred              <int>        E..V..... DWT Type (from 0 to 1) (default dwt97int)
     dwt97int        0            E..V.....
     dwt53           0            E..V.....

jpegls AVOptions:
  -pred              <int>        E..V..... Prediction method (from 0 to 2) (default left)
     left            0            E..V.....
     plane           1            E..V.....
     median          2            E..V.....

ljpeg AVOptions:
  -pred              <int>        E..V..... Prediction method (from 1 to 3) (default left)
     left            1            E..V.....
     plane           2            E..V.....
     median          3            E..V.....

magicyuv AVOptions:
  -pred              <int>        E..V..... Prediction method (from 1 to 3) (default left)
     left            1            E..V.....
     gradient        2            E..V.....
     median          3            E..V.....

mjpeg encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)
  -pred              <int>        E..V..... Prediction method (from 1 to 3) (default left)
     left            1            E..V.....
     plane           2            E..V.....
     median          3            E..V.....
  -huffman           <int>        E..V..... Huffman table strategy (from 0 to 1) (default optimal)
     default         0            E..V.....
     optimal         1            E..V.....

mpeg1video encoder AVOptions:
  -gop_timecode      <string>     E..V..... MPEG GOP Timecode in hh:mm:ss[:;.]ff format. Overrides timecode_frame_start.
  -intra_vlc         <boolean>    E..V..... Use MPEG-2 intra VLC table. (default false)
  -drop_frame_timecode <boolean>    E..V..... Timecode is in drop frame format. (default false)
  -scan_offset       <boolean>    E..V..... Reserve space for SVCD scan offset user data. (default false)
  -timecode_frame_start <int64>      E..V..... GOP timecode frame start number, in non-drop-frame format (from -1 to I64_MAX) (default -1)
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

mpeg2video encoder AVOptions:
  -gop_timecode      <string>     E..V..... MPEG GOP Timecode in hh:mm:ss[:;.]ff format. Overrides timecode_frame_start.
  -intra_vlc         <boolean>    E..V..... Use MPEG-2 intra VLC table. (default false)
  -drop_frame_timecode <boolean>    E..V..... Timecode is in drop frame format. (default false)
  -scan_offset       <boolean>    E..V..... Reserve space for SVCD scan offset user data. (default false)
  -timecode_frame_start <int64>      E..V..... GOP timecode frame start number, in non-drop-frame format (from -1 to I64_MAX) (default -1)
  -non_linear_quant  <boolean>    E..V..... Use nonlinear quantizer. (default false)
  -alternate_scan    <boolean>    E..V..... Enable alternate scantable. (default false)
  -seq_disp_ext      <int>        E..V..... Write sequence_display_extension blocks. (from -1 to 1) (default auto)
     auto            -1           E..V.....
     never           0            E..V.....
     always          1            E..V.....
  -video_format      <int>        E..V..... Video_format in the sequence_display_extension indicating the source of the video. (from 0 to 7) (default unspecified)
     component       0            E..V.....
     pal             1            E..V.....
     ntsc            2            E..V.....
     secam           3            E..V.....
     mac             4            E..V.....
     unspecified     5            E..V.....
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

MPEG4 encoder AVOptions:
  -data_partitioning <boolean>    E..V..... Use data partitioning. (default false)
  -alternate_scan    <boolean>    E..V..... Enable alternate scantable. (default false)
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

msmpeg4v2 encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

msmpeg4v3 encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

PNG encoder AVOptions:
  -dpi               <int>        E..V..... Set image resolution (in dots per inch) (from 0 to 65536) (default 0)
  -dpm               <int>        E..V..... Set image resolution (in dots per meter) (from 0 to 65536) (default 0)
  -pred              <int>        E..V..... Prediction method (from 0 to 5) (default none)
     none            0            E..V.....
     sub             1            E..V.....
     up              2            E..V.....
     avg             3            E..V.....
     paeth           4            E..V.....
     mixed           5            E..V.....

ProRes encoder AVOptions:
  -vendor            <string>     E..V..... vendor ID (default "fmpg")

ProResAw encoder AVOptions:
  -vendor            <string>     E..V..... vendor ID (default "fmpg")

ProRes encoder AVOptions:
  -mbs_per_slice     <int>        E..V..... macroblocks per slice (from 1 to 8) (default 8)
  -profile           <int>        E..V..... (from -1 to 5) (default auto)
     auto            -1           E..V.....
     proxy           0            E..V.....
     lt              1            E..V.....
     standard        2            E..V.....
     hq              3            E..V.....
     4444            4            E..V.....
     4444xq          5            E..V.....
  -vendor            <string>     E..V..... vendor ID (default "Lavc")
  -bits_per_mb       <int>        E..V..... desired bits per macroblock (from 0 to 8192) (default 0)
  -quant_mat         <int>        E..V..... quantiser matrix (from -1 to 6) (default auto)
     auto            -1           E..V.....
     proxy           0            E..V.....
     lt              2            E..V.....
     standard        3            E..V.....
     hq              4            E..V.....
     default         6            E..V.....
  -alpha_bits        <int>        E..V..... bits for alpha plane (from 0 to 16) (default 16)

RoQ AVOptions:
  -quake3_compat     <boolean>    E..V..... Whether to respect known limitations in Quake 3 decoder (default true)

rv10 encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

rv20 encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

sgi AVOptions:
  -rle               <int>        E..V..... Use run-length compression (from 0 to 1) (default 1)

snow encoder AVOptions:
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 3) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
     iter            3            E..V.....
  -memc_only         <boolean>    E..V..... Only do ME/MC (I frames -> ref, P frame -> ME+MC). (default false)
  -no_bitstream      <boolean>    E..V..... Skip final bitstream writeout. (default false)
  -intra_penalty     <int>        E..V..... Penalty for intra blocks in block decission (from 0 to INT_MAX) (default 0)
  -iterative_dia_size <int>        E..V..... Dia size for the iterative ME (from 0 to INT_MAX) (default 0)
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -pred              <int>        E..V..... Spatial decomposition type (from 0 to 1) (default dwt97)
     dwt97           0            E..V.....
     dwt53           1            E..V.....

sunrast AVOptions:
  -rle               <int>        E..V..... Use run-length compression (from 0 to 1) (default 1)

svq1enc AVOptions:
  -motion-est        <int>        E..V..... Motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....

targa AVOptions:
  -rle               <int>        E..V..... Use run-length compression (from 0 to 1) (default 1)

TIFF encoder AVOptions:
  -dpi               <int>        E..V..... set the image resolution (in dpi) (from 1 to 65536) (default 72)
  -compression_algo  <int>        E..V..... (from 1 to 32946) (default packbits)
     packbits        32773        E..V.....
     raw             1            E..V.....
     lzw             5            E..V.....
     deflate         32946        E..V.....

utvideo AVOptions:
  -pred              <int>        E..V..... Prediction method (from 0 to 3) (default left)
     none            0            E..V.....
     left            1            E..V.....
     gradient        2            E..V.....
     median          3            E..V.....

SMPTE VC-2 encoder AVOptions:
  -tolerance         <double>     E..V..... Max undershoot in percent (from 0 to 45) (default 5)
  -slice_width       <int>        E..V..... Slice width (from 32 to 1024) (default 32)
  -slice_height      <int>        E..V..... Slice height (from 8 to 1024) (default 16)
  -wavelet_depth     <int>        E..V..... Transform depth (from 1 to 5) (default 4)
  -wavelet_type      <int>        E..V..... Transform type (from 0 to 7) (default 9_7)
     9_7             0            E..V..... Deslauriers-Dubuc (9,7)
     5_3             1            E..V..... LeGall (5,3)
     haar            4            E..V..... Haar (with shift)
     haar_noshift    3            E..V..... Haar (without shift)
  -qm                <int>        E..V..... Custom quantization matrix (from 0 to 3) (default default)
     default         0            E..V..... Default from the specifications
     color           1            E..V..... Prevents low bitrate discoloration
     flat            2            E..V..... Optimize for PSNR

wmv1 encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

wmv2 encoder AVOptions:
  -mpv_flags         <flags>      E..V..... Flags common for all mpegvideo-based encoders. (default 0)
     skip_rd                      E..V..... RD optimal MB level residual skipping
     strict_gop                   E..V..... Strictly enforce gop size
     qp_rd                        E..V..... Use rate distortion optimization for qp selection
     cbp_rd                       E..V..... use rate distortion optimization for CBP
     naq                          E..V..... normalize adaptive quantization
     mv0                          E..V..... always try a mb with mv=<0,0>
  -luma_elim_threshold <int>        E..V..... single coefficient elimination threshold for luminance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -chroma_elim_threshold <int>        E..V..... single coefficient elimination threshold for chrominance (negative values also consider dc coefficient) (from INT_MIN to INT_MAX) (default 0)
  -quantizer_noise_shaping <int>        E..V..... (from 0 to INT_MAX) (default 0)
  -error_rate        <int>        E..V..... Simulate errors in the bitstream to test error concealment. (from 0 to INT_MAX) (default 0)
  -qsquish           <float>      E..V..... how to keep quantizer between qmin and qmax (0 = clip, 1 = use differentiable function) (from 0 to 99) (default 0)
  -rc_qmod_amp       <float>      E..V..... experimental quantizer modulation (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_qmod_freq      <int>        E..V..... experimental quantizer modulation (from INT_MIN to INT_MAX) (default 0)
  -rc_eq             <string>     E..V..... Set rate control equation. When computing the expression, besides the standard functions defined in the section 'Expression Evaluation', the following functions are available: bits2qp(bits), qp2bits(qp). Also the following constants are available: iTex pTex tex mv fCode iCount mcVar var isI isP isB avgQP qComp avgIITex avgPITex avgPPTex avgBPTex avgTex.
  -rc_init_cplx      <float>      E..V..... initial complexity for 1-pass encoding (from -FLT_MAX to FLT_MAX) (default 0)
  -rc_buf_aggressivity <float>      E..V..... currently useless (from -FLT_MAX to FLT_MAX) (default 1)
  -border_mask       <float>      E..V..... increase the quantizer for macroblocks close to borders (from -FLT_MAX to FLT_MAX) (default 0)
  -lmin              <int>        E..V..... minimum Lagrange factor (VBR) (from 0 to INT_MAX) (default 236)
  -lmax              <int>        E..V..... maximum Lagrange factor (VBR) (from 0 to INT_MAX) (default 3658)
  -ibias             <int>        E..V..... intra quant bias (from INT_MIN to INT_MAX) (default 999999)
  -pbias             <int>        E..V..... inter quant bias (from INT_MIN to INT_MAX) (default 999999)
  -rc_strategy       <int>        E..V..... ratecontrol method (from 0 to 1) (default ffmpeg)
     ffmpeg          0            E..V..... deprecated, does nothing
     xvid            0            E..V..... deprecated, does nothing
  -motion_est        <int>        E..V..... motion estimation algorithm (from 0 to 2) (default epzs)
     zero            0            E..V.....
     epzs            1            E..V.....
     xone            2            E..V.....
  -force_duplicated_matrix <boolean>    E..V..... Always write luma and chroma matrix for mjpeg, useful for rtp streaming. (default false)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from 0 to 2) (default 0)
  -b_sensitivity     <int>        E..V..... Adjust sensitivity of b_frame_strategy 1 (from 1 to INT_MAX) (default 40)
  -brd_scale         <int>        E..V..... Downscale frames for dynamic B-frame decision (from 0 to 3) (default 0)
  -skip_threshold    <int>        E..V..... Frame skip threshold (from INT_MIN to INT_MAX) (default 0)
  -skip_factor       <int>        E..V..... Frame skip factor (from INT_MIN to INT_MAX) (default 0)
  -skip_exp          <int>        E..V..... Frame skip exponent (from INT_MIN to INT_MAX) (default 0)
  -skip_cmp          <int>        E..V..... Frame skip compare function (from INT_MIN to INT_MAX) (default dctmax)
     sad             0            E..V..... Sum of absolute differences, fast
     sse             1            E..V..... Sum of squared errors
     satd            2            E..V..... Sum of absolute Hadamard transformed differences
     dct             3            E..V..... Sum of absolute DCT transformed differences
     psnr            4            E..V..... Sum of squared quantization errors, low quality
     bit             5            E..V..... Number of bits needed for the block
     rd              6            E..V..... Rate distortion optimal, slow
     zero            7            E..V..... Zero
     vsad            8            E..V..... Sum of absolute vertical differences
     vsse            9            E..V..... Sum of squared vertical differences
     nsse            10           E..V..... Noise preserving sum of squared differences
     dct264          14           E..V.....
     dctmax          13           E..V.....
     chroma          256          E..V.....
     msad            15           E..V..... Sum of absolute differences, median predicted
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default 0)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default 0)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)
  -ps                <int>        E..V..... RTP payload size in bytes (from INT_MIN to INT_MAX) (default 0)
  -mepc              <int>        E..V..... Motion estimation bitrate penalty compensation (1.0 = 256) (from INT_MIN to INT_MAX) (default 256)
  -mepre             <int>        E..V..... pre motion estimation (from INT_MIN to INT_MAX) (default 0)
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

AAC encoder AVOptions:
  -aac_coder         <int>        E...A.... Coding algorithm (from 0 to 2) (default fast)
     anmr            0            E...A.... ANMR method
     twoloop         1            E...A.... Two loop searching method
     fast            2            E...A.... Default fast search
  -aac_ms            <boolean>    E...A.... Force M/S stereo coding (default auto)
  -aac_is            <boolean>    E...A.... Intensity stereo coding (default true)
  -aac_pns           <boolean>    E...A.... Perceptual noise substitution (default true)
  -aac_tns           <boolean>    E...A.... Temporal noise shaping (default true)
  -aac_ltp           <boolean>    E...A.... Long term prediction (default false)
  -aac_pred          <boolean>    E...A.... AAC-Main prediction (default false)
  -aac_pce           <boolean>    E...A.... Forces the use of PCEs (default false)

AC-3 Encoder AVOptions:
  -per_frame_metadata <boolean>    E...A.... Allow Changing Metadata Per-Frame (default false)
  -center_mixlev     <float>      E...A.... Center Mix Level (from 0 to 1) (default 0.594604)
  -surround_mixlev   <float>      E...A.... Surround Mix Level (from 0 to 1) (default 0.5)
  -mixing_level      <int>        E...A.... Mixing Level (from -1 to 111) (default -1)
  -room_type         <int>        E...A.... Room Type (from -1 to 2) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     large           1            E...A.... Large Room
     small           2            E...A.... Small Room
  -copyright         <int>        E...A.... Copyright Bit (from -1 to 1) (default -1)
  -dialnorm          <int>        E...A.... Dialogue Level (dB) (from -31 to -1) (default -31)
  -dsur_mode         <int>        E...A.... Dolby Surround Mode (from -1 to 2) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     on              2            E...A.... Dolby Surround Encoded
     off             1            E...A.... Not Dolby Surround Encoded
  -original          <int>        E...A.... Original Bit Stream (from -1 to 1) (default -1)
  -dmix_mode         <int>        E...A.... Preferred Stereo Downmix Mode (from -1 to 3) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     ltrt            1            E...A.... Lt/Rt Downmix Preferred
     loro            2            E...A.... Lo/Ro Downmix Preferred
     dplii           3            E...A.... Dolby Pro Logic II Downmix Preferred
  -ltrt_cmixlev      <float>      E...A.... Lt/Rt Center Mix Level (from -1 to 2) (default -1)
  -ltrt_surmixlev    <float>      E...A.... Lt/Rt Surround Mix Level (from -1 to 2) (default -1)
  -loro_cmixlev      <float>      E...A.... Lo/Ro Center Mix Level (from -1 to 2) (default -1)
  -loro_surmixlev    <float>      E...A.... Lo/Ro Surround Mix Level (from -1 to 2) (default -1)
  -dsurex_mode       <int>        E...A.... Dolby Surround EX Mode (from -1 to 3) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     on              2            E...A.... Dolby Surround EX Encoded
     off             1            E...A.... Not Dolby Surround EX Encoded
     dpliiz          3            E...A.... Dolby Pro Logic IIz-encoded
  -dheadphone_mode   <int>        E...A.... Dolby Headphone Mode (from -1 to 2) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     on              2            E...A.... Dolby Headphone Encoded
     off             1            E...A.... Not Dolby Headphone Encoded
  -ad_conv_type      <int>        E...A.... A/D Converter Type (from -1 to 1) (default -1)
     standard        0            E...A.... Standard (default)
     hdcd            1            E...A.... HDCD
  -stereo_rematrixing <boolean>    E...A.... Stereo Rematrixing (default true)
  -channel_coupling  <int>        E...A.... Channel Coupling (from -1 to 1) (default auto)
     auto            -1           E...A.... Selected by the Encoder
  -cpl_start_band    <int>        E...A.... Coupling Start Band (from -1 to 15) (default auto)
     auto            -1           E...A.... Selected by the Encoder

Fixed-Point AC-3 Encoder AVOptions:
  -per_frame_metadata <boolean>    E...A.... Allow Changing Metadata Per-Frame (default false)
  -center_mixlev     <float>      E...A.... Center Mix Level (from 0 to 1) (default 0.594604)
  -surround_mixlev   <float>      E...A.... Surround Mix Level (from 0 to 1) (default 0.5)
  -mixing_level      <int>        E...A.... Mixing Level (from -1 to 111) (default -1)
  -room_type         <int>        E...A.... Room Type (from -1 to 2) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     large           1            E...A.... Large Room
     small           2            E...A.... Small Room
  -copyright         <int>        E...A.... Copyright Bit (from -1 to 1) (default -1)
  -dialnorm          <int>        E...A.... Dialogue Level (dB) (from -31 to -1) (default -31)
  -dsur_mode         <int>        E...A.... Dolby Surround Mode (from -1 to 2) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     on              2            E...A.... Dolby Surround Encoded
     off             1            E...A.... Not Dolby Surround Encoded
  -original          <int>        E...A.... Original Bit Stream (from -1 to 1) (default -1)
  -dmix_mode         <int>        E...A.... Preferred Stereo Downmix Mode (from -1 to 3) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     ltrt            1            E...A.... Lt/Rt Downmix Preferred
     loro            2            E...A.... Lo/Ro Downmix Preferred
     dplii           3            E...A.... Dolby Pro Logic II Downmix Preferred
  -ltrt_cmixlev      <float>      E...A.... Lt/Rt Center Mix Level (from -1 to 2) (default -1)
  -ltrt_surmixlev    <float>      E...A.... Lt/Rt Surround Mix Level (from -1 to 2) (default -1)
  -loro_cmixlev      <float>      E...A.... Lo/Ro Center Mix Level (from -1 to 2) (default -1)
  -loro_surmixlev    <float>      E...A.... Lo/Ro Surround Mix Level (from -1 to 2) (default -1)
  -dsurex_mode       <int>        E...A.... Dolby Surround EX Mode (from -1 to 3) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     on              2            E...A.... Dolby Surround EX Encoded
     off             1            E...A.... Not Dolby Surround EX Encoded
     dpliiz          3            E...A.... Dolby Pro Logic IIz-encoded
  -dheadphone_mode   <int>        E...A.... Dolby Headphone Mode (from -1 to 2) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     on              2            E...A.... Dolby Headphone Encoded
     off             1            E...A.... Not Dolby Headphone Encoded
  -ad_conv_type      <int>        E...A.... A/D Converter Type (from -1 to 1) (default -1)
     standard        0            E...A.... Standard (default)
     hdcd            1            E...A.... HDCD
  -stereo_rematrixing <boolean>    E...A.... Stereo Rematrixing (default true)
  -channel_coupling  <int>        E...A.... Channel Coupling (from -1 to 1) (default auto)
     auto            -1           E...A.... Selected by the Encoder
  -cpl_start_band    <int>        E...A.... Coupling Start Band (from -1 to 15) (default auto)
     auto            -1           E...A.... Selected by the Encoder

alacenc AVOptions:
  -min_prediction_order <int>        E...A.... (from 1 to 30) (default 4)
  -max_prediction_order <int>        E...A.... (from 1 to 30) (default 6)

DCA (DTS Coherent Acoustics) AVOptions:
  -dca_adpcm         <boolean>    E...A.... Use ADPCM encoding (default false)

E-AC-3 Encoder AVOptions:
  -per_frame_metadata <boolean>    E...A.... Allow Changing Metadata Per-Frame (default false)
  -mixing_level      <int>        E...A.... Mixing Level (from -1 to 111) (default -1)
  -room_type         <int>        E...A.... Room Type (from -1 to 2) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     large           1            E...A.... Large Room
     small           2            E...A.... Small Room
  -copyright         <int>        E...A.... Copyright Bit (from -1 to 1) (default -1)
  -dialnorm          <int>        E...A.... Dialogue Level (dB) (from -31 to -1) (default -31)
  -dsur_mode         <int>        E...A.... Dolby Surround Mode (from -1 to 2) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     on              2            E...A.... Dolby Surround Encoded
     off             1            E...A.... Not Dolby Surround Encoded
  -original          <int>        E...A.... Original Bit Stream (from -1 to 1) (default -1)
  -dmix_mode         <int>        E...A.... Preferred Stereo Downmix Mode (from -1 to 3) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     ltrt            1            E...A.... Lt/Rt Downmix Preferred
     loro            2            E...A.... Lo/Ro Downmix Preferred
     dplii           3            E...A.... Dolby Pro Logic II Downmix Preferred
  -ltrt_cmixlev      <float>      E...A.... Lt/Rt Center Mix Level (from -1 to 2) (default -1)
  -ltrt_surmixlev    <float>      E...A.... Lt/Rt Surround Mix Level (from -1 to 2) (default -1)
  -loro_cmixlev      <float>      E...A.... Lo/Ro Center Mix Level (from -1 to 2) (default -1)
  -loro_surmixlev    <float>      E...A.... Lo/Ro Surround Mix Level (from -1 to 2) (default -1)
  -dsurex_mode       <int>        E...A.... Dolby Surround EX Mode (from -1 to 3) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     on              2            E...A.... Dolby Surround EX Encoded
     off             1            E...A.... Not Dolby Surround EX Encoded
     dpliiz          3            E...A.... Dolby Pro Logic IIz-encoded
  -dheadphone_mode   <int>        E...A.... Dolby Headphone Mode (from -1 to 2) (default -1)
     notindicated    0            E...A.... Not Indicated (default)
     on              2            E...A.... Dolby Headphone Encoded
     off             1            E...A.... Not Dolby Headphone Encoded
  -ad_conv_type      <int>        E...A.... A/D Converter Type (from -1 to 1) (default -1)
     standard        0            E...A.... Standard (default)
     hdcd            1            E...A.... HDCD
  -stereo_rematrixing <boolean>    E...A.... Stereo Rematrixing (default true)
  -channel_coupling  <int>        E...A.... Channel Coupling (from -1 to 1) (default auto)
     auto            -1           E...A.... Selected by the Encoder
  -cpl_start_band    <int>        E...A.... Coupling Start Band (from -1 to 15) (default auto)
     auto            -1           E...A.... Selected by the Encoder

FLAC encoder AVOptions:
  -lpc_coeff_precision <int>        E...A.... LPC coefficient precision (from 0 to 15) (default 15)
  -lpc_type          <int>        E...A.... LPC algorithm (from -1 to 3) (default -1)
     none            0            E...A....
     fixed           1            E...A....
     levinson        2            E...A....
     cholesky        3            E...A....
  -lpc_passes        <int>        E...A.... Number of passes to use for Cholesky factorization during LPC analysis (from 1 to INT_MAX) (default 2)
  -min_partition_order <int>        E...A.... (from -1 to 8) (default -1)
  -max_partition_order <int>        E...A.... (from -1 to 8) (default -1)
  -prediction_order_method <int>        E...A.... Search method for selecting prediction order (from -1 to 5) (default -1)
     estimation      0            E...A....
     2level          1            E...A....
     4level          2            E...A....
     8level          3            E...A....
     search          4            E...A....
     log             5            E...A....
  -ch_mode           <int>        E...A.... Stereo decorrelation mode (from -1 to 3) (default auto)
     auto            -1           E...A....
     indep           0            E...A....
     left_side       1            E...A....
     right_side      2            E...A....
     mid_side        3            E...A....
  -exact_rice_parameters <boolean>    E...A.... Calculate rice parameters exactly (default false)
  -multi_dim_quant   <boolean>    E...A.... Multi-dimensional quantization (default false)
  -min_prediction_order <int>        E...A.... (from -1 to 32) (default -1)
  -max_prediction_order <int>        E...A.... (from -1 to 32) (default -1)

Opus encoder AVOptions:
  -opus_delay        <float>      E...A.... Maximum delay in milliseconds (from 2.5 to 360) (default 360)

sbc encoder AVOptions:
  -sbc_delay         <duration>   E...A.... set maximum algorithmic latency (default 0.013)
  -msbc              <boolean>    E...A.... use mSBC mode (wideband speech mono SBC) (default false)

WavPack encoder AVOptions:
  -joint_stereo      <boolean>    E...A....  (default auto)
  -optimize_mono     <boolean>    E...A....  (default false)

g726 AVOptions:
  -code_size         <int>        E...A.... Bits per code (from 2 to 5) (default 4)

g726le AVOptions:
  -code_size         <int>        E...A.... Bits per code (from 2 to 5) (default 4)

VOBSUB subtitle encoder AVOptions:
  -even_rows_fix     <boolean>    E....S... Make number of rows even (workaround for some players) (default false)

libaom-av1 encoder AVOptions:
  -cpu-used          <int>        E..V..... Quality/Speed ratio modifier (from 0 to 8) (default 1)
  -auto-alt-ref      <int>        E..V..... Enable use of alternate reference frames (2-pass only) (from -1 to 2) (default -1)
  -lag-in-frames     <int>        E..V..... Number of frames to look ahead at for alternate reference frame selection (from -1 to INT_MAX) (default -1)
  -arnr-max-frames   <int>        E..V..... altref noise reduction max frame count (from -1 to INT_MAX) (default -1)
  -arnr-strength     <int>        E..V..... altref noise reduction filter strength (from -1 to 6) (default -1)
  -aq-mode           <int>        E..V..... adaptive quantization mode (from -1 to 4) (default -1)
     none            0            E..V..... Aq not used
     variance        1            E..V..... Variance based Aq
     complexity      2            E..V..... Complexity based Aq
     cyclic          3            E..V..... Cyclic Refresh Aq
  -error-resilience  <flags>      E..V..... Error resilience configuration (default 0)
     default                      E..V..... Improve resiliency against losses of whole frames
  -crf               <int>        E..V..... Select the quality for constant quality mode (from -1 to 63) (default -1)
  -static-thresh     <int>        E..V..... A change threshold on blocks below which they will be skipped by the encoder (from 0 to INT_MAX) (default 0)
  -drop-threshold    <int>        E..V..... Frame drop threshold (from INT_MIN to INT_MAX) (default 0)
  -denoise-noise-level <int>        E..V..... Amount of noise to be removed (from -1 to INT_MAX) (default -1)
  -denoise-block-size <int>        E..V..... Denoise block size  (from -1 to INT_MAX) (default -1)
  -undershoot-pct    <int>        E..V..... Datarate undershoot (min) target (%) (from -1 to 100) (default -1)
  -overshoot-pct     <int>        E..V..... Datarate overshoot (max) target (%) (from -1 to 1000) (default -1)
  -minsection-pct    <int>        E..V..... GOP min bitrate (% of target) (from -1 to 100) (default -1)
  -maxsection-pct    <int>        E..V..... GOP max bitrate (% of target) (from -1 to 5000) (default -1)
  -frame-parallel    <boolean>    E..V..... Enable frame parallel decodability features (default auto)
  -tiles             <image_size> E..V..... Tile columns x rows
  -tile-columns      <int>        E..V..... Log2 of number of tile columns to use (from -1 to 6) (default -1)
  -tile-rows         <int>        E..V..... Log2 of number of tile rows to use (from -1 to 6) (default -1)
  -row-mt            <boolean>    E..V..... Enable row based multi-threading (default auto)
  -enable-cdef       <boolean>    E..V..... Enable CDEF filtering (default auto)
  -enable-global-motion <boolean>    E..V..... Enable global motion (default auto)
  -enable-intrabc    <boolean>    E..V..... Enable intra block copy prediction mode (default auto)

libmp3lame encoder AVOptions:
  -reservoir         <boolean>    E...A.... use bit reservoir (default true)
  -joint_stereo      <boolean>    E...A.... use joint stereo (default true)
  -abr               <boolean>    E...A.... use ABR (default false)

libopencore_amrnb AVOptions:
  -dtx               <int>        E...A.... Allow DTX (generate comfort noise) (from 0 to 1) (default 0)

libopenjpeg AVOptions:
  -format            <int>        E..V..... Codec Format (from 0 to 2) (default jp2)
     j2k             0            E..V.....
     jp2             2            E..V.....
  -profile           <int>        E..V..... (from 0 to 4) (default jpeg2000)
     jpeg2000        0            E..V.....
     cinema2k        3            E..V.....
     cinema4k        4            E..V.....
  -cinema_mode       <int>        E..V..... Digital Cinema (from 0 to 3) (default off)
     off             0            E..V.....
     2k_24           1            E..V.....
     2k_48           2            E..V.....
     4k_24           3            E..V.....
  -prog_order        <int>        E..V..... Progression Order (from 0 to 4) (default lrcp)
     lrcp            0            E..V.....
     rlcp            1            E..V.....
     rpcl            2            E..V.....
     pcrl            3            E..V.....
     cprl            4            E..V.....
  -numresolution     <int>        E..V..... (from 0 to 33) (default 6)
  -irreversible      <int>        E..V..... (from 0 to 1) (default 0)
  -disto_alloc       <int>        E..V..... (from 0 to 1) (default 1)
  -fixed_quality     <int>        E..V..... (from 0 to 1) (default 0)

libopus AVOptions:
  -application       <int>        E...A.... Intended application type (from 2048 to 2051) (default audio)
     voip            2048         E...A.... Favor improved speech intelligibility
     audio           2049         E...A.... Favor faithfulness to the input
     lowdelay        2051         E...A.... Restrict to only the lowest delay modes
  -frame_duration    <float>      E...A.... Duration of a frame in milliseconds (from 2.5 to 120) (default 20)
  -packet_loss       <int>        E...A.... Expected packet loss percentage (from 0 to 100) (default 0)
  -vbr               <int>        E...A.... Variable bit rate mode (from 0 to 2) (default on)
     off             0            E...A.... Use constant bit rate
     on              1            E...A.... Use variable bit rate
     constrained     2            E...A.... Use constrained VBR
  -mapping_family    <int>        E...A.... Channel Mapping Family (from -1 to 255) (default -1)
  -apply_phase_inv   <boolean>    E...A.... Apply intensity stereo phase inversion (default true)

libspeex AVOptions:
  -abr               <int>        E...A.... Use average bit rate (from 0 to 1) (default 0)
  -cbr_quality       <int>        E...A.... Set quality value (0 to 10) for CBR (from 0 to 10) (default 8)
  -frames_per_packet <int>        E...A.... Number of frames to encode in each packet (from 1 to 8) (default 1)
  -vad               <int>        E...A.... Voice Activity Detection (from 0 to 1) (default 0)
  -dtx               <int>        E...A.... Discontinuous Transmission (from 0 to 1) (default 0)

libtwolame encoder AVOptions:
  -mode              <int>        E...A.... Mpeg Mode (from -1 to 3) (default auto)
     auto            -1           E...A....
     stereo          0            E...A....
     joint_stereo    1            E...A....
     dual_channel    2            E...A....
     mono            3            E...A....
  -psymodel          <int>        E...A.... Psychoacoustic Model (from -1 to 4) (default 3)
  -energy_levels     <int>        E...A.... enable energy levels (from 0 to 1) (default 0)
  -error_protection  <int>        E...A.... enable CRC error protection (from 0 to 1) (default 0)
  -copyright         <int>        E...A.... set MPEG Audio Copyright flag (from 0 to 1) (default 0)
  -original          <int>        E...A.... set MPEG Audio Original flag (from 0 to 1) (default 0)
  -verbosity         <int>        E...A.... set library optput level (0-10) (from 0 to 10) (default 0)

libvo_amrwbenc AVOptions:
  -dtx               <int>        E...A.... Allow DTX (generate comfort noise) (from 0 to 1) (default 0)

libvorbis AVOptions:
  -iblock            <double>     E...A.... Sets the impulse block bias (from -15 to 0) (default 0)

libvpx-vp8 encoder AVOptions:
  -lag-in-frames     <int>        E..V..... Number of frames to look ahead for alternate reference frame selection (from -1 to INT_MAX) (default -1)
  -arnr-maxframes    <int>        E..V..... altref noise reduction max frame count (from -1 to INT_MAX) (default -1)
  -arnr-strength     <int>        E..V..... altref noise reduction filter strength (from -1 to INT_MAX) (default -1)
  -arnr-type         <int>        E..V..... altref noise reduction filter type (from -1 to INT_MAX) (default -1)
     backward        1            E..V.....
     forward         2            E..V.....
     centered        3            E..V.....
  -tune              <int>        E..V..... Tune the encoding to a specific scenario (from -1 to INT_MAX) (default -1)
     psnr            0            E..V.....
     ssim            1            E..V.....
  -deadline          <int>        E..V..... Time to spend encoding, in microseconds. (from INT_MIN to INT_MAX) (default good)
     best            0            E..V.....
     good            1000000      E..V.....
     realtime        1            E..V.....
  -error-resilient   <flags>      E..V..... Error resilience configuration (default 0)
     default                      E..V..... Improve resiliency against losses of whole frames
     partitions                   E..V..... The frame partitions are independently decodable by the bool decoder, meaning that partitions can be decoded even though earlier partitions have been lost. Note that intra predicition is still done over the partition boundary.
  -max-intra-rate    <int>        E..V..... Maximum I-frame bitrate (pct) 0=unlimited (from -1 to INT_MAX) (default -1)
  -crf               <int>        E..V..... Select the quality for constant quality mode (from -1 to 63) (default -1)
  -static-thresh     <int>        E..V..... A change threshold on blocks below which they will be skipped by the encoder (from 0 to INT_MAX) (default 0)
  -drop-threshold    <int>        E..V..... Frame drop threshold (from INT_MIN to INT_MAX) (default 0)
  -noise-sensitivity <int>        E..V..... Noise sensitivity (from 0 to 4) (default 0)
  -undershoot-pct    <int>        E..V..... Datarate undershoot (min) target (%) (from -1 to 100) (default -1)
  -overshoot-pct     <int>        E..V..... Datarate overshoot (max) target (%) (from -1 to 1000) (default -1)
  -auto-alt-ref      <int>        E..V..... Enable use of alternate reference frames (2-pass only) (from -1 to 2) (default -1)
  -cpu-used          <int>        E..V..... Quality/Speed ratio modifier (from -16 to 16) (default 1)
  -ts-parameters     <string>     E..V..... Temporal scaling configuration using a :-separated list of key=value parameters
  -speed             <int>        E..V.....  (from -16 to 16) (default 1)
  -quality           <int>        E..V.....  (from INT_MIN to INT_MAX) (default good)
     best            0            E..V.....
     good            1000000      E..V.....
     realtime        1            E..V.....
  -vp8flags          <flags>      E..V.....  (default 0)
     error_resilient              E..V..... enable error resilience
     altref                       E..V..... enable use of alternate reference frames (VP8/2-pass only)
  -arnr_max_frames   <int>        E..V..... altref noise reduction max frame count (from 0 to 15) (default 0)
  -arnr_strength     <int>        E..V..... altref noise reduction filter strength (from 0 to 6) (default 3)
  -arnr_type         <int>        E..V..... altref noise reduction filter type (from 1 to 3) (default 3)
  -rc_lookahead      <int>        E..V..... Number of frames to look ahead for alternate reference frame selection (from 0 to 25) (default 25)
  -sharpness         <int>        E..V..... Increase sharpness at the expense of lower PSNR (from -1 to 7) (default -1)

libvpx-vp9 encoder AVOptions:
  -lag-in-frames     <int>        E..V..... Number of frames to look ahead for alternate reference frame selection (from -1 to INT_MAX) (default -1)
  -arnr-maxframes    <int>        E..V..... altref noise reduction max frame count (from -1 to INT_MAX) (default -1)
  -arnr-strength     <int>        E..V..... altref noise reduction filter strength (from -1 to INT_MAX) (default -1)
  -arnr-type         <int>        E..V..... altref noise reduction filter type (from -1 to INT_MAX) (default -1)
     backward        1            E..V.....
     forward         2            E..V.....
     centered        3            E..V.....
  -tune              <int>        E..V..... Tune the encoding to a specific scenario (from -1 to INT_MAX) (default -1)
     psnr            0            E..V.....
     ssim            1            E..V.....
  -deadline          <int>        E..V..... Time to spend encoding, in microseconds. (from INT_MIN to INT_MAX) (default good)
     best            0            E..V.....
     good            1000000      E..V.....
     realtime        1            E..V.....
  -error-resilient   <flags>      E..V..... Error resilience configuration (default 0)
     default                      E..V..... Improve resiliency against losses of whole frames
     partitions                   E..V..... The frame partitions are independently decodable by the bool decoder, meaning that partitions can be decoded even though earlier partitions have been lost. Note that intra predicition is still done over the partition boundary.
  -max-intra-rate    <int>        E..V..... Maximum I-frame bitrate (pct) 0=unlimited (from -1 to INT_MAX) (default -1)
  -crf               <int>        E..V..... Select the quality for constant quality mode (from -1 to 63) (default -1)
  -static-thresh     <int>        E..V..... A change threshold on blocks below which they will be skipped by the encoder (from 0 to INT_MAX) (default 0)
  -drop-threshold    <int>        E..V..... Frame drop threshold (from INT_MIN to INT_MAX) (default 0)
  -noise-sensitivity <int>        E..V..... Noise sensitivity (from 0 to 4) (default 0)
  -undershoot-pct    <int>        E..V..... Datarate undershoot (min) target (%) (from -1 to 100) (default -1)
  -overshoot-pct     <int>        E..V..... Datarate overshoot (max) target (%) (from -1 to 1000) (default -1)
  -auto-alt-ref      <int>        E..V..... Enable use of alternate reference frames (2-pass only) (from -1 to 6) (default -1)
  -cpu-used          <int>        E..V..... Quality/Speed ratio modifier (from -8 to 8) (default 1)
  -lossless          <int>        E..V..... Lossless mode (from -1 to 1) (default -1)
  -tile-columns      <int>        E..V..... Number of tile columns to use, log2 (from -1 to 6) (default -1)
  -tile-rows         <int>        E..V..... Number of tile rows to use, log2 (from -1 to 2) (default -1)
  -frame-parallel    <boolean>    E..V..... Enable frame parallel decodability features (default auto)
  -aq-mode           <int>        E..V..... adaptive quantization mode (from -1 to 4) (default -1)
     none            0            E..V..... Aq not used
     variance        1            E..V..... Variance based Aq
     complexity      2            E..V..... Complexity based Aq
     cyclic          3            E..V..... Cyclic Refresh Aq
     equator360      4            E..V..... 360 video Aq
  -level             <float>      E..V..... Specify level (from -1 to 6.2) (default -1)
  -row-mt            <boolean>    E..V..... Row based multi-threading (default auto)
  -tune-content      <int>        E..V..... Tune content type (from -1 to 2) (default -1)
     default         0            E..V..... Regular video content
     screen          1            E..V..... Screen capture content
     film            2            E..V..... Film content; improves grain retention
  -corpus-complexity <int>        E..V..... corpus vbr complexity midpoint (from -1 to 10000) (default -1)
  -enable-tpl        <boolean>    E..V..... Enable temporal dependency model (default auto)
  -speed             <int>        E..V.....  (from -16 to 16) (default 1)
  -quality           <int>        E..V.....  (from INT_MIN to INT_MAX) (default good)
     best            0            E..V.....
     good            1000000      E..V.....
     realtime        1            E..V.....
  -vp8flags          <flags>      E..V.....  (default 0)
     error_resilient              E..V..... enable error resilience
     altref                       E..V..... enable use of alternate reference frames (VP8/2-pass only)
  -arnr_max_frames   <int>        E..V..... altref noise reduction max frame count (from 0 to 15) (default 0)
  -arnr_strength     <int>        E..V..... altref noise reduction filter strength (from 0 to 6) (default 3)
  -arnr_type         <int>        E..V..... altref noise reduction filter type (from 1 to 3) (default 3)
  -rc_lookahead      <int>        E..V..... Number of frames to look ahead for alternate reference frame selection (from 0 to 25) (default 25)
  -sharpness         <int>        E..V..... Increase sharpness at the expense of lower PSNR (from -1 to 7) (default -1)

libwebp_anim AVOptions:
  -lossless          <int>        E..V..... Use lossless mode (from 0 to 1) (default 0)
  -preset            <int>        E..V..... Configuration preset (from -1 to 5) (default none)
     none            -1           E..V..... do not use a preset
     default         0            E..V..... default preset
     picture         1            E..V..... digital picture, like portrait, inner shot
     photo           2            E..V..... outdoor photograph, with natural lighting
     drawing         3            E..V..... hand or line drawing, with high-contrast details
     icon            4            E..V..... small-sized colorful images
     text            5            E..V..... text-like
  -cr_threshold      <int>        E..V..... Conditional replenishment threshold (from 0 to INT_MAX) (default 0)
  -cr_size           <int>        E..V..... Conditional replenishment block size (from 0 to 256) (default 16)
  -quality           <float>      E..V..... Quality (from 0 to 100) (default 75)

libwebp AVOptions:
  -lossless          <int>        E..V..... Use lossless mode (from 0 to 1) (default 0)
  -preset            <int>        E..V..... Configuration preset (from -1 to 5) (default none)
     none            -1           E..V..... do not use a preset
     default         0            E..V..... default preset
     picture         1            E..V..... digital picture, like portrait, inner shot
     photo           2            E..V..... outdoor photograph, with natural lighting
     drawing         3            E..V..... hand or line drawing, with high-contrast details
     icon            4            E..V..... small-sized colorful images
     text            5            E..V..... text-like
  -cr_threshold      <int>        E..V..... Conditional replenishment threshold (from 0 to INT_MAX) (default 0)
  -cr_size           <int>        E..V..... Conditional replenishment block size (from 0 to 256) (default 16)
  -quality           <float>      E..V..... Quality (from 0 to 100) (default 75)

libx264 AVOptions:
  -preset            <string>     E..V..... Set the encoding preset (cf. x264 --fullhelp) (default "medium")
  -tune              <string>     E..V..... Tune the encoding params (cf. x264 --fullhelp)
  -profile           <string>     E..V..... Set profile restrictions (cf. x264 --fullhelp)
  -fastfirstpass     <boolean>    E..V..... Use fast settings when encoding first pass (default true)
  -level             <string>     E..V..... Specify level (as defined by Annex A)
  -passlogfile       <string>     E..V..... Filename for 2 pass stats
  -wpredp            <string>     E..V..... Weighted prediction for P-frames
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)
  -x264opts          <string>     E..V..... x264 options
  -crf               <float>      E..V..... Select the quality for constant quality mode (from -1 to FLT_MAX) (default -1)
  -crf_max           <float>      E..V..... In CRF mode, prevents VBV from lowering quality beyond this point. (from -1 to FLT_MAX) (default -1)
  -qp                <int>        E..V..... Constant quantization parameter rate control method (from -1 to INT_MAX) (default -1)
  -aq-mode           <int>        E..V..... AQ method (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     variance        1            E..V..... Variance AQ (complexity mask)
     autovariance    2            E..V..... Auto-variance AQ
     autovariance-biased 3            E..V..... Auto-variance AQ with bias to dark scenes
  -aq-strength       <float>      E..V..... AQ strength. Reduces blocking and blurring in flat and textured areas. (from -1 to FLT_MAX) (default -1)
  -psy               <boolean>    E..V..... Use psychovisual optimizations. (default auto)
  -psy-rd            <string>     E..V..... Strength of psychovisual optimization, in <psy-rd>:<psy-trellis> format.
  -rc-lookahead      <int>        E..V..... Number of frames to look ahead for frametype and ratecontrol (from -1 to INT_MAX) (default -1)
  -weightb           <boolean>    E..V..... Weighted prediction for B-frames. (default auto)
  -weightp           <int>        E..V..... Weighted prediction analysis method. (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     simple          1            E..V.....
     smart           2            E..V.....
  -ssim              <boolean>    E..V..... Calculate and print SSIM stats. (default auto)
  -intra-refresh     <boolean>    E..V..... Use Periodic Intra Refresh instead of IDR frames. (default auto)
  -bluray-compat     <boolean>    E..V..... Bluray compatibility workarounds. (default auto)
  -b-bias            <int>        E..V..... Influences how often B-frames are used (from INT_MIN to INT_MAX) (default INT_MIN)
  -b-pyramid         <int>        E..V..... Keep some B-frames as references. (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     strict          1            E..V..... Strictly hierarchical pyramid
     normal          2            E..V..... Non-strict (not Blu-ray compatible)
  -mixed-refs        <boolean>    E..V..... One reference per partition, as opposed to one reference per macroblock (default auto)
  -8x8dct            <boolean>    E..V..... High profile 8x8 transform. (default auto)
  -fast-pskip        <boolean>    E..V..... (default auto)
  -aud               <boolean>    E..V..... Use access unit delimiters. (default auto)
  -mbtree            <boolean>    E..V..... Use macroblock tree ratecontrol. (default auto)
  -deblock           <string>     E..V..... Loop filter parameters, in <alpha:beta> form.
  -cplxblur          <float>      E..V..... Reduce fluctuations in QP (before curve compression) (from -1 to FLT_MAX) (default -1)
  -partitions        <string>     E..V..... A comma-separated list of partitions to consider. Possible values: p8x8, p4x4, b8x8, i8x8, i4x4, none, all
  -direct-pred       <int>        E..V..... Direct MV prediction mode (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     spatial         1            E..V.....
     temporal        2            E..V.....
     auto            3            E..V.....
  -slice-max-size    <int>        E..V..... Limit the size of each slice in bytes (from -1 to INT_MAX) (default -1)
  -stats             <string>     E..V..... Filename for 2 pass stats
  -nal-hrd           <int>        E..V..... Signal HRD information (requires vbv-bufsize; cbr not allowed in .mp4) (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     vbr             1            E..V.....
     cbr             2            E..V.....
  -avcintra-class    <int>        E..V..... AVC-Intra class 50/100/200 (from -1 to 200) (default -1)
  -me_method         <int>        E..V..... Set motion estimation method (from -1 to 4) (default -1)
     dia             0            E..V.....
     hex             1            E..V.....
     umh             2            E..V.....
     esa             3            E..V.....
     tesa            4            E..V.....
  -motion-est        <int>        E..V..... Set motion estimation method (from -1 to 4) (default -1)
     dia             0            E..V.....
     hex             1            E..V.....
     umh             2            E..V.....
     esa             3            E..V.....
     tesa            4            E..V.....
  -forced-idr        <boolean>    E..V..... If forcing keyframes, force them as IDR frames. (default false)
  -coder             <int>        E..V..... Coder type (from -1 to 1) (default default)
     default         -1           E..V.....
     cavlc           0            E..V.....
     cabac           1            E..V.....
     vlc             0            E..V.....
     ac              1            E..V.....
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from -1 to 2) (default -1)
  -chromaoffset      <int>        E..V..... QP difference between chroma and luma (from INT_MIN to INT_MAX) (default -1)
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default -1)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default -1)
  -x264-params       <string>     E..V..... Override the x264 configuration using a :-separated list of key=value parameters

libx264rgb AVOptions:
  -preset            <string>     E..V..... Set the encoding preset (cf. x264 --fullhelp) (default "medium")
  -tune              <string>     E..V..... Tune the encoding params (cf. x264 --fullhelp)
  -profile           <string>     E..V..... Set profile restrictions (cf. x264 --fullhelp)
  -fastfirstpass     <boolean>    E..V..... Use fast settings when encoding first pass (default true)
  -level             <string>     E..V..... Specify level (as defined by Annex A)
  -passlogfile       <string>     E..V..... Filename for 2 pass stats
  -wpredp            <string>     E..V..... Weighted prediction for P-frames
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)
  -x264opts          <string>     E..V..... x264 options
  -crf               <float>      E..V..... Select the quality for constant quality mode (from -1 to FLT_MAX) (default -1)
  -crf_max           <float>      E..V..... In CRF mode, prevents VBV from lowering quality beyond this point. (from -1 to FLT_MAX) (default -1)
  -qp                <int>        E..V..... Constant quantization parameter rate control method (from -1 to INT_MAX) (default -1)
  -aq-mode           <int>        E..V..... AQ method (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     variance        1            E..V..... Variance AQ (complexity mask)
     autovariance    2            E..V..... Auto-variance AQ
     autovariance-biased 3            E..V..... Auto-variance AQ with bias to dark scenes
  -aq-strength       <float>      E..V..... AQ strength. Reduces blocking and blurring in flat and textured areas. (from -1 to FLT_MAX) (default -1)
  -psy               <boolean>    E..V..... Use psychovisual optimizations. (default auto)
  -psy-rd            <string>     E..V..... Strength of psychovisual optimization, in <psy-rd>:<psy-trellis> format.
  -rc-lookahead      <int>        E..V..... Number of frames to look ahead for frametype and ratecontrol (from -1 to INT_MAX) (default -1)
  -weightb           <boolean>    E..V..... Weighted prediction for B-frames. (default auto)
  -weightp           <int>        E..V..... Weighted prediction analysis method. (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     simple          1            E..V.....
     smart           2            E..V.....
  -ssim              <boolean>    E..V..... Calculate and print SSIM stats. (default auto)
  -intra-refresh     <boolean>    E..V..... Use Periodic Intra Refresh instead of IDR frames. (default auto)
  -bluray-compat     <boolean>    E..V..... Bluray compatibility workarounds. (default auto)
  -b-bias            <int>        E..V..... Influences how often B-frames are used (from INT_MIN to INT_MAX) (default INT_MIN)
  -b-pyramid         <int>        E..V..... Keep some B-frames as references. (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     strict          1            E..V..... Strictly hierarchical pyramid
     normal          2            E..V..... Non-strict (not Blu-ray compatible)
  -mixed-refs        <boolean>    E..V..... One reference per partition, as opposed to one reference per macroblock (default auto)
  -8x8dct            <boolean>    E..V..... High profile 8x8 transform. (default auto)
  -fast-pskip        <boolean>    E..V..... (default auto)
  -aud               <boolean>    E..V..... Use access unit delimiters. (default auto)
  -mbtree            <boolean>    E..V..... Use macroblock tree ratecontrol. (default auto)
  -deblock           <string>     E..V..... Loop filter parameters, in <alpha:beta> form.
  -cplxblur          <float>      E..V..... Reduce fluctuations in QP (before curve compression) (from -1 to FLT_MAX) (default -1)
  -partitions        <string>     E..V..... A comma-separated list of partitions to consider. Possible values: p8x8, p4x4, b8x8, i8x8, i4x4, none, all
  -direct-pred       <int>        E..V..... Direct MV prediction mode (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     spatial         1            E..V.....
     temporal        2            E..V.....
     auto            3            E..V.....
  -slice-max-size    <int>        E..V..... Limit the size of each slice in bytes (from -1 to INT_MAX) (default -1)
  -stats             <string>     E..V..... Filename for 2 pass stats
  -nal-hrd           <int>        E..V..... Signal HRD information (requires vbv-bufsize; cbr not allowed in .mp4) (from -1 to INT_MAX) (default -1)
     none            0            E..V.....
     vbr             1            E..V.....
     cbr             2            E..V.....
  -avcintra-class    <int>        E..V..... AVC-Intra class 50/100/200 (from -1 to 200) (default -1)
  -me_method         <int>        E..V..... Set motion estimation method (from -1 to 4) (default -1)
     dia             0            E..V.....
     hex             1            E..V.....
     umh             2            E..V.....
     esa             3            E..V.....
     tesa            4            E..V.....
  -motion-est        <int>        E..V..... Set motion estimation method (from -1 to 4) (default -1)
     dia             0            E..V.....
     hex             1            E..V.....
     umh             2            E..V.....
     esa             3            E..V.....
     tesa            4            E..V.....
  -forced-idr        <boolean>    E..V..... If forcing keyframes, force them as IDR frames. (default false)
  -coder             <int>        E..V..... Coder type (from -1 to 1) (default default)
     default         -1           E..V.....
     cavlc           0            E..V.....
     cabac           1            E..V.....
     vlc             0            E..V.....
     ac              1            E..V.....
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from -1 to 2) (default -1)
  -chromaoffset      <int>        E..V..... QP difference between chroma and luma (from INT_MIN to INT_MAX) (default -1)
  -sc_threshold      <int>        E..V..... Scene change threshold (from INT_MIN to INT_MAX) (default -1)
  -noise_reduction   <int>        E..V..... Noise reduction (from INT_MIN to INT_MAX) (default -1)
  -x264-params       <string>     E..V..... Override the x264 configuration using a :-separated list of key=value parameters

libx265 AVOptions:
  -crf               <float>      E..V..... set the x265 crf (from -1 to FLT_MAX) (default -1)
  -forced-idr        <boolean>    E..V..... if forcing keyframes, force them as IDR frames (default false)
  -preset            <string>     E..V..... set the x265 preset
  -tune              <string>     E..V..... set the x265 tune parameter
  -profile           <string>     E..V..... set the x265 profile
  -x265-params       <string>     E..V..... set the x265 configuration using a :-separated list of key=value parameters

libxvid AVOptions:
  -lumi_aq           <int>        E..V..... Luminance masking AQ (from 0 to 1) (default 0)
  -variance_aq       <int>        E..V..... Variance AQ (from 0 to 1) (default 0)
  -ssim              <int>        E..V..... Show SSIM information to stdout (from 0 to 2) (default off)
     off             0            E..V.....
     avg             1            E..V.....
     frame           2            E..V.....
  -ssim_acc          <int>        E..V..... SSIM accuracy (from 0 to 4) (default 2)
  -gmc               <int>        E..V..... use GMC (from 0 to 1) (default 0)
  -me_quality        <int>        E..V..... Motion estimation quality (from 0 to 6) (default 4)
  -mpeg_quant        <int>        E..V..... Use MPEG quantizers instead of H.263 (from 0 to 1) (default 0)

h264_amf AVOptions:
  -usage             <int>        E..V..... Encoder Usage (from 0 to 3) (default transcoding)
     transcoding     0            E..V..... Generic Transcoding
     ultralowlatency 1            E..V.....
     lowlatency      2            E..V.....
     webcam          3            E..V..... Webcam
  -profile           <int>        E..V..... Profile (from 66 to 257) (default main)
     main            77           E..V.....
     high            100          E..V.....
     constrained_baseline 256          E..V.....
     constrained_high 257          E..V.....
  -level             <int>        E..V..... Profile Level (from 0 to 62) (default auto)
     auto            0            E..V.....
     1.0             10           E..V.....
     1.1             11           E..V.....
     1.2             12           E..V.....
     1.3             13           E..V.....
     2.0             20           E..V.....
     2.1             21           E..V.....
     2.2             22           E..V.....
     3.0             30           E..V.....
     3.1             31           E..V.....
     3.2             32           E..V.....
     4.0             40           E..V.....
     4.1             41           E..V.....
     4.2             42           E..V.....
     5.0             50           E..V.....
     5.1             51           E..V.....
     5.2             52           E..V.....
     6.0             60           E..V.....
     6.1             61           E..V.....
     6.2             62           E..V.....
  -quality           <int>        E..V..... Quality Preference (from 0 to 2) (default speed)
     speed           1            E..V..... Prefer Speed
     balanced        0            E..V..... Balanced
     quality         2            E..V..... Prefer Quality
  -rc                <int>        E..V..... Rate Control Method (from -1 to 3) (default -1)
     cqp             0            E..V..... Constant Quantization Parameter
     cbr             1            E..V..... Constant Bitrate
     vbr_peak        2            E..V..... Peak Contrained Variable Bitrate
     vbr_latency     3            E..V..... Latency Constrained Variable Bitrate
  -enforce_hrd       <boolean>    E..V..... Enforce HRD (default false)
  -filler_data       <boolean>    E..V..... Filler Data Enable (default false)
  -vbaq              <boolean>    E..V..... Enable VBAQ (default false)
  -frame_skipping    <boolean>    E..V..... Rate Control Based Frame Skip (default false)
  -qp_i              <int>        E..V..... Quantization Parameter for I-Frame (from -1 to 51) (default -1)
  -qp_p              <int>        E..V..... Quantization Parameter for P-Frame (from -1 to 51) (default -1)
  -qp_b              <int>        E..V..... Quantization Parameter for B-Frame (from -1 to 51) (default -1)
  -preanalysis       <boolean>    E..V..... Pre-Analysis Mode (default false)
  -max_au_size       <int>        E..V..... Maximum Access Unit Size for rate control (in bits) (from 0 to INT_MAX) (default 0)
  -header_spacing    <int>        E..V..... Header Insertion Spacing (from -1 to 1000) (default -1)
  -bf_delta_qp       <int>        E..V..... B-Picture Delta QP (from -10 to 10) (default 4)
  -bf_ref            <boolean>    E..V..... Enable Reference to B-Frames (default true)
  -bf_ref_delta_qp   <int>        E..V..... Reference B-Picture Delta QP (from -10 to 10) (default 4)
  -intra_refresh_mb  <int>        E..V..... Intra Refresh MBs Number Per Slot in Macroblocks (from 0 to INT_MAX) (default 0)
  -coder             <int>        E..V..... Coding Type (from 0 to 2) (default auto)
     auto            0            E..V..... Automatic
     cavlc           2            E..V..... Context Adaptive Variable-Length Coding
     cabac           1            E..V..... Context Adaptive Binary Arithmetic Coding
  -me_half_pel       <boolean>    E..V..... Enable ME Half Pixel (default true)
  -me_quarter_pel    <boolean>    E..V..... Enable ME Quarter Pixel (default true)
  -aud               <boolean>    E..V..... Inserts AU Delimiter NAL unit (default false)
  -log_to_dbg        <boolean>    E..V..... Enable AMF logging to debug output (default false)

h264_nvenc AVOptions:
  -preset            <int>        E..V..... Set the encoding preset (from 0 to 11) (default medium)
     default         0            E..V.....
     slow            1            E..V..... hq 2 passes
     medium          2            E..V..... hq 1 pass
     fast            3            E..V..... hp 1 pass
     hp              4            E..V.....
     hq              5            E..V.....
     bd              6            E..V.....
     ll              7            E..V..... low latency
     llhq            8            E..V..... low latency hq
     llhp            9            E..V..... low latency hp
     lossless        10           E..V.....
     losslesshp      11           E..V.....
  -profile           <int>        E..V..... Set the encoding profile (from 0 to 3) (default main)
     baseline        0            E..V.....
     main            1            E..V.....
     high            2            E..V.....
     high444p        3            E..V.....
  -level             <int>        E..V..... Set the encoding level restriction (from 0 to 51) (default auto)
     auto            0            E..V.....
     1               10           E..V.....
     1.0             10           E..V.....
     1b              9            E..V.....
     1.0b            9            E..V.....
     1.1             11           E..V.....
     1.2             12           E..V.....
     1.3             13           E..V.....
     2               20           E..V.....
     2.0             20           E..V.....
     2.1             21           E..V.....
     2.2             22           E..V.....
     3               30           E..V.....
     3.0             30           E..V.....
     3.1             31           E..V.....
     3.2             32           E..V.....
     4               40           E..V.....
     4.0             40           E..V.....
     4.1             41           E..V.....
     4.2             42           E..V.....
     5               50           E..V.....
     5.0             50           E..V.....
     5.1             51           E..V.....
  -rc                <int>        E..V..... Override the preset rate-control (from -1 to INT_MAX) (default -1)
     constqp         0            E..V..... Constant QP mode
     vbr             1            E..V..... Variable bitrate mode
     cbr             2            E..V..... Constant bitrate mode
     vbr_minqp       8388612      E..V..... Variable bitrate mode with MinQP (deprecated)
     ll_2pass_quality 8388616      E..V..... Multi-pass optimized for image quality (deprecated)
     ll_2pass_size   8388624      E..V..... Multi-pass optimized for constant frame size (deprecated)
     vbr_2pass       8388640      E..V..... Multi-pass variable bitrate mode (deprecated)
     cbr_ld_hq       8            E..V..... Constant bitrate low delay high quality mode
     cbr_hq          16           E..V..... Constant bitrate high quality mode
     vbr_hq          32           E..V..... Variable bitrate high quality mode
  -rc-lookahead      <int>        E..V..... Number of frames to look ahead for rate-control (from 0 to INT_MAX) (default 0)
  -surfaces          <int>        E..V..... Number of concurrent surfaces (from 0 to 64) (default 0)
  -cbr               <boolean>    E..V..... Use cbr encoding mode (default false)
  -2pass             <boolean>    E..V..... Use 2pass encoding mode (default auto)
  -gpu               <int>        E..V..... Selects which NVENC capable GPU to use. First GPU is 0, second is 1, and so on. (from -2 to INT_MAX) (default any)
     any             -1           E..V..... Pick the first device available
     list            -2           E..V..... List the available devices
  -delay             <int>        E..V..... Delay frame output by the given amount of frames (from 0 to INT_MAX) (default INT_MAX)
  -no-scenecut       <boolean>    E..V..... When lookahead is enabled, set this to 1 to disable adaptive I-frame insertion at scene cuts (default false)
  -forced-idr        <boolean>    E..V..... If forcing keyframes, force them as IDR frames. (default false)
  -b_adapt           <boolean>    E..V..... When lookahead is enabled, set this to 0 to disable adaptive B-frame decision (default true)
  -spatial-aq        <boolean>    E..V..... set to 1 to enable Spatial AQ (default false)
  -temporal-aq       <boolean>    E..V..... set to 1 to enable Temporal AQ (default false)
  -zerolatency       <boolean>    E..V..... Set 1 to indicate zero latency operation (no reordering delay) (default false)
  -nonref_p          <boolean>    E..V..... Set this to 1 to enable automatic insertion of non-reference P-frames (default false)
  -strict_gop        <boolean>    E..V..... Set 1 to minimize GOP-to-GOP rate fluctuations (default false)
  -aq-strength       <int>        E..V..... When Spatial AQ is enabled, this field is used to specify AQ strength. AQ strength scale is from 1 (low) - 15 (aggressive) (from 1 to 15) (default 8)
  -cq                <float>      E..V..... Set target quality level (0 to 51, 0 means automatic) for constant quality mode in VBR rate control (from 0 to 51) (default 0)
  -aud               <boolean>    E..V..... Use access unit delimiters (default false)
  -bluray-compat     <boolean>    E..V..... Bluray compatibility workarounds (default false)
  -init_qpP          <int>        E..V..... Initial QP value for P frame (from -1 to 51) (default -1)
  -init_qpB          <int>        E..V..... Initial QP value for B frame (from -1 to 51) (default -1)
  -init_qpI          <int>        E..V..... Initial QP value for I frame (from -1 to 51) (default -1)
  -qp                <int>        E..V..... Constant quantization parameter rate control method (from -1 to 51) (default -1)
  -weighted_pred     <int>        E..V..... Set 1 to enable weighted prediction (from 0 to 1) (default 0)
  -coder             <int>        E..V..... Coder type (from -1 to 2) (default default)
     default         -1           E..V.....
     auto            0            E..V.....
     cabac           1            E..V.....
     cavlc           2            E..V.....
     ac              1            E..V.....
     vlc             2            E..V.....
  -b_ref_mode        <int>        E..V..... Use B frames as references (from 0 to 2) (default disabled)
     disabled        0            E..V..... B frames will not be used for reference
     each            1            E..V..... Each B frame will be used for reference
     middle          2            E..V..... Only (number of B frames)/2 will be used for reference
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

h264_qsv encoder AVOptions:
  -async_depth       <int>        E..V..... Maximum processing parallelism (from 1 to INT_MAX) (default 4)
  -avbr_accuracy     <int>        E..V..... Accuracy of the AVBR ratecontrol (from 0 to INT_MAX) (default 0)
  -avbr_convergence  <int>        E..V..... Convergence of the AVBR ratecontrol (from 0 to INT_MAX) (default 0)
  -preset            <int>        E..V..... (from 1 to 7) (default medium)
     veryfast        7            E..V.....
     faster          6            E..V.....
     fast            5            E..V.....
     medium          4            E..V.....
     slow            3            E..V.....
     slower          2            E..V.....
     veryslow        1            E..V.....
  -rdo               <int>        E..V..... Enable rate distortion optimization (from -1 to 1) (default -1)
  -max_frame_size    <int>        E..V..... Maximum encoded frame size in bytes (from -1 to 65535) (default -1)
  -max_slice_size    <int>        E..V..... Maximum encoded slice size in bytes (from -1 to 65535) (default -1)
  -bitrate_limit     <int>        E..V..... Toggle bitrate limitations (from -1 to 1) (default -1)
  -mbbrc             <int>        E..V..... MB level bitrate control (from -1 to 1) (default -1)
  -extbrc            <int>        E..V..... Extended bitrate control (from -1 to 1) (default -1)
  -adaptive_i        <int>        E..V..... Adaptive I-frame placement (from -1 to 1) (default -1)
  -adaptive_b        <int>        E..V..... Adaptive B-frame placement (from -1 to 1) (default -1)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from -1 to 1) (default -1)
  -forced_idr        <boolean>    E..V..... Forcing I frames as IDR frames (default false)
  -low_power         <boolean>    E..V..... enable low power mode(experimental: many limitations by mfx version, BRC modes, etc.) (default false)
  -cavlc             <int>        E..V..... Enable CAVLC (from 0 to 1) (default 0)
  -vcm               <int>        E..V..... Use the video conferencing mode ratecontrol (from 0 to 1) (default 0)
  -idr_interval      <int>        E..V..... Distance (in I-frames) between IDR frames (from 0 to INT_MAX) (default 0)
  -pic_timing_sei    <int>        E..V..... Insert picture timing SEI with pic_struct_syntax element (from 0 to 1) (default 1)
  -single_sei_nal_unit <int>        E..V..... Put all the SEI messages into one NALU (from -1 to 1) (default -1)
  -max_dec_frame_buffering <int>        E..V..... Maximum number of frames buffered in the DPB (from 0 to 65535) (default 0)
  -look_ahead        <int>        E..V..... Use VBR algorithm with look ahead (from 0 to 1) (default 0)
  -look_ahead_depth  <int>        E..V..... Depth of look ahead in number frames (from 0 to 100) (default 0)
  -look_ahead_downsampling <int>        E..V..... Downscaling factor for the frames saved for the lookahead analysis (from 0 to 3) (default unknown)
     unknown         0            E..V.....
     auto            0            E..V.....
     off             1            E..V.....
     2x              2            E..V.....
     4x              3            E..V.....
  -int_ref_type      <int>        E..V..... Intra refresh type (from -1 to 65535) (default -1)
     none            0            E..V.....
     vertical        1            E..V.....
  -int_ref_cycle_size <int>        E..V..... Number of frames in the intra refresh cycle (from -1 to 65535) (default -1)
  -int_ref_qp_delta  <int>        E..V..... QP difference for the refresh MBs (from -32768 to 32767) (default -32768)
  -recovery_point_sei <int>        E..V..... Insert recovery point SEI messages (from -1 to 1) (default -1)
  -profile           <int>        E..V..... (from 0 to INT_MAX) (default unknown)
     unknown         0            E..V.....
     baseline        66           E..V.....
     main            77           E..V.....
     high            100          E..V.....
  -a53cc             <int>        E..V..... Use A53 Closed Captions (if available) (from 0 to 1) (default 1)
  -aud               <int>        E..V..... Insert the Access Unit Delimiter NAL (from 0 to 1) (default 0)
  -repeat_pps        <boolean>    E..V..... repeat pps for every frame (default false)

nvenc AVOptions:
  -preset            <int>        E..V..... Set the encoding preset (from 0 to 11) (default medium)
     default         0            E..V.....
     slow            1            E..V..... hq 2 passes
     medium          2            E..V..... hq 1 pass
     fast            3            E..V..... hp 1 pass
     hp              4            E..V.....
     hq              5            E..V.....
     bd              6            E..V.....
     ll              7            E..V..... low latency
     llhq            8            E..V..... low latency hq
     llhp            9            E..V..... low latency hp
     lossless        10           E..V.....
     losslesshp      11           E..V.....
  -profile           <int>        E..V..... Set the encoding profile (from 0 to 3) (default main)
     baseline        0            E..V.....
     main            1            E..V.....
     high            2            E..V.....
     high444p        3            E..V.....
  -level             <int>        E..V..... Set the encoding level restriction (from 0 to 51) (default auto)
     auto            0            E..V.....
     1               10           E..V.....
     1.0             10           E..V.....
     1b              9            E..V.....
     1.0b            9            E..V.....
     1.1             11           E..V.....
     1.2             12           E..V.....
     1.3             13           E..V.....
     2               20           E..V.....
     2.0             20           E..V.....
     2.1             21           E..V.....
     2.2             22           E..V.....
     3               30           E..V.....
     3.0             30           E..V.....
     3.1             31           E..V.....
     3.2             32           E..V.....
     4               40           E..V.....
     4.0             40           E..V.....
     4.1             41           E..V.....
     4.2             42           E..V.....
     5               50           E..V.....
     5.0             50           E..V.....
     5.1             51           E..V.....
  -rc                <int>        E..V..... Override the preset rate-control (from -1 to INT_MAX) (default -1)
     constqp         0            E..V..... Constant QP mode
     vbr             1            E..V..... Variable bitrate mode
     cbr             2            E..V..... Constant bitrate mode
     vbr_minqp       8388612      E..V..... Variable bitrate mode with MinQP (deprecated)
     ll_2pass_quality 8388616      E..V..... Multi-pass optimized for image quality (deprecated)
     ll_2pass_size   8388624      E..V..... Multi-pass optimized for constant frame size (deprecated)
     vbr_2pass       8388640      E..V..... Multi-pass variable bitrate mode (deprecated)
     cbr_ld_hq       8            E..V..... Constant bitrate low delay high quality mode
     cbr_hq          16           E..V..... Constant bitrate high quality mode
     vbr_hq          32           E..V..... Variable bitrate high quality mode
  -rc-lookahead      <int>        E..V..... Number of frames to look ahead for rate-control (from 0 to INT_MAX) (default 0)
  -surfaces          <int>        E..V..... Number of concurrent surfaces (from 0 to 64) (default 0)
  -cbr               <boolean>    E..V..... Use cbr encoding mode (default false)
  -2pass             <boolean>    E..V..... Use 2pass encoding mode (default auto)
  -gpu               <int>        E..V..... Selects which NVENC capable GPU to use. First GPU is 0, second is 1, and so on. (from -2 to INT_MAX) (default any)
     any             -1           E..V..... Pick the first device available
     list            -2           E..V..... List the available devices
  -delay             <int>        E..V..... Delay frame output by the given amount of frames (from 0 to INT_MAX) (default INT_MAX)
  -no-scenecut       <boolean>    E..V..... When lookahead is enabled, set this to 1 to disable adaptive I-frame insertion at scene cuts (default false)
  -forced-idr        <boolean>    E..V..... If forcing keyframes, force them as IDR frames. (default false)
  -b_adapt           <boolean>    E..V..... When lookahead is enabled, set this to 0 to disable adaptive B-frame decision (default true)
  -spatial-aq        <boolean>    E..V..... set to 1 to enable Spatial AQ (default false)
  -temporal-aq       <boolean>    E..V..... set to 1 to enable Temporal AQ (default false)
  -zerolatency       <boolean>    E..V..... Set 1 to indicate zero latency operation (no reordering delay) (default false)
  -nonref_p          <boolean>    E..V..... Set this to 1 to enable automatic insertion of non-reference P-frames (default false)
  -strict_gop        <boolean>    E..V..... Set 1 to minimize GOP-to-GOP rate fluctuations (default false)
  -aq-strength       <int>        E..V..... When Spatial AQ is enabled, this field is used to specify AQ strength. AQ strength scale is from 1 (low) - 15 (aggressive) (from 1 to 15) (default 8)
  -cq                <float>      E..V..... Set target quality level (0 to 51, 0 means automatic) for constant quality mode in VBR rate control (from 0 to 51) (default 0)
  -aud               <boolean>    E..V..... Use access unit delimiters (default false)
  -bluray-compat     <boolean>    E..V..... Bluray compatibility workarounds (default false)
  -init_qpP          <int>        E..V..... Initial QP value for P frame (from -1 to 51) (default -1)
  -init_qpB          <int>        E..V..... Initial QP value for B frame (from -1 to 51) (default -1)
  -init_qpI          <int>        E..V..... Initial QP value for I frame (from -1 to 51) (default -1)
  -qp                <int>        E..V..... Constant quantization parameter rate control method (from -1 to 51) (default -1)
  -weighted_pred     <int>        E..V..... Set 1 to enable weighted prediction (from 0 to 1) (default 0)
  -coder             <int>        E..V..... Coder type (from -1 to 2) (default default)
     default         -1           E..V.....
     auto            0            E..V.....
     cabac           1            E..V.....
     cavlc           2            E..V.....
     ac              1            E..V.....
     vlc             2            E..V.....
  -b_ref_mode        <int>        E..V..... Use B frames as references (from 0 to 2) (default disabled)
     disabled        0            E..V..... B frames will not be used for reference
     each            1            E..V..... Each B frame will be used for reference
     middle          2            E..V..... Only (number of B frames)/2 will be used for reference
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

nvenc_h264 AVOptions:
  -preset            <int>        E..V..... Set the encoding preset (from 0 to 11) (default medium)
     default         0            E..V.....
     slow            1            E..V..... hq 2 passes
     medium          2            E..V..... hq 1 pass
     fast            3            E..V..... hp 1 pass
     hp              4            E..V.....
     hq              5            E..V.....
     bd              6            E..V.....
     ll              7            E..V..... low latency
     llhq            8            E..V..... low latency hq
     llhp            9            E..V..... low latency hp
     lossless        10           E..V.....
     losslesshp      11           E..V.....
  -profile           <int>        E..V..... Set the encoding profile (from 0 to 3) (default main)
     baseline        0            E..V.....
     main            1            E..V.....
     high            2            E..V.....
     high444p        3            E..V.....
  -level             <int>        E..V..... Set the encoding level restriction (from 0 to 51) (default auto)
     auto            0            E..V.....
     1               10           E..V.....
     1.0             10           E..V.....
     1b              9            E..V.....
     1.0b            9            E..V.....
     1.1             11           E..V.....
     1.2             12           E..V.....
     1.3             13           E..V.....
     2               20           E..V.....
     2.0             20           E..V.....
     2.1             21           E..V.....
     2.2             22           E..V.....
     3               30           E..V.....
     3.0             30           E..V.....
     3.1             31           E..V.....
     3.2             32           E..V.....
     4               40           E..V.....
     4.0             40           E..V.....
     4.1             41           E..V.....
     4.2             42           E..V.....
     5               50           E..V.....
     5.0             50           E..V.....
     5.1             51           E..V.....
  -rc                <int>        E..V..... Override the preset rate-control (from -1 to INT_MAX) (default -1)
     constqp         0            E..V..... Constant QP mode
     vbr             1            E..V..... Variable bitrate mode
     cbr             2            E..V..... Constant bitrate mode
     vbr_minqp       8388612      E..V..... Variable bitrate mode with MinQP (deprecated)
     ll_2pass_quality 8388616      E..V..... Multi-pass optimized for image quality (deprecated)
     ll_2pass_size   8388624      E..V..... Multi-pass optimized for constant frame size (deprecated)
     vbr_2pass       8388640      E..V..... Multi-pass variable bitrate mode (deprecated)
     cbr_ld_hq       8            E..V..... Constant bitrate low delay high quality mode
     cbr_hq          16           E..V..... Constant bitrate high quality mode
     vbr_hq          32           E..V..... Variable bitrate high quality mode
  -rc-lookahead      <int>        E..V..... Number of frames to look ahead for rate-control (from 0 to INT_MAX) (default 0)
  -surfaces          <int>        E..V..... Number of concurrent surfaces (from 0 to 64) (default 0)
  -cbr               <boolean>    E..V..... Use cbr encoding mode (default false)
  -2pass             <boolean>    E..V..... Use 2pass encoding mode (default auto)
  -gpu               <int>        E..V..... Selects which NVENC capable GPU to use. First GPU is 0, second is 1, and so on. (from -2 to INT_MAX) (default any)
     any             -1           E..V..... Pick the first device available
     list            -2           E..V..... List the available devices
  -delay             <int>        E..V..... Delay frame output by the given amount of frames (from 0 to INT_MAX) (default INT_MAX)
  -no-scenecut       <boolean>    E..V..... When lookahead is enabled, set this to 1 to disable adaptive I-frame insertion at scene cuts (default false)
  -forced-idr        <boolean>    E..V..... If forcing keyframes, force them as IDR frames. (default false)
  -b_adapt           <boolean>    E..V..... When lookahead is enabled, set this to 0 to disable adaptive B-frame decision (default true)
  -spatial-aq        <boolean>    E..V..... set to 1 to enable Spatial AQ (default false)
  -temporal-aq       <boolean>    E..V..... set to 1 to enable Temporal AQ (default false)
  -zerolatency       <boolean>    E..V..... Set 1 to indicate zero latency operation (no reordering delay) (default false)
  -nonref_p          <boolean>    E..V..... Set this to 1 to enable automatic insertion of non-reference P-frames (default false)
  -strict_gop        <boolean>    E..V..... Set 1 to minimize GOP-to-GOP rate fluctuations (default false)
  -aq-strength       <int>        E..V..... When Spatial AQ is enabled, this field is used to specify AQ strength. AQ strength scale is from 1 (low) - 15 (aggressive) (from 1 to 15) (default 8)
  -cq                <float>      E..V..... Set target quality level (0 to 51, 0 means automatic) for constant quality mode in VBR rate control (from 0 to 51) (default 0)
  -aud               <boolean>    E..V..... Use access unit delimiters (default false)
  -bluray-compat     <boolean>    E..V..... Bluray compatibility workarounds (default false)
  -init_qpP          <int>        E..V..... Initial QP value for P frame (from -1 to 51) (default -1)
  -init_qpB          <int>        E..V..... Initial QP value for B frame (from -1 to 51) (default -1)
  -init_qpI          <int>        E..V..... Initial QP value for I frame (from -1 to 51) (default -1)
  -qp                <int>        E..V..... Constant quantization parameter rate control method (from -1 to 51) (default -1)
  -weighted_pred     <int>        E..V..... Set 1 to enable weighted prediction (from 0 to 1) (default 0)
  -coder             <int>        E..V..... Coder type (from -1 to 2) (default default)
     default         -1           E..V.....
     auto            0            E..V.....
     cabac           1            E..V.....
     cavlc           2            E..V.....
     ac              1            E..V.....
     vlc             2            E..V.....
  -b_ref_mode        <int>        E..V..... Use B frames as references (from 0 to 2) (default disabled)
     disabled        0            E..V..... B frames will not be used for reference
     each            1            E..V..... Each B frame will be used for reference
     middle          2            E..V..... Only (number of B frames)/2 will be used for reference
  -a53cc             <boolean>    E..V..... Use A53 Closed Captions (if available) (default true)

nvenc_hevc AVOptions:
  -preset            <int>        E..V..... Set the encoding preset (from 0 to 11) (default medium)
     default         0            E..V.....
     slow            1            E..V..... hq 2 passes
     medium          2            E..V..... hq 1 pass
     fast            3            E..V..... hp 1 pass
     hp              4            E..V.....
     hq              5            E..V.....
     bd              6            E..V.....
     ll              7            E..V..... low latency
     llhq            8            E..V..... low latency hq
     llhp            9            E..V..... low latency hp
     lossless        10           E..V..... lossless
     losslesshp      11           E..V..... lossless hp
  -profile           <int>        E..V..... Set the encoding profile (from 0 to 4) (default main)
     main            0            E..V.....
     main10          1            E..V.....
     rext            2            E..V.....
  -level             <int>        E..V..... Set the encoding level restriction (from 0 to 186) (default auto)
     auto            0            E..V.....
     1               30           E..V.....
     1.0             30           E..V.....
     2               60           E..V.....
     2.0             60           E..V.....
     2.1             63           E..V.....
     3               90           E..V.....
     3.0             90           E..V.....
     3.1             93           E..V.....
     4               120          E..V.....
     4.0             120          E..V.....
     4.1             123          E..V.....
     5               150          E..V.....
     5.0             150          E..V.....
     5.1             153          E..V.....
     5.2             156          E..V.....
     6               180          E..V.....
     6.0             180          E..V.....
     6.1             183          E..V.....
     6.2             186          E..V.....
  -tier              <int>        E..V..... Set the encoding tier (from 0 to 1) (default main)
     main            0            E..V.....
     high            1            E..V.....
  -rc                <int>        E..V..... Override the preset rate-control (from -1 to INT_MAX) (default -1)
     constqp         0            E..V..... Constant QP mode
     vbr             1            E..V..... Variable bitrate mode
     cbr             2            E..V..... Constant bitrate mode
     vbr_minqp       8388612      E..V..... Variable bitrate mode with MinQP (deprecated)
     ll_2pass_quality 8388616      E..V..... Multi-pass optimized for image quality (deprecated)
     ll_2pass_size   8388624      E..V..... Multi-pass optimized for constant frame size (deprecated)
     vbr_2pass       8388640      E..V..... Multi-pass variable bitrate mode (deprecated)
     cbr_ld_hq       8            E..V..... Constant bitrate low delay high quality mode
     cbr_hq          16           E..V..... Constant bitrate high quality mode
     vbr_hq          32           E..V..... Variable bitrate high quality mode
  -rc-lookahead      <int>        E..V..... Number of frames to look ahead for rate-control (from 0 to INT_MAX) (default 0)
  -surfaces          <int>        E..V..... Number of concurrent surfaces (from 0 to 64) (default 0)
  -cbr               <boolean>    E..V..... Use cbr encoding mode (default false)
  -2pass             <boolean>    E..V..... Use 2pass encoding mode (default auto)
  -gpu               <int>        E..V..... Selects which NVENC capable GPU to use. First GPU is 0, second is 1, and so on. (from -2 to INT_MAX) (default any)
     any             -1           E..V..... Pick the first device available
     list            -2           E..V..... List the available devices
  -delay             <int>        E..V..... Delay frame output by the given amount of frames (from 0 to INT_MAX) (default INT_MAX)
  -no-scenecut       <boolean>    E..V..... When lookahead is enabled, set this to 1 to disable adaptive I-frame insertion at scene cuts (default false)
  -forced-idr        <boolean>    E..V..... If forcing keyframes, force them as IDR frames. (default false)
  -spatial_aq        <boolean>    E..V..... set to 1 to enable Spatial AQ (default false)
  -temporal_aq       <boolean>    E..V..... set to 1 to enable Temporal AQ (default false)
  -zerolatency       <boolean>    E..V..... Set 1 to indicate zero latency operation (no reordering delay) (default false)
  -nonref_p          <boolean>    E..V..... Set this to 1 to enable automatic insertion of non-reference P-frames (default false)
  -strict_gop        <boolean>    E..V..... Set 1 to minimize GOP-to-GOP rate fluctuations (default false)
  -aq-strength       <int>        E..V..... When Spatial AQ is enabled, this field is used to specify AQ strength. AQ strength scale is from 1 (low) - 15 (aggressive) (from 1 to 15) (default 8)
  -cq                <float>      E..V..... Set target quality level (0 to 51, 0 means automatic) for constant quality mode in VBR rate control (from 0 to 51) (default 0)
  -aud               <boolean>    E..V..... Use access unit delimiters (default false)
  -bluray-compat     <boolean>    E..V..... Bluray compatibility workarounds (default false)
  -init_qpP          <int>        E..V..... Initial QP value for P frame (from -1 to 51) (default -1)
  -init_qpB          <int>        E..V..... Initial QP value for B frame (from -1 to 51) (default -1)
  -init_qpI          <int>        E..V..... Initial QP value for I frame (from -1 to 51) (default -1)
  -qp                <int>        E..V..... Constant quantization parameter rate control method (from -1 to 51) (default -1)
  -weighted_pred     <int>        E..V..... Set 1 to enable weighted prediction (from 0 to 1) (default 0)
  -b_ref_mode        <int>        E..V..... Use B frames as references (from 0 to 2) (default disabled)
     disabled        0            E..V..... B frames will not be used for reference
     each            1            E..V..... Each B frame will be used for reference
     middle          2            E..V..... Only (number of B frames)/2 will be used for reference

hevc_amf AVOptions:
  -usage             <int>        E..V..... Set the encoding usage (from 0 to 3) (default transcoding)
     transcoding     0            E..V.....
     ultralowlatency 1            E..V.....
     lowlatency      2            E..V.....
     webcam          3            E..V.....
  -profile           <int>        E..V..... Set the profile (default main) (from 1 to 1) (default main)
     main            1            E..V.....
  -profile_tier      <int>        E..V..... Set the profile tier (default main) (from 0 to 1) (default main)
     main            0            E..V.....
     high            1            E..V.....
  -level             <int>        E..V..... Set the encoding level (default auto) (from 0 to 186) (default auto)
     auto            0            E..V.....
     1.0             30           E..V.....
     2.0             60           E..V.....
     2.1             63           E..V.....
     3.0             90           E..V.....
     3.1             93           E..V.....
     4.0             120          E..V.....
     4.1             123          E..V.....
     5.0             150          E..V.....
     5.1             153          E..V.....
     5.2             156          E..V.....
     6.0             180          E..V.....
     6.1             183          E..V.....
     6.2             186          E..V.....
  -quality           <int>        E..V..... Set the encoding quality (from 0 to 10) (default speed)
     balanced        5            E..V.....
     speed           10           E..V.....
     quality         0            E..V.....
  -rc                <int>        E..V..... Set the rate control mode (from -1 to 3) (default -1)
     cqp             0            E..V..... Constant Quantization Parameter
     cbr             3            E..V..... Constant Bitrate
     vbr_peak        2            E..V..... Peak Contrained Variable Bitrate
     vbr_latency     1            E..V..... Latency Constrained Variable Bitrate
  -header_insertion_mode <int>        E..V..... Set header insertion mode (from 0 to 2) (default none)
     none            0            E..V.....
     gop             1            E..V.....
     idr             2            E..V.....
  -gops_per_idr      <int>        E..V..... GOPs per IDR 0-no IDR will be inserted (from 0 to INT_MAX) (default 60)
  -preanalysis       <boolean>    E..V..... Enable preanalysis (default false)
  -vbaq              <boolean>    E..V..... Enable VBAQ (default false)
  -enforce_hrd       <boolean>    E..V..... Enforce HRD (default false)
  -filler_data       <boolean>    E..V..... Filler Data Enable (default false)
  -max_au_size       <int>        E..V..... Maximum Access Unit Size for rate control (in bits) (from 0 to INT_MAX) (default 0)
  -min_qp_i          <int>        E..V..... min quantization parameter for I-frame (from -1 to 51) (default -1)
  -max_qp_i          <int>        E..V..... max quantization parameter for I-frame (from -1 to 51) (default -1)
  -min_qp_p          <int>        E..V..... min quantization parameter for P-frame (from -1 to 51) (default -1)
  -max_qp_p          <int>        E..V..... max quantization parameter for P-frame (from -1 to 51) (default -1)
  -qp_p              <int>        E..V..... quantization parameter for P-frame (from -1 to 51) (default -1)
  -qp_i              <int>        E..V..... quantization parameter for I-frame (from -1 to 51) (default -1)
  -skip_frame        <boolean>    E..V..... Rate Control Based Frame Skip (default false)
  -me_half_pel       <boolean>    E..V..... Enable ME Half Pixel (default true)
  -me_quarter_pel    <boolean>    E..V..... Enable ME Quarter Pixel  (default true)
  -aud               <boolean>    E..V..... Inserts AU Delimiter NAL unit (default false)
  -log_to_dbg        <boolean>    E..V..... Enable AMF logging to debug output (default false)

hevc_nvenc AVOptions:
  -preset            <int>        E..V..... Set the encoding preset (from 0 to 11) (default medium)
     default         0            E..V.....
     slow            1            E..V..... hq 2 passes
     medium          2            E..V..... hq 1 pass
     fast            3            E..V..... hp 1 pass
     hp              4            E..V.....
     hq              5            E..V.....
     bd              6            E..V.....
     ll              7            E..V..... low latency
     llhq            8            E..V..... low latency hq
     llhp            9            E..V..... low latency hp
     lossless        10           E..V..... lossless
     losslesshp      11           E..V..... lossless hp
  -profile           <int>        E..V..... Set the encoding profile (from 0 to 4) (default main)
     main            0            E..V.....
     main10          1            E..V.....
     rext            2            E..V.....
  -level             <int>        E..V..... Set the encoding level restriction (from 0 to 186) (default auto)
     auto            0            E..V.....
     1               30           E..V.....
     1.0             30           E..V.....
     2               60           E..V.....
     2.0             60           E..V.....
     2.1             63           E..V.....
     3               90           E..V.....
     3.0             90           E..V.....
     3.1             93           E..V.....
     4               120          E..V.....
     4.0             120          E..V.....
     4.1             123          E..V.....
     5               150          E..V.....
     5.0             150          E..V.....
     5.1             153          E..V.....
     5.2             156          E..V.....
     6               180          E..V.....
     6.0             180          E..V.....
     6.1             183          E..V.....
     6.2             186          E..V.....
  -tier              <int>        E..V..... Set the encoding tier (from 0 to 1) (default main)
     main            0            E..V.....
     high            1            E..V.....
  -rc                <int>        E..V..... Override the preset rate-control (from -1 to INT_MAX) (default -1)
     constqp         0            E..V..... Constant QP mode
     vbr             1            E..V..... Variable bitrate mode
     cbr             2            E..V..... Constant bitrate mode
     vbr_minqp       8388612      E..V..... Variable bitrate mode with MinQP (deprecated)
     ll_2pass_quality 8388616      E..V..... Multi-pass optimized for image quality (deprecated)
     ll_2pass_size   8388624      E..V..... Multi-pass optimized for constant frame size (deprecated)
     vbr_2pass       8388640      E..V..... Multi-pass variable bitrate mode (deprecated)
     cbr_ld_hq       8            E..V..... Constant bitrate low delay high quality mode
     cbr_hq          16           E..V..... Constant bitrate high quality mode
     vbr_hq          32           E..V..... Variable bitrate high quality mode
  -rc-lookahead      <int>        E..V..... Number of frames to look ahead for rate-control (from 0 to INT_MAX) (default 0)
  -surfaces          <int>        E..V..... Number of concurrent surfaces (from 0 to 64) (default 0)
  -cbr               <boolean>    E..V..... Use cbr encoding mode (default false)
  -2pass             <boolean>    E..V..... Use 2pass encoding mode (default auto)
  -gpu               <int>        E..V..... Selects which NVENC capable GPU to use. First GPU is 0, second is 1, and so on. (from -2 to INT_MAX) (default any)
     any             -1           E..V..... Pick the first device available
     list            -2           E..V..... List the available devices
  -delay             <int>        E..V..... Delay frame output by the given amount of frames (from 0 to INT_MAX) (default INT_MAX)
  -no-scenecut       <boolean>    E..V..... When lookahead is enabled, set this to 1 to disable adaptive I-frame insertion at scene cuts (default false)
  -forced-idr        <boolean>    E..V..... If forcing keyframes, force them as IDR frames. (default false)
  -spatial_aq        <boolean>    E..V..... set to 1 to enable Spatial AQ (default false)
  -temporal_aq       <boolean>    E..V..... set to 1 to enable Temporal AQ (default false)
  -zerolatency       <boolean>    E..V..... Set 1 to indicate zero latency operation (no reordering delay) (default false)
  -nonref_p          <boolean>    E..V..... Set this to 1 to enable automatic insertion of non-reference P-frames (default false)
  -strict_gop        <boolean>    E..V..... Set 1 to minimize GOP-to-GOP rate fluctuations (default false)
  -aq-strength       <int>        E..V..... When Spatial AQ is enabled, this field is used to specify AQ strength. AQ strength scale is from 1 (low) - 15 (aggressive) (from 1 to 15) (default 8)
  -cq                <float>      E..V..... Set target quality level (0 to 51, 0 means automatic) for constant quality mode in VBR rate control (from 0 to 51) (default 0)
  -aud               <boolean>    E..V..... Use access unit delimiters (default false)
  -bluray-compat     <boolean>    E..V..... Bluray compatibility workarounds (default false)
  -init_qpP          <int>        E..V..... Initial QP value for P frame (from -1 to 51) (default -1)
  -init_qpB          <int>        E..V..... Initial QP value for B frame (from -1 to 51) (default -1)
  -init_qpI          <int>        E..V..... Initial QP value for I frame (from -1 to 51) (default -1)
  -qp                <int>        E..V..... Constant quantization parameter rate control method (from -1 to 51) (default -1)
  -weighted_pred     <int>        E..V..... Set 1 to enable weighted prediction (from 0 to 1) (default 0)
  -b_ref_mode        <int>        E..V..... Use B frames as references (from 0 to 2) (default disabled)
     disabled        0            E..V..... B frames will not be used for reference
     each            1            E..V..... Each B frame will be used for reference
     middle          2            E..V..... Only (number of B frames)/2 will be used for reference

hevc_qsv encoder AVOptions:
  -async_depth       <int>        E..V..... Maximum processing parallelism (from 1 to INT_MAX) (default 4)
  -avbr_accuracy     <int>        E..V..... Accuracy of the AVBR ratecontrol (from 0 to INT_MAX) (default 0)
  -avbr_convergence  <int>        E..V..... Convergence of the AVBR ratecontrol (from 0 to INT_MAX) (default 0)
  -preset            <int>        E..V..... (from 1 to 7) (default medium)
     veryfast        7            E..V.....
     faster          6            E..V.....
     fast            5            E..V.....
     medium          4            E..V.....
     slow            3            E..V.....
     slower          2            E..V.....
     veryslow        1            E..V.....
  -rdo               <int>        E..V..... Enable rate distortion optimization (from -1 to 1) (default -1)
  -max_frame_size    <int>        E..V..... Maximum encoded frame size in bytes (from -1 to 65535) (default -1)
  -max_slice_size    <int>        E..V..... Maximum encoded slice size in bytes (from -1 to 65535) (default -1)
  -bitrate_limit     <int>        E..V..... Toggle bitrate limitations (from -1 to 1) (default -1)
  -mbbrc             <int>        E..V..... MB level bitrate control (from -1 to 1) (default -1)
  -extbrc            <int>        E..V..... Extended bitrate control (from -1 to 1) (default -1)
  -adaptive_i        <int>        E..V..... Adaptive I-frame placement (from -1 to 1) (default -1)
  -adaptive_b        <int>        E..V..... Adaptive B-frame placement (from -1 to 1) (default -1)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from -1 to 1) (default -1)
  -forced_idr        <boolean>    E..V..... Forcing I frames as IDR frames (default false)
  -low_power         <boolean>    E..V..... enable low power mode(experimental: many limitations by mfx version, BRC modes, etc.) (default false)
  -idr_interval      <int>        E..V..... Distance (in I-frames) between IDR frames (from -1 to INT_MAX) (default 0)
     begin_only      -1           E..V..... Output an IDR-frame only at the beginning of the stream
  -load_plugin       <int>        E..V..... A user plugin to load in an internal session (from 0 to 2) (default hevc_hw)
     none            0            E..V.....
     hevc_sw         1            E..V.....
     hevc_hw         2            E..V.....
  -load_plugins      <string>     E..V..... A :-separate list of hexadecimal plugin UIDs to load in an internal session (default "")
  -profile           <int>        E..V..... (from 0 to INT_MAX) (default unknown)
     unknown         0            E..V.....
     main            1            E..V.....
     main10          2            E..V.....
     mainsp          3            E..V.....
  -gpb               <boolean>    E..V..... 1: GPB (generalized P/B frame); 0: regular P frame (default true)

mjpeg_qsv encoder AVOptions:
  -async_depth       <int>        E..V..... Maximum processing parallelism (from 1 to INT_MAX) (default 4)

mpeg2_qsv encoder AVOptions:
  -async_depth       <int>        E..V..... Maximum processing parallelism (from 1 to INT_MAX) (default 4)
  -avbr_accuracy     <int>        E..V..... Accuracy of the AVBR ratecontrol (from 0 to INT_MAX) (default 0)
  -avbr_convergence  <int>        E..V..... Convergence of the AVBR ratecontrol (from 0 to INT_MAX) (default 0)
  -preset            <int>        E..V..... (from 1 to 7) (default medium)
     veryfast        7            E..V.....
     faster          6            E..V.....
     fast            5            E..V.....
     medium          4            E..V.....
     slow            3            E..V.....
     slower          2            E..V.....
     veryslow        1            E..V.....
  -rdo               <int>        E..V..... Enable rate distortion optimization (from -1 to 1) (default -1)
  -max_frame_size    <int>        E..V..... Maximum encoded frame size in bytes (from -1 to 65535) (default -1)
  -max_slice_size    <int>        E..V..... Maximum encoded slice size in bytes (from -1 to 65535) (default -1)
  -bitrate_limit     <int>        E..V..... Toggle bitrate limitations (from -1 to 1) (default -1)
  -mbbrc             <int>        E..V..... MB level bitrate control (from -1 to 1) (default -1)
  -extbrc            <int>        E..V..... Extended bitrate control (from -1 to 1) (default -1)
  -adaptive_i        <int>        E..V..... Adaptive I-frame placement (from -1 to 1) (default -1)
  -adaptive_b        <int>        E..V..... Adaptive B-frame placement (from -1 to 1) (default -1)
  -b_strategy        <int>        E..V..... Strategy to choose between I/P/B-frames (from -1 to 1) (default -1)
  -forced_idr        <boolean>    E..V..... Forcing I frames as IDR frames (default false)
  -low_power         <boolean>    E..V..... enable low power mode(experimental: many limitations by mfx version, BRC modes, etc.) (default false)
  -profile           <int>        E..V..... (from 0 to INT_MAX) (default unknown)
     unknown         0            E..V.....
     simple          80           E..V.....
     main            64           E..V.....
     high            16           E..V.....

EXR AVOptions:
  -layer             <string>     .D.V..... Set the decoding layer (default "")
  -gamma             <float>      .D.V..... Set the float gamma value when decoding (from 0.001 to FLT_MAX) (default 1)
  -apply_trc         <int>        .D.V..... color transfer characteristics to apply to EXR linear input (from 1 to 18) (default gamma)
     bt709           1            .D.V..... BT.709
     gamma           2            .D.V..... gamma
     gamma22         4            .D.V..... BT.470 M
     gamma28         5            .D.V..... BT.470 BG
     smpte170m       6            .D.V..... SMPTE 170 M
     smpte240m       7            .D.V..... SMPTE 240 M
     linear          8            .D.V..... Linear
     log             9            .D.V..... Log
     log_sqrt        10           .D.V..... Log square root
     iec61966_2_4    11           .D.V..... IEC 61966-2-4
     bt1361          12           .D.V..... BT.1361
     iec61966_2_1    13           .D.V..... IEC 61966-2-1
     bt2020_10bit    14           .D.V..... BT.2020 - 10 bit
     bt2020_12bit    15           .D.V..... BT.2020 - 12 bit
     smpte2084       16           .D.V..... SMPTE ST 2084
     smpte428_1      17           .D.V..... SMPTE ST 428-1

FIC decoder AVOptions:
  -skip_cursor       <boolean>    .D.V..... skip the cursor (default false)

FITS decoder AVOptions:
  -blank_value       <int>        .D.V..... value that is used to replace BLANK pixels in data array (from 0 to 65535) (default 0)

frwu Decoder AVOptions:
  -change_field_order <boolean>    .D.V..... Change field order (default false)

gif decoder AVOptions:
  -trans_color       <int>        .D.V..... color value (ARGB) that is used instead of transparent color (from 0 to UINT32_MAX) (default 16777215)

H264 Decoder AVOptions:
  -enable_er         <boolean>    .D.V..... Enable error resilience on damaged frames (unsafe) (default auto)
  -x264_build        <int>        .D.V..... Assume this x264 version if no x264 version found in any SEI (from -1 to INT_MAX) (default -1)

h264_qsv AVOptions:
  -async_depth       <int>        .D.V..... Internal parallelization depth, the higher the value the higher the latency. (from 1 to INT_MAX) (default 4)

HEVC decoder AVOptions:
  -apply_defdispwin  <boolean>    .D.V..... Apply default display window from VUI (default false)
  -strict-displaywin <boolean>    .D.V..... stricly apply default display window size (default false)

hevc_qsv AVOptions:
  -async_depth       <int>        .D.V..... Internal parallelization depth, the higher the value the higher the latency. (from 1 to INT_MAX) (default 4)
  -load_plugin       <int>        .D.V..... A user plugin to load in an internal session (from 0 to 2) (default hevc_hw)
     none            0            .D.V.....
     hevc_sw         1            .D.V.....
     hevc_hw         2            .D.V.....
  -load_plugins      <string>     .D.V..... A :-separate list of hexadecimal plugin UIDs to load in an internal session (default "")

jpeg2000 AVOptions:
  -lowres            <int>        .D.V..... Lower the decoding resolution by a power of two (from 0 to 33) (default 0)

MJPEG decoder AVOptions:
  -extern_huff       <boolean>    .D.V..... Use external huffman table. (default false)

MPEG4 Video Decoder AVOptions:

mpeg2_qsv AVOptions:
  -async_depth       <int>        .D.V..... Internal parallelization depth, the higher the value the higher the latency. (from 1 to INT_MAX) (default 4)

rasc decoder AVOptions:
  -skip_cursor       <boolean>    .D.V..... skip the cursor (default false)

rawdec AVOptions:
  -top               <boolean>    .D.V..... top field first (default auto)

SMPTE 302M Decoder AVOptions:
  -non_pcm_mode      <int>        .D..A.... Chooses what to do with NON-PCM (from 0 to 3) (default decode_drop)
     copy            0            .D..A.... Pass NON-PCM through unchanged
     drop            1            .D..A.... Drop NON-PCM
     decode_copy     2            .D..A.... Decode if possible else passthrough
     decode_drop     3            .D..A.... Decode if possible else drop

TIFF decoder AVOptions:
  -subimage          <boolean>    .D.V..... decode subimage instead if available (default false)
  -thumbnail         <boolean>    .D.V..... decode embedded thumbnail subimage instead if available (default false)
  -page              <int>        .D.V..... page number of multi-page image to decode (starting from 1) (from 0 to 65535) (default 0)

V210 Decoder AVOptions:
  -custom_stride     <int>        .D.V..... Custom V210 stride (from INT_MIN to INT_MAX) (default 0)

vc1_qsv AVOptions:
  -async_depth       <int>        .D.V..... Internal parallelization depth, the higher the value the higher the latency. (from 1 to INT_MAX) (default 4)

AAC decoder AVOptions:
  -dual_mono_mode    <int>        .D..A.... Select the channel to decode for dual mono (from -1 to 2) (default auto)
     auto            -1           .D..A.... autoselection
     main            1            .D..A.... Select Main/Left channel
     sub             2            .D..A.... Select Sub/Right channel
     both            0            .D..A.... Select both channels

AC3 decoder AVOptions:
  -cons_noisegen     <boolean>    .D..A.... enable consistent noise generation (default false)
  -drc_scale         <float>      .D..A.... percentage of dynamic range compression to apply (from 0 to 6) (default 1)
  -heavy_compr       <boolean>    .D..A.... enable heavy dynamic range compression (default false)
  -target_level      <int>        .D..A.... target level in -dBFS (0 not applied) (from -31 to 0) (default 0)

Fixed-Point AC-3 Decoder AVOptions:
  -cons_noisegen     <boolean>    .D..A.... enable consistent noise generation (default false)
  -drc_scale         <float>      .D..A.... percentage of dynamic range compression to apply (from 0 to 6) (default 1)
  -heavy_compr       <boolean>    .D..A.... enable heavy dynamic range compression (default false)

alac AVOptions:
  -extra_bits_bug    <boolean>    .D..A.... Force non-standard decoding process (default false)

APE decoder AVOptions:
  -max_samples       <int>        .D..A.... maximum number of samples decoded per call (from 1 to INT_MAX) (default 4608)
     all             2147483647   .D..A.... no maximum. decode all samples for each packet at once

DCA decoder AVOptions:
  -core_only         <boolean>    .D..A.... Decode core only without extensions (default false)

E-AC3 decoder AVOptions:
  -cons_noisegen     <boolean>    .D..A.... enable consistent noise generation (default false)
  -drc_scale         <float>      .D..A.... percentage of dynamic range compression to apply (from 0 to 6) (default 1)
  -heavy_compr       <boolean>    .D..A.... enable heavy dynamic range compression (default false)
  -target_level      <int>        .D..A.... target level in -dBFS (0 not applied) (from -31 to 0) (default 0)

evrc AVOptions:
  -postfilter        <boolean>    .D..A.... enable postfilter (default true)

FLAC decoder AVOptions:
  -use_buggy_lpc     <boolean>    .D..A.... emulate old buggy lavc behavior (default false)

G.723.1 decoder AVOptions:
  -postfilter        <boolean>    .D..A.... enable postfilter (default true)

Opus Decoder AVOptions:
  -apply_phase_inv   <boolean>    .D..A.... Apply intensity stereo phase inversion (default true)

TTA Decoder AVOptions:
  -password          <string>     .D..A.... Set decoding password

g722 decoder AVOptions:
  -bits_per_codeword <int>        .D..A.... Bits per G722 codeword (from 6 to 8) (default 8)

Closed caption Decoder AVOptions:
  -real_time         <boolean>    .D...S... emit subtitle events as they are decoded for real-time display (default false)

DVB Sub Decoder AVOptions:
  -compute_edt       <boolean>    .D...S... compute end of time using pts or timeout (default false)
  -compute_clut      <boolean>    .D...S... compute clut when not available(-1) or always(1) or never(0) (default auto)
  -dvb_substream     <int>        .D...S...  (from -1 to 63) (default -1)

dvdsubdec AVOptions:
  -palette           <string>     .D...S... set the global palette
  -ifo_palette       <string>     .D...S... obtain the global palette from .IFO file
  -forced_subs_only  <boolean>    .D...S... Only show forced subtitles (default false)

PGS subtitle decoder AVOptions:
  -forced_subs_only  <boolean>    .D...S... Only show forced subtitles (default false)

pjs decoder AVOptions:
  -keep_ass_markup   <boolean>    .D...S... Set if ASS tags must be escaped (default false)

stl decoder AVOptions:
  -keep_ass_markup   <boolean>    .D...S... Set if ASS tags must be escaped (default false)

subviewer1 decoder AVOptions:
  -keep_ass_markup   <boolean>    .D...S... Set if ASS tags must be escaped (default false)

text decoder AVOptions:
  -keep_ass_markup   <boolean>    .D...S... Set if ASS tags must be escaped (default false)

vplayer decoder AVOptions:
  -keep_ass_markup   <boolean>    .D...S... Set if ASS tags must be escaped (default false)

libdav1d decoder AVOptions:
  -tilethreads       <int>        .D.V..... Tile threads (from 0 to 64) (default 0)
  -framethreads      <int>        .D.V..... Frame threads (from 0 to 256) (default 0)
  -filmgrain         <boolean>    .D.V..... Apply Film Grain (default auto)

libopenjpeg AVOptions:
  -lowqual           <int>        .D.V..... Limit the number of layers used for decoding (from 0 to INT_MAX) (default 0)

libopusdec AVOptions:
  -apply_phase_inv   <boolean>    .D..A.... Apply intensity stereo phase inversion (default true)

h264_cuvid AVOptions:
  -deint             <int>        .D.V..... Set deinterlacing mode (from 0 to 2) (default weave)
     weave           0            .D.V..... Weave deinterlacing (do nothing)
     bob             1            .D.V..... Bob deinterlacing
     adaptive        2            .D.V..... Adaptive deinterlacing
  -gpu               <string>     .D.V..... GPU to be used for decoding
  -surfaces          <int>        .D.V..... Maximum surfaces to be used for decoding (from 0 to INT_MAX) (default 25)
  -drop_second_field <boolean>    .D.V..... Drop second field when deinterlacing (default false)
  -crop              <string>     .D.V..... Crop (top)x(bottom)x(left)x(right)
  -resize            <string>     .D.V..... Resize (width)x(height)

hevc_cuvid AVOptions:
  -deint             <int>        .D.V..... Set deinterlacing mode (from 0 to 2) (default weave)
     weave           0            .D.V..... Weave deinterlacing (do nothing)
     bob             1            .D.V..... Bob deinterlacing
     adaptive        2            .D.V..... Adaptive deinterlacing
  -gpu               <string>     .D.V..... GPU to be used for decoding
  -surfaces          <int>        .D.V..... Maximum surfaces to be used for decoding (from 0 to INT_MAX) (default 25)
  -drop_second_field <boolean>    .D.V..... Drop second field when deinterlacing (default false)
  -crop              <string>     .D.V..... Crop (top)x(bottom)x(left)x(right)
  -resize            <string>     .D.V..... Resize (width)x(height)

mjpeg_cuvid AVOptions:
  -deint             <int>        .D.V..... Set deinterlacing mode (from 0 to 2) (default weave)
     weave           0            .D.V..... Weave deinterlacing (do nothing)
     bob             1            .D.V..... Bob deinterlacing
     adaptive        2            .D.V..... Adaptive deinterlacing
  -gpu               <string>     .D.V..... GPU to be used for decoding
  -surfaces          <int>        .D.V..... Maximum surfaces to be used for decoding (from 0 to INT_MAX) (default 25)
  -drop_second_field <boolean>    .D.V..... Drop second field when deinterlacing (default false)
  -crop              <string>     .D.V..... Crop (top)x(bottom)x(left)x(right)
  -resize            <string>     .D.V..... Resize (width)x(height)

mjpeg_qsv AVOptions:
  -async_depth       <int>        .D.V..... Internal parallelization depth, the higher the value the higher the latency. (from 1 to INT_MAX) (default 4)

mpeg1_cuvid AVOptions:
  -deint             <int>        .D.V..... Set deinterlacing mode (from 0 to 2) (default weave)
     weave           0            .D.V..... Weave deinterlacing (do nothing)
     bob             1            .D.V..... Bob deinterlacing
     adaptive        2            .D.V..... Adaptive deinterlacing
  -gpu               <string>     .D.V..... GPU to be used for decoding
  -surfaces          <int>        .D.V..... Maximum surfaces to be used for decoding (from 0 to INT_MAX) (default 25)
  -drop_second_field <boolean>    .D.V..... Drop second field when deinterlacing (default false)
  -crop              <string>     .D.V..... Crop (top)x(bottom)x(left)x(right)
  -resize            <string>     .D.V..... Resize (width)x(height)

mpeg2_cuvid AVOptions:
  -deint             <int>        .D.V..... Set deinterlacing mode (from 0 to 2) (default weave)
     weave           0            .D.V..... Weave deinterlacing (do nothing)
     bob             1            .D.V..... Bob deinterlacing
     adaptive        2            .D.V..... Adaptive deinterlacing
  -gpu               <string>     .D.V..... GPU to be used for decoding
  -surfaces          <int>        .D.V..... Maximum surfaces to be used for decoding (from 0 to INT_MAX) (default 25)
  -drop_second_field <boolean>    .D.V..... Drop second field when deinterlacing (default false)
  -crop              <string>     .D.V..... Crop (top)x(bottom)x(left)x(right)
  -resize            <string>     .D.V..... Resize (width)x(height)

mpeg4_cuvid AVOptions:
  -deint             <int>        .D.V..... Set deinterlacing mode (from 0 to 2) (default weave)
     weave           0            .D.V..... Weave deinterlacing (do nothing)
     bob             1            .D.V..... Bob deinterlacing
     adaptive        2            .D.V..... Adaptive deinterlacing
  -gpu               <string>     .D.V..... GPU to be used for decoding
  -surfaces          <int>        .D.V..... Maximum surfaces to be used for decoding (from 0 to INT_MAX) (default 25)
  -drop_second_field <boolean>    .D.V..... Drop second field when deinterlacing (default false)
  -crop              <string>     .D.V..... Crop (top)x(bottom)x(left)x(right)
  -resize            <string>     .D.V..... Resize (width)x(height)

vc1_cuvid AVOptions:
  -deint             <int>        .D.V..... Set deinterlacing mode (from 0 to 2) (default weave)
     weave           0            .D.V..... Weave deinterlacing (do nothing)
     bob             1            .D.V..... Bob deinterlacing
     adaptive        2            .D.V..... Adaptive deinterlacing
  -gpu               <string>     .D.V..... GPU to be used for decoding
  -surfaces          <int>        .D.V..... Maximum surfaces to be used for decoding (from 0 to INT_MAX) (default 25)
  -drop_second_field <boolean>    .D.V..... Drop second field when deinterlacing (default false)
  -crop              <string>     .D.V..... Crop (top)x(bottom)x(left)x(right)
  -resize            <string>     .D.V..... Resize (width)x(height)

vp8_cuvid AVOptions:
  -deint             <int>        .D.V..... Set deinterlacing mode (from 0 to 2) (default weave)
     weave           0            .D.V..... Weave deinterlacing (do nothing)
     bob             1            .D.V..... Bob deinterlacing
     adaptive        2            .D.V..... Adaptive deinterlacing
  -gpu               <string>     .D.V..... GPU to be used for decoding
  -surfaces          <int>        .D.V..... Maximum surfaces to be used for decoding (from 0 to INT_MAX) (default 25)
  -drop_second_field <boolean>    .D.V..... Drop second field when deinterlacing (default false)
  -crop              <string>     .D.V..... Crop (top)x(bottom)x(left)x(right)
  -resize            <string>     .D.V..... Resize (width)x(height)

vp8_qsv AVOptions:
  -async_depth       <int>        .D.V..... Internal parallelization depth, the higher the value the higher the latency. (from 1 to INT_MAX) (default 4)

vp9_cuvid AVOptions:
  -deint             <int>        .D.V..... Set deinterlacing mode (from 0 to 2) (default weave)
     weave           0            .D.V..... Weave deinterlacing (do nothing)
     bob             1            .D.V..... Bob deinterlacing
     adaptive        2            .D.V..... Adaptive deinterlacing
  -gpu               <string>     .D.V..... GPU to be used for decoding
  -surfaces          <int>        .D.V..... Maximum surfaces to be used for decoding (from 0 to INT_MAX) (default 25)
  -drop_second_field <boolean>    .D.V..... Drop second field when deinterlacing (default false)
  -crop              <string>     .D.V..... Crop (top)x(bottom)x(left)x(right)
  -resize            <string>     .D.V..... Resize (width)x(height)

vp9_qsv AVOptions:
  -async_depth       <int>        .D.V..... Internal parallelization depth, the higher the value the higher the latency. (from 1 to INT_MAX) (default 4)

AVFormatContext AVOptions:
  -avioflags         <flags>      ED....... (default 0)
     direct                       ED....... reduce buffering
  -probesize         <int64>      .D....... set probing size (from 32 to I64_MAX) (default 5000000)
  -formatprobesize   <int>        .D....... number of bytes to probe file format (from 0 to 2.14748e+09) (default 1048576)
  -packetsize        <int>        E........ set packet size (from 0 to INT_MAX) (default 0)
  -fflags            <flags>      ED....... (default autobsf)
     flush_packets                E........ reduce the latency by flushing out packets immediately
     ignidx                       .D....... ignore index
     genpts                       .D....... generate pts
     nofillin                     .D....... do not fill in missing values that can be exactly calculated
     noparse                      .D....... disable AVParsers, this needs nofillin too
     igndts                       .D....... ignore dts
     discardcorrupt               .D....... discard corrupted frames
     sortdts                      .D....... try to interleave outputted packets by dts
     keepside                     .D....... deprecated, does nothing
     fastseek                     .D....... fast but inaccurate seeks
     latm                         E........ deprecated, does nothing
     nobuffer                     .D....... reduce the latency introduced by optional buffering
     bitexact                     E........ do not write random/volatile data
     shortest                     E........ stop muxing with the shortest stream
     autobsf                      E........ add needed bsfs automatically
  -seek2any          <boolean>    .D....... allow seeking to non-keyframes on demuxer level when supported (default false)
  -analyzeduration   <int64>      .D....... specify how many microseconds are analyzed to probe the input (from 0 to I64_MAX) (default 0)
  -cryptokey         <binary>     .D....... decryption key
  -indexmem          <int>        .D....... max memory used for timestamp index (per stream) (from 0 to INT_MAX) (default 1048576)
  -rtbufsize         <int>        .D....... max memory used for buffering real-time frames (from 0 to INT_MAX) (default 3041280)
  -fdebug            <flags>      ED....... print specific debug info (default 0)
     ts                           ED.......
  -max_delay         <int>        ED....... maximum muxing or demuxing delay in microseconds (from -1 to INT_MAX) (default -1)
  -start_time_realtime <int64>      E........ wall-clock time when stream begins (PTS==0) (from I64_MIN to I64_MAX) (default I64_MIN)
  -fpsprobesize      <int>        .D....... number of frames used to probe fps (from -1 to 2.14748e+09) (default -1)
  -audio_preload     <int>        E........ microseconds by which audio packets should be interleaved earlier (from 0 to 2.14748e+09) (default 0)
  -chunk_duration    <int>        E........ microseconds for each chunk (from 0 to 2.14748e+09) (default 0)
  -chunk_size        <int>        E........ size in bytes for each chunk (from 0 to 2.14748e+09) (default 0)
  -f_err_detect      <flags>      .D....... set error detection flags (deprecated; use err_detect, save via avconv) (default crccheck)
     crccheck                     .D....... verify embedded CRCs
     bitstream                    .D....... detect bitstream specification deviations
     buffer                       .D....... detect improper bitstream length
     explode                      .D....... abort decoding on minor error detection
     ignore_err                   .D....... ignore errors
     careful                      .D....... consider things that violate the spec, are fast to check and have not been seen in the wild as errors
     compliant                    .D....... consider all spec non compliancies as errors
     aggressive                   .D....... consider things that a sane encoder shouldn't do as an error
  -err_detect        <flags>      .D....... set error detection flags (default crccheck)
     crccheck                     .D....... verify embedded CRCs
     bitstream                    .D....... detect bitstream specification deviations
     buffer                       .D....... detect improper bitstream length
     explode                      .D....... abort decoding on minor error detection
     ignore_err                   .D....... ignore errors
     careful                      .D....... consider things that violate the spec, are fast to check and have not been seen in the wild as errors
     compliant                    .D....... consider all spec non compliancies as errors
     aggressive                   .D....... consider things that a sane encoder shouldn't do as an error
  -use_wallclock_as_timestamps <boolean>    .D....... use wallclock as timestamps (default false)
  -skip_initial_bytes <int64>      .D....... set number of bytes to skip before reading header and frames (from 0 to I64_MAX) (default 0)
  -correct_ts_overflow <boolean>    .D....... correct single timestamp overflows (default true)
  -flush_packets     <int>        E........ enable flushing of the I/O context after each packet (from -1 to 1) (default -1)
  -metadata_header_padding <int>        E........ set number of bytes to be written as padding in a metadata header (from -1 to INT_MAX) (default -1)
  -output_ts_offset  <duration>   E........ set output timestamp offset (default 0)
  -max_interleave_delta <int64>      E........ maximum buffering duration for interleaving (from 0 to I64_MAX) (default 10000000)
  -f_strict          <int>        ED....... how strictly to follow the standards (deprecated; use strict, save via avconv) (from INT_MIN to INT_MAX) (default normal)
     very            2            ED....... strictly conform to a older more strict version of the spec or reference software
     strict          1            ED....... strictly conform to all the things in the spec no matter what the consequences
     normal          0            ED.......
     unofficial      -1           ED....... allow unofficial extensions
     experimental    -2           ED....... allow non-standardized experimental variants
  -strict            <int>        ED....... how strictly to follow the standards (from INT_MIN to INT_MAX) (default normal)
     very            2            ED....... strictly conform to a older more strict version of the spec or reference software
     strict          1            ED....... strictly conform to all the things in the spec no matter what the consequences
     normal          0            ED.......
     unofficial      -1           ED....... allow unofficial extensions
     experimental    -2           ED....... allow non-standardized experimental variants
  -max_ts_probe      <int>        .D....... maximum number of packets to read while waiting for the first timestamp (from 0 to INT_MAX) (default 50)
  -avoid_negative_ts <int>        E........ shift timestamps so they start at 0 (from -1 to 2) (default auto)
     auto            -1           E........ enabled when required by target format
     disabled        0            E........ do not change timestamps
     make_non_negative 1            E........ shift timestamps so they are non negative
     make_zero       2            E........ shift timestamps so they start at 0
  -dump_separator    <string>     ED....... set information dump field separator (default ", ")
  -codec_whitelist   <string>     .D....... List of decoders that are allowed to be used
  -format_whitelist  <string>     .D....... List of demuxers that are allowed to be used
  -protocol_whitelist <string>     .D....... List of protocols that are allowed to be used
  -protocol_blacklist <string>     .D....... List of protocols that are not allowed to be used
  -max_streams       <int>        .D....... maximum number of streams (from 0 to INT_MAX) (default 1000)
  -skip_estimate_duration_from_pts <boolean>    .D....... skip duration calculation in estimate_timings_from_pts (default false)

AVIOContext AVOptions:
  -protocol_whitelist <string>     .D....... List of protocols that are allowed to be used

URLContext AVOptions:
  -protocol_whitelist <string>     .D....... List of protocols that are allowed to be used
  -protocol_blacklist <string>     .D....... List of protocols that are not allowed to be used
  -rw_timeout        <int64>      ED....... Timeout for IO operations (in microseconds) (from 0 to I64_MAX) (default 0)

Async AVOptions:

bluray AVOptions:
  -playlist          <int>        .D.......  (from -1 to 99999) (default -1)
  -angle             <int>        .D.......  (from 0 to 254) (default 0)
  -chapter           <int>        .D.......  (from 1 to 65534) (default 1)

Cache AVOptions:
  -read_ahead_limit  <int>        .D....... Amount in bytes that may be read ahead when seeking isn't supported, -1 for unlimited (from -1 to INT_MAX) (default 65536)

crypto AVOptions:
  -key               <binary>     ED....... AES encryption/decryption key
  -iv                <binary>     ED....... AES encryption/decryption initialization vector
  -decryption_key    <binary>     .D....... AES decryption key
  -decryption_iv     <binary>     .D....... AES decryption initialization vector
  -encryption_key    <binary>     E........ AES encryption key
  -encryption_iv     <binary>     E........ AES encryption initialization vector

ffrtmpcrypt AVOptions:
  -ffrtmpcrypt_tunneling <int>        .D....... Use a HTTP tunneling connection (RTMPTE). (from 0 to 1) (default 0)

ffrtmphttp AVOptions:
  -ffrtmphttp_tls    <boolean>    .D....... Use a HTTPS tunneling connection (RTMPTS). (default false)

file AVOptions:
  -truncate          <boolean>    E........ truncate existing files on write (default true)
  -blocksize         <int>        E........ set I/O operation maximum block size (from 1 to INT_MAX) (default INT_MAX)
  -follow            <int>        .D....... Follow a file as it is being written (from 0 to 1) (default 0)
  -seekable          <int>        ED....... Sets if the file is seekable (from -1 to 0) (default -1)

ftp AVOptions:
  -timeout           <int>        ED....... set timeout of socket I/O operations (from -1 to INT_MAX) (default -1)
  -ftp-write-seekable <boolean>    E........ control seekability of connection during encoding (default false)
  -ftp-anonymous-password <string>     ED....... password for anonymous login. E-mail address should be used.

http AVOptions:
  -seekable          <boolean>    .D....... control seekability of connection (default auto)
  -chunked_post      <boolean>    E........ use chunked transfer-encoding for posts (default true)
  -http_proxy        <string>     ED....... set HTTP proxy to tunnel through
  -headers           <string>     ED....... set custom HTTP headers, can override built in default headers
  -content_type      <string>     ED....... set a specific content type for the POST messages
  -user_agent        <string>     .D....... override User-Agent header (default "Lavf/58.33.100")
  -referer           <string>     .D....... override referer header
  -user-agent        <string>     .D....... use the "user_agent" option instead (default "Lavf/58.33.100")
  -multiple_requests <boolean>    ED....... use persistent connections (default false)
  -post_data         <binary>     ED....... set custom HTTP post data
  -cookies           <string>     .D....... set cookies to be sent in applicable future requests, use newline delimited Set-Cookie HTTP field value syntax
  -icy               <boolean>    .D....... request ICY metadata (default true)
  -auth_type         <int>        ED....... HTTP authentication type (from 0 to 1) (default none)
     none            0            ED....... No auth method set, autodetect
     basic           1            ED....... HTTP basic authentication
  -send_expect_100   <boolean>    E........ Force sending an Expect: 100-continue header for POST (default auto)
  -location          <string>     ED....... The actual location of the data received
  -offset            <int64>      .D....... initial byte offset (from 0 to I64_MAX) (default 0)
  -end_offset        <int64>      .D....... try to limit the request to bytes preceding this offset (from 0 to I64_MAX) (default 0)
  -method            <string>     ED....... Override the HTTP method or set the expected HTTP method from a client
  -reconnect         <boolean>    .D....... auto reconnect after disconnect before EOF (default false)
  -reconnect_at_eof  <boolean>    .D....... auto reconnect at EOF (default false)
  -reconnect_streamed <boolean>    .D....... auto reconnect streamed / non seekable streams (default false)
  -reconnect_delay_max <int>        .D....... max reconnect delay in seconds after which to give up (from 0 to 4294) (default 120)
  -listen            <int>        ED....... listen on HTTP (from 0 to 2) (default 0)
  -resource          <string>     E........ The resource requested by a client
  -reply_code        <int>        E........ The http status code to return to a client (from INT_MIN to 599) (default 200)

https AVOptions:
  -seekable          <boolean>    .D....... control seekability of connection (default auto)
  -chunked_post      <boolean>    E........ use chunked transfer-encoding for posts (default true)
  -http_proxy        <string>     ED....... set HTTP proxy to tunnel through
  -headers           <string>     ED....... set custom HTTP headers, can override built in default headers
  -content_type      <string>     ED....... set a specific content type for the POST messages
  -user_agent        <string>     .D....... override User-Agent header (default "Lavf/58.33.100")
  -referer           <string>     .D....... override referer header
  -user-agent        <string>     .D....... use the "user_agent" option instead (default "Lavf/58.33.100")
  -multiple_requests <boolean>    ED....... use persistent connections (default false)
  -post_data         <binary>     ED....... set custom HTTP post data
  -cookies           <string>     .D....... set cookies to be sent in applicable future requests, use newline delimited Set-Cookie HTTP field value syntax
  -icy               <boolean>    .D....... request ICY metadata (default true)
  -auth_type         <int>        ED....... HTTP authentication type (from 0 to 1) (default none)
     none            0            ED....... No auth method set, autodetect
     basic           1            ED....... HTTP basic authentication
  -send_expect_100   <boolean>    E........ Force sending an Expect: 100-continue header for POST (default auto)
  -location          <string>     ED....... The actual location of the data received
  -offset            <int64>      .D....... initial byte offset (from 0 to I64_MAX) (default 0)
  -end_offset        <int64>      .D....... try to limit the request to bytes preceding this offset (from 0 to I64_MAX) (default 0)
  -method            <string>     ED....... Override the HTTP method or set the expected HTTP method from a client
  -reconnect         <boolean>    .D....... auto reconnect after disconnect before EOF (default false)
  -reconnect_at_eof  <boolean>    .D....... auto reconnect at EOF (default false)
  -reconnect_streamed <boolean>    .D....... auto reconnect streamed / non seekable streams (default false)
  -reconnect_delay_max <int>        .D....... max reconnect delay in seconds after which to give up (from 0 to 4294) (default 120)
  -listen            <int>        ED....... listen on HTTP (from 0 to 2) (default 0)
  -resource          <string>     E........ The resource requested by a client
  -reply_code        <int>        E........ The http status code to return to a client (from INT_MIN to 599) (default 200)

icecast AVOptions:
  -ice_genre         <string>     E........ set stream genre
  -ice_name          <string>     E........ set stream description
  -ice_description   <string>     E........ set stream description
  -ice_url           <string>     E........ set stream website
  -ice_public        <boolean>    E........ set if stream is public (default false)
  -user_agent        <string>     E........ override User-Agent header
  -password          <string>     E........ set password
  -content_type      <string>     E........ set content-type, MUST be set if not audio/mpeg
  -legacy_icecast    <boolean>    E........ use legacy SOURCE method, for Icecast < v2.4 (default false)

pipe AVOptions:
  -blocksize         <int>        E........ set I/O operation maximum block size (from 1 to INT_MAX) (default INT_MAX)

prompeg AVOptions:
  -ttl               <int>        E........ Time to live (in milliseconds, multicast only) (from -1 to INT_MAX) (default -1)
  -l                 <int>        E........ FEC L (from 4 to 20) (default 5)
  -d                 <int>        E........ FEC D (from 4 to 20) (default 5)

rtmp AVOptions:
  -rtmp_app          <string>     ED....... Name of application to connect to on the RTMP server
  -rtmp_buffer       <int>        ED....... Set buffer time in milliseconds. The default is 3000. (from 0 to INT_MAX) (default 3000)
  -rtmp_conn         <string>     ED....... Append arbitrary AMF data to the Connect message
  -rtmp_flashver     <string>     ED....... Version of the Flash plugin used to run the SWF player.
  -rtmp_flush_interval <int>        E........ Number of packets flushed in the same request (RTMPT only). (from 0 to INT_MAX) (default 10)
  -rtmp_live         <int>        .D....... Specify that the media is a live stream. (from INT_MIN to INT_MAX) (default any)
     any             -2           .D....... both
     live            -1           .D....... live stream
     recorded        0            .D....... recorded stream
  -rtmp_pageurl      <string>     .D....... URL of the web page in which the media was embedded. By default no value will be sent.
  -rtmp_playpath     <string>     ED....... Stream identifier to play or to publish
  -rtmp_subscribe    <string>     .D....... Name of live stream to subscribe to. Defaults to rtmp_playpath.
  -rtmp_swfhash      <binary>     .D....... SHA256 hash of the decompressed SWF file (32 bytes).
  -rtmp_swfsize      <int>        .D....... Size of the decompressed SWF file, required for SWFVerification. (from 0 to INT_MAX) (default 0)
  -rtmp_swfurl       <string>     ED....... URL of the SWF player. By default no value will be sent
  -rtmp_swfverify    <string>     .D....... URL to player swf file, compute hash/size automatically.
  -rtmp_tcurl        <string>     ED....... URL of the target stream. Defaults to proto://host[:port]/app.
  -rtmp_listen       <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -listen            <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -timeout           <int>        .D....... Maximum timeout (in seconds) to wait for incoming connections. -1 is infinite. Implies -rtmp_listen 1 (from INT_MIN to INT_MAX) (default -1)

rtmpe AVOptions:
  -rtmp_app          <string>     ED....... Name of application to connect to on the RTMP server
  -rtmp_buffer       <int>        ED....... Set buffer time in milliseconds. The default is 3000. (from 0 to INT_MAX) (default 3000)
  -rtmp_conn         <string>     ED....... Append arbitrary AMF data to the Connect message
  -rtmp_flashver     <string>     ED....... Version of the Flash plugin used to run the SWF player.
  -rtmp_flush_interval <int>        E........ Number of packets flushed in the same request (RTMPT only). (from 0 to INT_MAX) (default 10)
  -rtmp_live         <int>        .D....... Specify that the media is a live stream. (from INT_MIN to INT_MAX) (default any)
     any             -2           .D....... both
     live            -1           .D....... live stream
     recorded        0            .D....... recorded stream
  -rtmp_pageurl      <string>     .D....... URL of the web page in which the media was embedded. By default no value will be sent.
  -rtmp_playpath     <string>     ED....... Stream identifier to play or to publish
  -rtmp_subscribe    <string>     .D....... Name of live stream to subscribe to. Defaults to rtmp_playpath.
  -rtmp_swfhash      <binary>     .D....... SHA256 hash of the decompressed SWF file (32 bytes).
  -rtmp_swfsize      <int>        .D....... Size of the decompressed SWF file, required for SWFVerification. (from 0 to INT_MAX) (default 0)
  -rtmp_swfurl       <string>     ED....... URL of the SWF player. By default no value will be sent
  -rtmp_swfverify    <string>     .D....... URL to player swf file, compute hash/size automatically.
  -rtmp_tcurl        <string>     ED....... URL of the target stream. Defaults to proto://host[:port]/app.
  -rtmp_listen       <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -listen            <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -timeout           <int>        .D....... Maximum timeout (in seconds) to wait for incoming connections. -1 is infinite. Implies -rtmp_listen 1 (from INT_MIN to INT_MAX) (default -1)

rtmps AVOptions:
  -rtmp_app          <string>     ED....... Name of application to connect to on the RTMP server
  -rtmp_buffer       <int>        ED....... Set buffer time in milliseconds. The default is 3000. (from 0 to INT_MAX) (default 3000)
  -rtmp_conn         <string>     ED....... Append arbitrary AMF data to the Connect message
  -rtmp_flashver     <string>     ED....... Version of the Flash plugin used to run the SWF player.
  -rtmp_flush_interval <int>        E........ Number of packets flushed in the same request (RTMPT only). (from 0 to INT_MAX) (default 10)
  -rtmp_live         <int>        .D....... Specify that the media is a live stream. (from INT_MIN to INT_MAX) (default any)
     any             -2           .D....... both
     live            -1           .D....... live stream
     recorded        0            .D....... recorded stream
  -rtmp_pageurl      <string>     .D....... URL of the web page in which the media was embedded. By default no value will be sent.
  -rtmp_playpath     <string>     ED....... Stream identifier to play or to publish
  -rtmp_subscribe    <string>     .D....... Name of live stream to subscribe to. Defaults to rtmp_playpath.
  -rtmp_swfhash      <binary>     .D....... SHA256 hash of the decompressed SWF file (32 bytes).
  -rtmp_swfsize      <int>        .D....... Size of the decompressed SWF file, required for SWFVerification. (from 0 to INT_MAX) (default 0)
  -rtmp_swfurl       <string>     ED....... URL of the SWF player. By default no value will be sent
  -rtmp_swfverify    <string>     .D....... URL to player swf file, compute hash/size automatically.
  -rtmp_tcurl        <string>     ED....... URL of the target stream. Defaults to proto://host[:port]/app.
  -rtmp_listen       <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -listen            <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -timeout           <int>        .D....... Maximum timeout (in seconds) to wait for incoming connections. -1 is infinite. Implies -rtmp_listen 1 (from INT_MIN to INT_MAX) (default -1)

rtmpt AVOptions:
  -rtmp_app          <string>     ED....... Name of application to connect to on the RTMP server
  -rtmp_buffer       <int>        ED....... Set buffer time in milliseconds. The default is 3000. (from 0 to INT_MAX) (default 3000)
  -rtmp_conn         <string>     ED....... Append arbitrary AMF data to the Connect message
  -rtmp_flashver     <string>     ED....... Version of the Flash plugin used to run the SWF player.
  -rtmp_flush_interval <int>        E........ Number of packets flushed in the same request (RTMPT only). (from 0 to INT_MAX) (default 10)
  -rtmp_live         <int>        .D....... Specify that the media is a live stream. (from INT_MIN to INT_MAX) (default any)
     any             -2           .D....... both
     live            -1           .D....... live stream
     recorded        0            .D....... recorded stream
  -rtmp_pageurl      <string>     .D....... URL of the web page in which the media was embedded. By default no value will be sent.
  -rtmp_playpath     <string>     ED....... Stream identifier to play or to publish
  -rtmp_subscribe    <string>     .D....... Name of live stream to subscribe to. Defaults to rtmp_playpath.
  -rtmp_swfhash      <binary>     .D....... SHA256 hash of the decompressed SWF file (32 bytes).
  -rtmp_swfsize      <int>        .D....... Size of the decompressed SWF file, required for SWFVerification. (from 0 to INT_MAX) (default 0)
  -rtmp_swfurl       <string>     ED....... URL of the SWF player. By default no value will be sent
  -rtmp_swfverify    <string>     .D....... URL to player swf file, compute hash/size automatically.
  -rtmp_tcurl        <string>     ED....... URL of the target stream. Defaults to proto://host[:port]/app.
  -rtmp_listen       <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -listen            <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -timeout           <int>        .D....... Maximum timeout (in seconds) to wait for incoming connections. -1 is infinite. Implies -rtmp_listen 1 (from INT_MIN to INT_MAX) (default -1)

rtmpte AVOptions:
  -rtmp_app          <string>     ED....... Name of application to connect to on the RTMP server
  -rtmp_buffer       <int>        ED....... Set buffer time in milliseconds. The default is 3000. (from 0 to INT_MAX) (default 3000)
  -rtmp_conn         <string>     ED....... Append arbitrary AMF data to the Connect message
  -rtmp_flashver     <string>     ED....... Version of the Flash plugin used to run the SWF player.
  -rtmp_flush_interval <int>        E........ Number of packets flushed in the same request (RTMPT only). (from 0 to INT_MAX) (default 10)
  -rtmp_live         <int>        .D....... Specify that the media is a live stream. (from INT_MIN to INT_MAX) (default any)
     any             -2           .D....... both
     live            -1           .D....... live stream
     recorded        0            .D....... recorded stream
  -rtmp_pageurl      <string>     .D....... URL of the web page in which the media was embedded. By default no value will be sent.
  -rtmp_playpath     <string>     ED....... Stream identifier to play or to publish
  -rtmp_subscribe    <string>     .D....... Name of live stream to subscribe to. Defaults to rtmp_playpath.
  -rtmp_swfhash      <binary>     .D....... SHA256 hash of the decompressed SWF file (32 bytes).
  -rtmp_swfsize      <int>        .D....... Size of the decompressed SWF file, required for SWFVerification. (from 0 to INT_MAX) (default 0)
  -rtmp_swfurl       <string>     ED....... URL of the SWF player. By default no value will be sent
  -rtmp_swfverify    <string>     .D....... URL to player swf file, compute hash/size automatically.
  -rtmp_tcurl        <string>     ED....... URL of the target stream. Defaults to proto://host[:port]/app.
  -rtmp_listen       <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -listen            <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -timeout           <int>        .D....... Maximum timeout (in seconds) to wait for incoming connections. -1 is infinite. Implies -rtmp_listen 1 (from INT_MIN to INT_MAX) (default -1)

rtmpts AVOptions:
  -rtmp_app          <string>     ED....... Name of application to connect to on the RTMP server
  -rtmp_buffer       <int>        ED....... Set buffer time in milliseconds. The default is 3000. (from 0 to INT_MAX) (default 3000)
  -rtmp_conn         <string>     ED....... Append arbitrary AMF data to the Connect message
  -rtmp_flashver     <string>     ED....... Version of the Flash plugin used to run the SWF player.
  -rtmp_flush_interval <int>        E........ Number of packets flushed in the same request (RTMPT only). (from 0 to INT_MAX) (default 10)
  -rtmp_live         <int>        .D....... Specify that the media is a live stream. (from INT_MIN to INT_MAX) (default any)
     any             -2           .D....... both
     live            -1           .D....... live stream
     recorded        0            .D....... recorded stream
  -rtmp_pageurl      <string>     .D....... URL of the web page in which the media was embedded. By default no value will be sent.
  -rtmp_playpath     <string>     ED....... Stream identifier to play or to publish
  -rtmp_subscribe    <string>     .D....... Name of live stream to subscribe to. Defaults to rtmp_playpath.
  -rtmp_swfhash      <binary>     .D....... SHA256 hash of the decompressed SWF file (32 bytes).
  -rtmp_swfsize      <int>        .D....... Size of the decompressed SWF file, required for SWFVerification. (from 0 to INT_MAX) (default 0)
  -rtmp_swfurl       <string>     ED....... URL of the SWF player. By default no value will be sent
  -rtmp_swfverify    <string>     .D....... URL to player swf file, compute hash/size automatically.
  -rtmp_tcurl        <string>     ED....... URL of the target stream. Defaults to proto://host[:port]/app.
  -rtmp_listen       <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -listen            <int>        .D....... Listen for incoming rtmp connections (from INT_MIN to INT_MAX) (default 0)
  -timeout           <int>        .D....... Maximum timeout (in seconds) to wait for incoming connections. -1 is infinite. Implies -rtmp_listen 1 (from INT_MIN to INT_MAX) (default -1)

rtp AVOptions:
  -ttl               <int>        ED....... Time to live (in milliseconds, multicast only) (from -1 to INT_MAX) (default -1)
  -buffer_size       <int>        ED....... Send/Receive buffer size (in bytes) (from -1 to INT_MAX) (default -1)
  -rtcp_port         <int>        ED....... Custom rtcp port (from -1 to INT_MAX) (default -1)
  -local_rtpport     <int>        ED....... Local rtp port (from -1 to INT_MAX) (default -1)
  -local_rtcpport    <int>        ED....... Local rtcp port (from -1 to INT_MAX) (default -1)
  -connect           <boolean>    ED....... Connect socket (default false)
  -write_to_source   <boolean>    ED....... Send packets to the source address of the latest received packet (default false)
  -pkt_size          <int>        ED....... Maximum packet size (from -1 to INT_MAX) (default -1)
  -dscp              <int>        ED....... DSCP class (from -1 to INT_MAX) (default -1)
  -sources           <string>     ED....... Source list
  -block             <string>     ED....... Block list
  -fec               <string>     E........ FEC

srtp AVOptions:
  -srtp_out_suite    <string>     E........
  -srtp_out_params   <string>     E........
  -srtp_in_suite     <string>     .D.......
  -srtp_in_params    <string>     .D.......

subfile AVOptions:
  -start             <int64>      .D....... start offset (from 0 to I64_MAX) (default 0)
  -end               <int64>      .D....... end offset (from 0 to I64_MAX) (default 0)

tee AVOptions:

tcp AVOptions:
  -listen            <int>        ED....... Listen for incoming connections (from 0 to 2) (default 0)
  -timeout           <int>        ED....... set timeout (in microseconds) of socket I/O operations (from -1 to INT_MAX) (default -1)
  -listen_timeout    <int>        ED....... Connection awaiting timeout (in milliseconds) (from -1 to INT_MAX) (default -1)
  -send_buffer_size  <int>        ED....... Socket send buffer size (in bytes) (from -1 to INT_MAX) (default -1)
  -recv_buffer_size  <int>        ED....... Socket receive buffer size (in bytes) (from -1 to INT_MAX) (default -1)
  -tcp_nodelay       <boolean>    ED....... Use TCP_NODELAY to disable nagle's algorithm (default false)

tls AVOptions:
  -ca_file           <string>     ED....... Certificate Authority database file
  -cafile            <string>     ED....... Certificate Authority database file
  -tls_verify        <int>        ED....... Verify the peer certificate (from 0 to 1) (default 0)
  -cert_file         <string>     ED....... Certificate file
  -key_file          <string>     ED....... Private key file
  -listen            <int>        ED....... Listen for incoming connections (from 0 to 1) (default 0)
  -verifyhost        <string>     ED....... Verify against a specific hostname

udp AVOptions:
  -buffer_size       <int>        ED....... System data size (in bytes) (from -1 to INT_MAX) (default -1)
  -bitrate           <int64>      E........ Bits to send per second (from 0 to I64_MAX) (default 0)
  -burst_bits        <int64>      E........ Max length of bursts in bits (when using bitrate) (from 0 to I64_MAX) (default 0)
  -localport         <int>        ED....... Local port (from -1 to INT_MAX) (default -1)
  -local_port        <int>        ED....... Local port (from -1 to INT_MAX) (default -1)
  -localaddr         <string>     ED....... Local address
  -udplite_coverage  <int>        ED....... choose UDPLite head size which should be validated by checksum (from 0 to INT_MAX) (default 0)
  -pkt_size          <int>        ED....... Maximum UDP packet size (from -1 to INT_MAX) (default 1472)
  -reuse             <boolean>    ED....... explicitly allow reusing UDP sockets (default auto)
  -reuse_socket      <boolean>    ED....... explicitly allow reusing UDP sockets (default auto)
  -broadcast         <boolean>    E........ explicitly allow or disallow broadcast destination (default false)
  -ttl               <int>        E........ Time to live (multicast only) (from 0 to INT_MAX) (default 16)
  -connect           <boolean>    ED....... set if connect() should be called on socket (default false)
  -fifo_size         <int>        .D....... set the UDP receiving circular buffer size, expressed as a number of packets with size of 188 bytes (from 0 to INT_MAX) (default 28672)
  -overrun_nonfatal  <boolean>    .D....... survive in case of UDP receiving circular buffer overrun (default false)
  -timeout           <int>        .D....... set raise error timeout (only in read mode) (from 0 to INT_MAX) (default 0)
  -sources           <string>     ED....... Source list
  -block             <string>     ED....... Block list

udplite AVOptions:
  -buffer_size       <int>        ED....... System data size (in bytes) (from -1 to INT_MAX) (default -1)
  -bitrate           <int64>      E........ Bits to send per second (from 0 to I64_MAX) (default 0)
  -burst_bits        <int64>      E........ Max length of bursts in bits (when using bitrate) (from 0 to I64_MAX) (default 0)
  -localport         <int>        ED....... Local port (from -1 to INT_MAX) (default -1)
  -local_port        <int>        ED....... Local port (from -1 to INT_MAX) (default -1)
  -localaddr         <string>     ED....... Local address
  -udplite_coverage  <int>        ED....... choose UDPLite head size which should be validated by checksum (from 0 to INT_MAX) (default 0)
  -pkt_size          <int>        ED....... Maximum UDP packet size (from -1 to INT_MAX) (default 1472)
  -reuse             <boolean>    ED....... explicitly allow reusing UDP sockets (default auto)
  -reuse_socket      <boolean>    ED....... explicitly allow reusing UDP sockets (default auto)
  -broadcast         <boolean>    E........ explicitly allow or disallow broadcast destination (default false)
  -ttl               <int>        E........ Time to live (multicast only) (from 0 to INT_MAX) (default 16)
  -connect           <boolean>    ED....... set if connect() should be called on socket (default false)
  -fifo_size         <int>        .D....... set the UDP receiving circular buffer size, expressed as a number of packets with size of 188 bytes (from 0 to INT_MAX) (default 28672)
  -overrun_nonfatal  <boolean>    .D....... survive in case of UDP receiving circular buffer overrun (default false)
  -timeout           <int>        .D....... set raise error timeout (only in read mode) (from 0 to INT_MAX) (default 0)
  -sources           <string>     ED....... Source list
  -block             <string>     ED....... Block list

aa AVOptions:
  -aa_fixed_key      <binary>     .D....... Fixed key used for handling Audible AA files

ac3 demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

acm demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

Artworx Data Format demuxer AVOptions:
  -linespeed         <int>        .D....... set simulated line speed (bytes per second) (from 1 to INT_MAX) (default 6000)
  -video_size        <image_size> .D....... set video size, such as 640x480 or hd720.
  -framerate         <video_rate> .D....... set framerate (frames per second) (default "25")

APNG demuxer AVOptions:
  -ignore_loop       <boolean>    .D....... ignore loop setting (default true)
  -max_fps           <int>        .D....... maximum framerate (0 is no limit) (from 0 to INT_MAX) (default 0)
  -default_fps       <int>        .D....... default framerate (0 is as fast as possible) (from 0 to INT_MAX) (default 15)

aptx demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 48000)

aptx hd demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 48000)

aqtdec AVOptions:
  -subfps            <rational>   .D...S... set the movie frame rate (from 0 to INT_MAX) (default 25/1)

asf demuxer AVOptions:
  -no_resync_search  <boolean>    .D....... Don't try to resynchronize by looking for a certain optional start code (default false)
  -export_xmp        <boolean>    .D....... Export full XMP metadata (default false)

avi AVOptions:
  -use_odml          <boolean>    .D....... use odml index (default true)

avs2 demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

Binary text demuxer AVOptions:
  -linespeed         <int>        .D....... set simulated line speed (bytes per second) (from 1 to INT_MAX) (default 6000)
  -video_size        <image_size> .D....... set video size, such as 640x480 or hd720.
  -framerate         <video_rate> .D....... set framerate (frames per second) (default "25")

cavsvideo demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

CDXL demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 1 to INT_MAX) (default 11025)
  -framerate         <string>     .D.......

codec2 demuxer AVOptions:
  -frames_per_packet <int>        .D....... Number of frames to read at a time. Higher = faster decoding, lower granularity (from 1 to INT_MAX) (default 1)

codec2raw demuxer AVOptions:
  -mode              <int>        .D....... codec2 mode [mandatory] (from -1 to 8) (default -1)
     3200            0            .D....... 3200
     2400            1            .D....... 2400
     1600            2            .D....... 1600
     1400            3            .D....... 1400
     1300            4            .D....... 1300
     1200            5            .D....... 1200
     700             6            .D....... 700
     700B            7            .D....... 700B
     700C            8            .D....... 700C
  -frames_per_packet <int>        .D....... Number of frames to read at a time. Higher = faster decoding, lower granularity (from 1 to INT_MAX) (default 1)

concat demuxer AVOptions:
  -safe              <boolean>    .D....... enable safe mode (default true)
  -auto_convert      <boolean>    .D....... automatically convert bitstream format (default true)
  -segment_time_metadata <boolean>    .D....... output file segment start time and duration as packet metadata (default false)

dash AVOptions:
  -allowed_extensions <string>     .D....... List of file extensions that dash is allowed to access (default "aac,m4a,m4s,m4v,mov,mp4,webm")

raw_data demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

dirac demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

dnxhd demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

dts demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

dvbsub demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

dvbtxt demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

eac3 demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

FITS demuxer AVOptions:
  -framerate         <video_rate> .D....... set the framerate (default "1")

flac demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

flvdec AVOptions:
  -flv_metadata      <boolean>    .D.V..... Allocate streams according to the onMetaData array (default false)
  -flv_full_metadata <boolean>    .D.V..... Dump full metadata of the onMetadata (default false)
  -flv_ignore_prevtag <boolean>    .D.V..... Ignore the Size of previous tag (default false)
  -missing_streams   <int>        .D.V..XR.  (from 0 to 255) (default 0)

live_flvdec AVOptions:
  -flv_metadata      <boolean>    .D.V..... Allocate streams according to the onMetaData array (default false)
  -flv_full_metadata <boolean>    .D.V..... Dump full metadata of the onMetadata (default false)
  -flv_ignore_prevtag <boolean>    .D.V..... Ignore the Size of previous tag (default false)
  -missing_streams   <int>        .D.V..XR.  (from 0 to 255) (default 0)

g722 demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

G.726 big-endian demuxer AVOptions:
  -code_size         <int>        .D....... Bits per G.726 code (from 2 to 5) (default 4)
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 8000)

G.726 little-endian demuxer AVOptions:
  -code_size         <int>        .D....... Bits per G.726 code (from 2 to 5) (default 4)
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 8000)

g729 demuxer AVOptions:
  -bit_rate          <int>        .D.......  (from 0 to INT_MAX) (default 8000)

GIF demuxer AVOptions:
  -min_delay         <int>        .D....... minimum valid delay between frames (in hundredths of second) (from 0 to 6000) (default 2)
  -max_gif_delay     <int>        .D....... maximum valid delay between frames (in hundredths of seconds) (from 0 to 65535) (default 65535)
  -default_delay     <int>        .D....... default delay between frames (in hundredths of second) (from 0 to 6000) (default 10)
  -ignore_loop       <boolean>    .D....... ignore loop setting (netscape extension) (default true)

gsm demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 1 to 6.50753e+07) (default 8000)

h261 demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

h263 demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

h264 demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

hevc demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

hls demuxer AVOptions:
  -live_start_index  <int>        .D....... segment index to start live streams at (negative values are from the end) (from INT_MIN to INT_MAX) (default -3)
  -allowed_extensions <string>     .D....... List of file extensions that hls is allowed to access (default "3gp,aac,avi,flac,mkv,m3u8,m4a,m4s,m4v,mpg,mov,mp2,mp3,mp4,mpeg,mpegts,ogg,ogv,oga,ts,vob,wav")
  -max_reload        <int>        .D....... Maximum number of times a insufficient list is attempted to be reloaded (from 0 to INT_MAX) (default 1000)
  -http_persistent   <boolean>    .D....... Use persistent HTTP connections (default true)
  -http_multiple     <boolean>    .D....... Use multiple HTTP connections for fetching segments (default auto)
  -http_seekable     <boolean>    .D....... Use HTTP partial requests, 0 = disable, 1 = enable, -1 = auto (default auto)

iCE Draw File demuxer AVOptions:
  -linespeed         <int>        .D....... set simulated line speed (bytes per second) (from 1 to INT_MAX) (default 6000)
  -video_size        <image_size> .D....... set video size, such as 640x480 or hd720.
  -framerate         <video_rate> .D....... set framerate (frames per second) (default "25")

image2 demuxer AVOptions:
  -pattern_type      <int>        .D....... set pattern type (from 0 to INT_MAX) (default 4)
     glob_sequence   0            .D....... select glob/sequence pattern type
     glob            1            .D....... select glob pattern type
     sequence        2            .D....... select sequence pattern type
     none            3            .D....... disable pattern matching
  -start_number      <int>        .D....... set first number in the sequence (from INT_MIN to INT_MAX) (default 0)
  -start_number_range <int>        .D....... set range for looking at the first sequence number (from 1 to INT_MAX) (default 5)
  -ts_from_file      <int>        .D....... set frame timestamp from file's one (from 0 to 2) (default none)
     none            0            .D....... none
     sec             1            .D....... second precision
     ns              2            .D....... nano second precision
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

image2pipe demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

alias_pix demuxer AVOptions:
  -pattern_type      <int>        .D....... set pattern type (from 0 to INT_MAX) (default 4)
     glob_sequence   0            .D....... select glob/sequence pattern type
     glob            1            .D....... select glob pattern type
     sequence        2            .D....... select sequence pattern type
     none            3            .D....... disable pattern matching
  -start_number      <int>        .D....... set first number in the sequence (from INT_MIN to INT_MAX) (default 0)
  -start_number_range <int>        .D....... set range for looking at the first sequence number (from 1 to INT_MAX) (default 5)
  -ts_from_file      <int>        .D....... set frame timestamp from file's one (from 0 to 2) (default none)
     none            0            .D....... none
     sec             1            .D....... second precision
     ns              2            .D....... nano second precision
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

brender_pix demuxer AVOptions:
  -pattern_type      <int>        .D....... set pattern type (from 0 to INT_MAX) (default 4)
     glob_sequence   0            .D....... select glob/sequence pattern type
     glob            1            .D....... select glob pattern type
     sequence        2            .D....... select sequence pattern type
     none            3            .D....... disable pattern matching
  -start_number      <int>        .D....... set first number in the sequence (from INT_MIN to INT_MAX) (default 0)
  -start_number_range <int>        .D....... set range for looking at the first sequence number (from 1 to INT_MAX) (default 5)
  -ts_from_file      <int>        .D....... set frame timestamp from file's one (from 0 to 2) (default none)
     none            0            .D....... none
     sec             1            .D....... second precision
     ns              2            .D....... nano second precision
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

ingenient demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

kuxdec AVOptions:
  -flv_metadata      <boolean>    .D.V..... Allocate streams according to the onMetaData array (default false)
  -flv_full_metadata <boolean>    .D.V..... Dump full metadata of the onMetadata (default false)
  -flv_ignore_prevtag <boolean>    .D.V..... Ignore the Size of previous tag (default false)
  -missing_streams   <int>        .D.V..XR.  (from 0 to 255) (default 0)

loas demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

m4v demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

microdvddec AVOptions:
  -subfps            <rational>   .D...S... set the movie frame rate fallback (from 0 to INT_MAX) (default 0/1)

mjpeg demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

mjpeg_2000 demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

mlp demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

mov,mp4,m4a,3gp,3g2,mj2 AVOptions:
  -use_absolute_path <boolean>    .D.V..... allow using absolute path when opening alias, this is a possible security issue (default false)
  -seek_streams_individually <boolean>    .D.V..... Seek each stream individually to the to the closest point (default true)
  -ignore_editlist   <boolean>    .D.V..... Ignore the edit list atom. (default false)
  -advanced_editlist <boolean>    .D.V..... Modify the AVIndex according to the editlists. Use this option to decode in the order specified by the edits. (default true)
  -ignore_chapters   <boolean>    .D.V.....  (default false)
  -use_mfra_for      <int>        .D.V..... use mfra for fragment timestamps (from -1 to 2) (default auto)
     auto            -1           .D.V..... auto
     dts             1            .D.V..... dts
     pts             2            .D.V..... pts
  -export_all        <boolean>    .D.V..... Export unrecognized metadata entries (default false)
  -export_xmp        <boolean>    .D.V..... Export full XMP metadata (default false)
  -activation_bytes  <binary>     .D....... Secret bytes for Audible AAX files
  -audible_fixed_key <binary>     .D....... Fixed key used for handling Audible AAX files
  -decryption_key    <binary>     .D....... The media decryption key (hex)
  -enable_drefs      <boolean>    .D.V..... Enable external track support. (default false)

mp3 AVOptions:
  -usetoc            <boolean>    .D....... use table of contents (default false)

mpegts demuxer AVOptions:
  -resync_size       <int>        .D....... set size limit for looking up a new synchronization (from 0 to INT_MAX) (default 65536)
  -fix_teletext_pts  <boolean>    .D....... try to fix pts values of dvb teletext streams (default true)
  -ts_packetsize     <int>        .D....XR. output option carrying the raw packet size (from 0 to 0) (default 0)
  -scan_all_pmts     <boolean>    .D....... scan and combine all PMTs (default auto)
  -skip_unknown_pmt  <boolean>    .D....... skip PMTs for programs not advertised in the PAT (default false)
  -merge_pmt_versions <boolean>    .D....... re-use streams when PMT's version/pids change (default false)

mpegtsraw demuxer AVOptions:
  -resync_size       <int>        .D....... set size limit for looking up a new synchronization (from 0 to INT_MAX) (default 65536)
  -compute_pcr       <boolean>    .D....... compute exact PCR for each transport stream packet (default false)
  -ts_packetsize     <int>        .D....XR. output option carrying the raw packet size (from 0 to 0) (default 0)

mpegvideo demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

MPJPEG demuxer AVOptions:
  -strict_mime_boundary <boolean>    .D....... require MIME boundaries match (default false)

mxf AVOptions:
  -eia608_extract    <boolean>    .D....... extract eia 608 captions from s436m track (default false)

alaw demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

mulaw demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

vidc demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

f64be demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

f64le demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

f32be demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

f32le demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

s32be demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

s32le demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

s24be demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

s24le demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

s16be demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

s16le demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

s8 demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

u32be demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

u32le demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

u24be demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

u24le demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

u16be demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

u16le demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

u8 demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 44100)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

rawvideo demuxer AVOptions:
  -video_size        <image_size> .D....... set frame size
  -pixel_format      <string>     .D....... set pixel format (default "yuv420p")
  -framerate         <video_rate> .D....... set frame rate (default "25")

RTP demuxer AVOptions:
  -rtp_flags         <flags>      .D....... set RTP flags (default 0)
     filter_src                   .D....... only receive packets from the negotiated peer IP
  -reorder_queue_size <int>        .D....... set number of packets to buffer for handling of reordered packets (from -1 to INT_MAX) (default -1)
  -buffer_size       <int>        ED....... Underlying protocol send/receive buffer size (from -1 to INT_MAX) (default -1)
  -pkt_size          <int>        E........ Underlying protocol send packet size (from -1 to INT_MAX) (default -1)

RTSP demuxer AVOptions:
  -initial_pause     <boolean>    .D....... do not start playing the stream immediately (default false)
  -rtpflags          <flags>      E........ RTP muxer flags (default 0)
     latm                         E........ Use MP4A-LATM packetization instead of MPEG4-GENERIC for AAC
     rfc2190                      E........ Use RFC 2190 packetization instead of RFC 4629 for H.263
     skip_rtcp                    E........ Don't send RTCP sender reports
     h264_mode0                   E........ Use mode 0 for H.264 in RTP
     send_bye                     E........ Send RTCP BYE packets when finishing
  -rtsp_transport    <flags>      ED....... set RTSP transport protocols (default 0)
     udp                          ED....... UDP
     tcp                          ED....... TCP
     udp_multicast                .D....... UDP multicast
     http                         .D....... HTTP tunneling
     https                        .D....... HTTPS tunneling
  -rtsp_flags        <flags>      .D....... set RTSP flags (default 0)
     filter_src                   .D....... only receive packets from the negotiated peer IP
     listen                       .D....... wait for incoming connections
     prefer_tcp                   ED....... try RTP via TCP first, if available
  -allowed_media_types <flags>      .D....... set media types to accept from the server (default video+audio+data+subtitle)
     video                        .D....... Video
     audio                        .D....... Audio
     data                         .D....... Data
     subtitle                     .D....... Subtitle
  -min_port          <int>        ED....... set minimum local UDP port (from 0 to 65535) (default 5000)
  -max_port          <int>        ED....... set maximum local UDP port (from 0 to 65535) (default 65000)
  -listen_timeout    <int>        .D....... set maximum timeout (in seconds) to wait for incoming connections (-1 is infinite, imply flag listen) (from INT_MIN to INT_MAX) (default -1)
  -timeout           <int>        .D....... set maximum timeout (in seconds) to wait for incoming connections (-1 is infinite, imply flag listen) (deprecated, use listen_timeout) (from INT_MIN to INT_MAX) (default -1)
  -stimeout          <int>        .D....... set timeout (in microseconds) of socket TCP I/O operations (from INT_MIN to INT_MAX) (default 0)
  -reorder_queue_size <int>        .D....... set number of packets to buffer for handling of reordered packets (from -1 to INT_MAX) (default -1)
  -buffer_size       <int>        ED....... Underlying protocol send/receive buffer size (from -1 to INT_MAX) (default -1)
  -pkt_size          <int>        E........ Underlying protocol send packet size (from -1 to INT_MAX) (default -1)
  -user_agent        <string>     .D....... override User-Agent header (default "Lavf58.33.100")
  -user-agent        <string>     .D....... override User-Agent header (deprecated, use user_agent) (default "Lavf58.33.100")

sbc demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

sbg_demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 0)
  -frame_size        <int>        .D.......  (from 0 to INT_MAX) (default 0)
  -max_file_size     <int>        .D.......  (from 0 to INT_MAX) (default 5000000)

SDP demuxer AVOptions:
  -sdp_flags         <flags>      .D....... SDP flags (default 0)
     filter_src                   .D....... only receive packets from the negotiated peer IP
     custom_io                    .D....... use custom I/O
     rtcp_to_source               .D....... send RTCP packets to the source address of received packets
  -allowed_media_types <flags>      .D....... set media types to accept from the server (default video+audio+data+subtitle)
     video                        .D....... Video
     audio                        .D....... Audio
     data                         .D....... Data
     subtitle                     .D....... Subtitle
  -reorder_queue_size <int>        .D....... set number of packets to buffer for handling of reordered packets (from -1 to INT_MAX) (default -1)
  -buffer_size       <int>        ED....... Underlying protocol send/receive buffer size (from -1 to INT_MAX) (default -1)
  -pkt_size          <int>        E........ Underlying protocol send packet size (from -1 to INT_MAX) (default -1)

ser demuxer AVOptions:
  -framerate         <video_rate> .D....... set frame rate (default "25")

shorten demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

sln demuxer AVOptions:
  -sample_rate       <int>        .D.......  (from 0 to INT_MAX) (default 8000)
  -channels          <int>        .D.......  (from 0 to INT_MAX) (default 1)

tak demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

tedcaptions_demuxer AVOptions:
  -start_time        <int64>      .D...S... set the start time (offset) of the subtitles, in ms (from I64_MIN to I64_MAX) (default 15000)

truehd demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

TTY demuxer AVOptions:
  -chars_per_frame   <int>        .D.......  (from 1 to INT_MAX) (default 6000)
  -video_size        <image_size> .D....... A string describing frame size, such as 640x480 or hd720.
  -framerate         <video_rate> .D.......  (default "25")

v210 demuxer AVOptions:
  -video_size        <image_size> .D....... set frame size
  -framerate         <video_rate> .D....... set frame rate (default "25")

v210x demuxer AVOptions:
  -video_size        <image_size> .D....... set frame size
  -framerate         <video_rate> .D....... set frame rate (default "25")

vc1 demuxer AVOptions:
  -framerate         <video_rate> .D.......  (default "25")
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

vobsub AVOptions:
  -sub_name          <string>     .D....... URI for .sub file

WAV demuxer AVOptions:
  -ignore_length     <boolean>    .D....... Ignore length (default false)

WebM DASH Manifest demuxer AVOptions:
  -live              <boolean>    .D....... flag indicating that the input is a live file that only has the headers. (default false)
  -bandwidth         <int>        .D....... bandwidth of this stream to be specified in the DASH manifest. (from 0 to INT_MAX) (default 0)

WebVTT demuxer AVOptions:
  -kind              <int>        .D...S... Set kind of WebVTT track (from 0 to INT_MAX) (default subtitles)
     subtitles       0            .D...S... WebVTT subtitles kind
     captions        65536        .D...S... WebVTT captions kind
     descriptions    131072       .D...S... WebVTT descriptions kind
     metadata        262144       .D...S... WebVTT metadata kind

wsd demuxer AVOptions:
  -raw_packet_size   <int>        .D.......  (from 1 to INT_MAX) (default 1024)

eXtended BINary text (XBIN) demuxer AVOptions:
  -linespeed         <int>        .D....... set simulated line speed (bytes per second) (from 1 to INT_MAX) (default 6000)
  -video_size        <image_size> .D....... set video size, such as 640x480 or hd720.
  -framerate         <video_rate> .D....... set framerate (frames per second) (default "25")

bmp demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

dds demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

dpx demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

exr demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

gif demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

j2k demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

jpeg demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

jpegls demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

pam demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

pbm demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

pcx demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

pgmyuv demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

pgm demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

pictor demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

png demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

ppm demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

psd demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

qdraw demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

sgi demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

svg demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

sunrast demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

tiff demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

webp demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

xpm demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

xwd demuxer AVOptions:
  -frame_size        <int>        .D....... force frame size in bytes (from 0 to INT_MAX) (default 0)
  -framerate         <video_rate> .D....... set the video framerate (default "25")
  -pixel_format      <string>     .D....... set video pixel format
  -video_size        <image_size> .D....... set video size
  -loop              <boolean>    .D....... force loop over input file sequence (default false)

libopenmpt AVOptions:
  -sample_rate       <int>        .D..A.... set sample rate (from 1000 to INT_MAX) (default 48000)
  -layout            <channel_layout> .D..A.... set channel layout (default 0x3)
  -subsong           <int>        .D..A.... set subsong (from -2 to INT_MAX) (default auto)
     all             -1           .D..A.... all
     auto            -2           .D..A.... auto

dshow indev AVOptions:
  -video_size        <image_size> .D....... set video size given a string such as 640x480 or hd720.
  -pixel_format      <pix_fmt>    .D....... set video pixel format (default none)
  -framerate         <string>     .D....... set video frame rate
  -sample_rate       <int>        .D....... set audio sample rate (from 0 to INT_MAX) (default 0)
  -sample_size       <int>        .D....... set audio sample size (from 0 to 16) (default 0)
  -channels          <int>        .D....... set number of audio channels, such as 1 or 2 (from 0 to INT_MAX) (default 0)
  -audio_buffer_size <int>        .D....... set audio device buffer latency size in milliseconds (default is the device's default) (from 0 to INT_MAX) (default 0)
  -list_devices      <boolean>    .D....... list available devices (default false)
  -list_options      <boolean>    .D....... list available options for specified device (default false)
  -video_device_number <int>        .D....... set video device number for devices with same name (starts at 0) (from 0 to INT_MAX) (default 0)
  -audio_device_number <int>        .D....... set audio device number for devices with same name (starts at 0) (from 0 to INT_MAX) (default 0)
  -video_pin_name    <string>     E........ select video capture pin by name
  -audio_pin_name    <string>     E........ select audio capture pin by name
  -crossbar_video_input_pin_number <int>        .D....... set video input pin number for crossbar device (from -1 to INT_MAX) (default -1)
  -crossbar_audio_input_pin_number <int>        .D....... set audio input pin number for crossbar device (from -1 to INT_MAX) (default -1)
  -show_video_device_dialog <boolean>    .D....... display property dialog for video capture device (default false)
  -show_audio_device_dialog <boolean>    .D....... display property dialog for audio capture device (default false)
  -show_video_crossbar_connection_dialog <boolean>    .D....... display property dialog for crossbar connecting pins filter on video device (default false)
  -show_audio_crossbar_connection_dialog <boolean>    .D....... display property dialog for crossbar connecting pins filter on audio device (default false)
  -show_analog_tv_tuner_dialog <boolean>    .D....... display property dialog for analog tuner filter (default false)
  -show_analog_tv_tuner_audio_dialog <boolean>    .D....... display property dialog for analog tuner audio filter (default false)
  -audio_device_load <string>     .D....... load audio capture filter device (and properties) from file
  -audio_device_save <string>     .D....... save audio capture filter device (and properties) to file
  -video_device_load <string>     .D....... load video capture filter device (and properties) from file
  -video_device_save <string>     .D....... save video capture filter device (and properties) to file

GDIgrab indev AVOptions:
  -draw_mouse        <int>        .D....... draw the mouse pointer (from 0 to 1) (default 1)
  -show_region       <int>        .D....... draw border around capture area (from 0 to 1) (default 0)
  -framerate         <video_rate> .D....... set video frame rate (default "ntsc")
  -video_size        <image_size> .D....... set video frame size
  -offset_x          <int>        .D....... capture area x offset (from INT_MIN to INT_MAX) (default 0)
  -offset_y          <int>        .D....... capture area y offset (from INT_MIN to INT_MAX) (default 0)

lavfi indev AVOptions:
  -graph             <string>     .D....... set libavfilter graph
  -graph_file        <string>     .D....... set libavfilter graph filename
  -dumpgraph         <string>     .D....... dump graph to stderr

VFW indev AVOptions:
  -video_size        <string>     .D....... A string describing frame size, such as 640x480 or hd720.
  -framerate         <string>     .D.......  (default "ntsc")

ADTS muxer AVOptions:
  -write_id3v2       <boolean>    E........ Enable ID3v2 tag writing (default false)
  -write_apetag      <boolean>    E........ Enable APE tag writing (default false)

AIFF muxer AVOptions:
  -write_id3v2       <boolean>    E........ Enable ID3 tags writing. (default false)
  -id3v2_version     <int>        E........ Select ID3v2 version to write. Currently 3 and 4 are supported. (from 3 to 4) (default 4)

APNG muxer AVOptions:
  -plays             <int>        E........ Number of times to play the output: 0 - infinite loop, 1 - no loop (from 0 to UINT32_MAX) (default 1)
  -final_delay       <rational>   E........ Force delay after the last frame (from 0 to 65535) (default 0/1)

ASF muxer AVOptions:
  -packet_size       <int>        E........ Packet size (from 100 to 65536) (default 3200)

ass muxer AVOptions:
  -ignore_readorder  <boolean>    E........ write events immediately, even if they're out-of-order (default false)

AST muxer AVOptions:
  -loopstart         <int64>      E........ Loopstart position in milliseconds. (from -1 to INT_MAX) (default -1)
  -loopend           <int64>      E........ Loopend position in milliseconds. (from 0 to INT_MAX) (default 0)

ASF stream muxer AVOptions:
  -packet_size       <int>        E........ Packet size (from 100 to 65536) (default 3200)

AVI muxer AVOptions:
  -reserve_index_space <int>        E........ reserve space (in bytes) at the beginning of the file for each stream index (from 0 to INT_MAX) (default 0)
  -write_channel_mask <boolean>    E........ write channel mask into wave format header (default true)

dash muxer AVOptions:
  -adaptation_sets   <string>     E........ Adaptation sets. Syntax: id=0,streams=0,1,2 id=1,streams=3,4 and so on
  -window_size       <int>        E........ number of segments kept in the manifest (from 0 to INT_MAX) (default 0)
  -extra_window_size <int>        E........ number of segments kept outside of the manifest before removing from disk (from 0 to INT_MAX) (default 5)
  -min_seg_duration  <int>        E........ minimum segment duration (in microseconds) (will be deprecated) (from 0 to INT_MAX) (default 5000000)
  -seg_duration      <duration>   E........ segment duration (in seconds, fractional value can be set) (default 5)
  -remove_at_exit    <boolean>    E........ remove all segments when finished (default false)
  -use_template      <boolean>    E........ Use SegmentTemplate instead of SegmentList (default true)
  -use_timeline      <boolean>    E........ Use SegmentTimeline in SegmentTemplate (default true)
  -single_file       <boolean>    E........ Store all segments in one file, accessed using byte ranges (default false)
  -single_file_name  <string>     E........ DASH-templated name to be used for baseURL. Implies storing all segments in one file, accessed using byte ranges
  -init_seg_name     <string>     E........ DASH-templated name to used for the initialization segment (default "init-stream$RepresentationID$.$ext$")
  -media_seg_name    <string>     E........ DASH-templated name to used for the media segments (default "chunk-stream$RepresentationID$-$Number%05d$.$ext$")
  -utc_timing_url    <string>     E........ URL of the page that will return the UTC timestamp in ISO format
  -method            <string>     E........ set the HTTP method
  -http_user_agent   <string>     E........ override User-Agent field in HTTP header
  -http_persistent   <boolean>    E........ Use persistent HTTP connections (default false)
  -hls_playlist      <boolean>    E........ Generate HLS playlist files(master.m3u8, media_%d.m3u8) (default false)
  -streaming         <boolean>    E........ Enable/Disable streaming mode of output. Each frame will be moof fragment (default false)
  -ti^C
G:\IT\ffmpeg\ffmpeg-20190926-87ddf9f-win64-shared\bin>