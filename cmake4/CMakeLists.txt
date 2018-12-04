cmake_minimum_required(VERSION 2.8)
 
PROJECT(cmake4)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules/ ${CMAKE_MODULE_PATH})

message(${CMAKE_MODULE_PATH})
message(${CMAKE_SOURCE_DIR})
message(${PROJECT_SOURCE_DIR})

find_package (SDL2 REQUIRED)

#add all source current dir
aux_source_directory(. DIR_SRCS)

include_directories(${SDL2_INCLUDE_DIR})
  
add_executable(cmake4 MACOSX_BUNDLE ${DIR_SRCS})

target_link_libraries(cmake4 ${SDL2_LIBRARY})

 