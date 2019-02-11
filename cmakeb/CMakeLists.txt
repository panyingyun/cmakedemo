cmake_minimum_required(VERSION 2.8)
 
PROJECT(cmakeb)

option(USE_SQRT  "Set to switch to build use USE_SQRT"  ON)
if(USE_SQRT)
	add_definitions(-DUSE_SQRT)
	message(STATUS "APP OPEN MACROS USE_SQRT")
endif()


#add all source current dir
aux_source_directory(. DIR_SRCS)

add_subdirectory(msqrt)
add_subdirectory(msquare)
  
add_executable(cmakeb MACOSX_BUNDLE ${DIR_SRCS})

target_link_libraries(cmakeb msqrt msquare)

 