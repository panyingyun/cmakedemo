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
  
add_executable(cmake4 MACOSX_BUNDLE cmake4.cpp)

target_link_libraries(cmake4 ${SDL2_LIBRARY})

cmake_minimum_required(VERSION 2.8)
project(cmake5)
#find QT libraries

set(CMAKE_MODULE_PATH ${CMAKE_SOURCE_DIR}/cmake/modules/ ${CMAKE_MODULE_PATH})
find_package(Qt5Widgets REQUIRED)
find_package(Qt5Core REQUIRED)
find_package(Qt5Gui REQUIRED)
find_package(Qt5SerialPort REQUIRED)



aux_source_directory(. DIR_SRCS)
SET(serialport_HEADERS ${AR_SOURCE_DIR}/serialport/serialport.h)
QT5_WRAP_CPP(serialport_HEADERS_MOC ${serialport_HEADERS})


#    ADD_DEFINITIONS(${Qt5Core_DEFINITIONS})
#   add_definitions(${Qt5Widgets_DEFINITIONS})
#   add_definitions(${Qt5SerialPort_DEFINITIONS})
#   INCLUDE_DIRECTORIES(${Qt5Widgets_INCLUDE_DIRS} ${Qt5Core_INCLUDE_DIRS} ${Qt5SerialPort_INCLUDE_DIRS})
#   INCLUDE_DIRECTORIES(${CMAKE_CURRENT_BINARY_DIR})

qt5_wrap_ui(UI_HEADERS ${AR_SOURCE_DIR}/serialport/serialport.ui)


message(" Qt5Widgets_INCLUDE_DIRS =${Qt5Widgets_INCLUDE_DIRS}     ")
message(" Qt5Widgets_LIBRARIES =${Qt5Widgets_LIBRARIES}   ")

message(" Qt5Core_INCLUDE_DIRS =${Qt5Core_INCLUDE_DIRS}   ")
message(" Qt5Core_LIBRARIES =${Qt5Core_LIBRARIES}         ")

message(" Qt5SerialPort_INCLUDE_DIRS =${Qt5SerialPort_INCLUDE_DIRS}")
message(" Qt5SerialPort_LIBRARIES =${Qt5SerialPort_LIBRARIES}")


add_executable(serialport ${serialport_SOURCES}  ${serialport_HEADERS_MOC}   ${serialport_HEADERS} ${UI_HEADERS}  )
TARGET_LINK_LIBRARIES(serialport ${Qt5Core_LIBRARIES}  ${Qt5Widgets_LIBRARIES}  ${Qt5SerialPort_LIBRARIES})