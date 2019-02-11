#add all source current dir
aux_source_directory(. DIR_MSQRT_SRCS)
add_library(msqrt ${DIR_MSQRT_SRCS})

set(CMAKE_CXX_FLAGS   " -std=c++11 -Wall")

set(CMAKE_CXX_FLAGS_DEBUG   "-O0 -g" )             # 调试包不优化
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG " )   # release包优化
set(CMAKE_VERBOSE_MAKEFILE on)