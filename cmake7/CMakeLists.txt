cmake_minimum_required(VERSION 2.8)
 
PROJECT(cmake7)

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules/ ${CMAKE_MODULE_PATH})

set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.11.1\\5.11.1\\msvc2017_64\\")
set(SDL2DIR "D:\\vtklib\\SDL2-2.0.9\\")
set(SDL2TTFDIR "D:\\vtklib\\SDL2_ttf-2.0.14\\")
set(OPENVR_ROOT_DIR "D:\\vtklib\\openvr-1.0.11\\")

find_package(SDL2 REQUIRED)
find_package(SDL2_ttf REQUIRED)
find_package(OpenVR REQUIRED)

aux_source_directory(. SOURCE_LIST)
file(GLOB_RECURSE HEADER_LIST ${CMAKE_SOURCE_DIR}/*.h)
source_group(Include FILES ${HEADER_LIST})

include_directories(${SDL2_INCLUDE_DIR} ${SDL2_TTF_INCLUDE_DIR} ${OPENVR_INCLUDE_DIR})

add_executable(${PROJECT_NAME} MACOSX_BUNDLE ${SOURCE_LIST} ${HEADER_LIST})

target_link_libraries(${PROJECT_NAME} ${SDL2_LIBRARY} ${SDL2_TTF_LIBRARIES} ${OPENVR_LIBRARY})

 