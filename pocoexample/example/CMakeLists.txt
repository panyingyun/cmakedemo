
cmake_minimum_required(VERSION 2.8)
 
PROJECT(pocotest)

find_package(Poco REQUIRED COMPONENTS Foundation Net Zip)
 
add_executable(pocotest MACOSX_BUNDLE example.cpp )
 
target_link_libraries(pocotest ${Poco_LIBRARIES})
