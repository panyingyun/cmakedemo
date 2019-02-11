cmake_minimum_required(VERSION 2.8)
 
PROJECT(cmakeb)

option(USE_SQRT  "Set to switch to build use USE_SQRT"  ON)
if(USE_SQRT)
	add_definitions(-DUSE_SQRT)
	message(STATUS "APP OPEN MACROS USE_SQRT")
endif()

include_directories(${CMAKE_CURRENT_LIST_DIR}/msqrt ${CMAKE_CURRENT_LIST_DIR}/msquare)
link_directories(${CMAKE_CURRENT_LIST_DIR}/msqrt ${CMAKE_CURRENT_LIST_DIR}/msquare)

#add all source current dir
aux_source_directory(. DIR_SRCS)

add_subdirectory(msqrt)
add_subdirectory(msquare)
  
add_executable(${PROJECT_NAME} MACOSX_BUNDLE ${DIR_SRCS})

target_link_libraries(${PROJECT_NAME} msqrt msquare)

set(CMAKE_CXX_COMPILER      "clang++" )         # 显示指定使用的C++编译器

set(CMAKE_CXX_FLAGS   "-std=c++11")             # c++11
set(CMAKE_CXX_FLAGS   "-g")                     # 调试信息
set(CMAKE_CXX_FLAGS   "-Wall")                  # 开启所有警告

set(CMAKE_CXX_FLAGS_DEBUG   "-O0" )             # 调试包不优化
set(CMAKE_CXX_FLAGS_RELEASE "-O2 -DNDEBUG " )   # release包优化
set(CMAKE_VERBOSE_MAKEFILE on)
 