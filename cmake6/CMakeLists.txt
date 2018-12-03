cmake_minimum_required(VERSION 2.8)
 
PROJECT(cmake6)

#add all source current dir
aux_source_directory(. DIR_SRCS)

include_directories(${CMAKE_SOURCE_DIR}/SDL2-2.0.9/include  ${CMAKE_SOURCE_DIR}/SDL2_ttf-2.0.14/include ${CMAKE_SOURCE_DIR}/openvr-1.1.3b/headers)
link_directories(${CMAKE_SOURCE_DIR}/SDL2-2.0.9/lib/x64  ${CMAKE_SOURCE_DIR}/SDL2_ttf-2.0.14/lib/x64 ${CMAKE_SOURCE_DIR}/openvr-1.1.3b/lib/win64)
  
add_executable(cmake6 MACOSX_BUNDLE main.cpp utils.cpp utils.h)

target_link_libraries(cmake6 SDL2 SDL2main openvr_api SDL2_ttf)


 