cmake_minimum_required(VERSION 2.8)
 
PROJECT(cmake2)

#add all source current dir
aux_source_directory(. DIR_SRCS)

add_subdirectory(msqrt)
add_subdirectory(msquare)
  
add_executable(cmake2 MACOSX_BUNDLE cmake2.cpp)

target_link_libraries(cmake2 msqrt msquare)

 