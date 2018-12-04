cmake_minimum_required(VERSION 2.8)
 
PROJECT(cmake3)

message(${CMAKE_SOURCE_DIR})
message(${PROJECT_SOURCE_DIR})


#add all source current dir
aux_source_directory(. DIR_SRCS)

include_directories(${CMAKE_SOURCE_DIR}/SDL2-2.0.9/include)

link_directories(${CMAKE_SOURCE_DIR}/SDL2-2.0.9/lib/x64)
  
add_executable(cmake3 MACOSX_BUNDLE ${DIR_SRCS})

target_link_libraries(cmake3 SDL2 SDL2main)

 