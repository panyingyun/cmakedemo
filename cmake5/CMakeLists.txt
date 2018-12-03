#ref: https://www.cnblogs.com/csuftzzk/p/cmake_visual_sutdio_qt.html
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
PROJECT(cmake5)

set(CMAKE_PREFIX_PATH "C:\\Qt\\Qt5.11.1\\5.11.1\\msvc2017_64\\")
set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules/ ${CMAKE_MODULE_PATH})
 
#############################################################################
# Compiler and linker options
ADD_DEFINITIONS(-Wall -DWIN32_LEAN_AND_MEAN)
 
SET(CMAKE_AUTOMOC ON)
SET(CMAKE_AUTORCC ON)
SET(CMAKE_CXX_STANDARD 11)
 
FILE(GLOB SOURCE_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.cpp")
FILE(GLOB HEADER_FILES "${CMAKE_CURRENT_SOURCE_DIR}/*.h")
FILE(GLOB FORMS "${CMAKE_CURRENT_SOURCE_DIR}/*.ui")
  
SET(RESOURCES "${CMAKE_CURRENT_SOURCE_DIR}/weatheranchorlayout.qrc") 
   
   
#################################################################################
# EXTERNAL LIBS
FIND_PACKAGE(Qt5 COMPONENTS Core Widgets Gui REQUIRED)
qt5_wrap_ui(UI_HEADERS ${FORMS})
 
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR}/)
 
################################################################################
# Compile target
ADD_EXECUTABLE(${PROJECT_NAME} ${SOURCE_FILES} ${HEADER_FILES} ${UI_HEADERS} ${RESOURCES})
# https://www.kdab.com/using-cmake-with-qt-5/
qt5_use_modules(${PROJECT_NAME} Core Widgets Gui) 
