cmake_minimum_required(VERSION 3.18)
project(utils)

set(CMAKE_CXX_STANDARD 17)
set(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/libs)
include_directories(.)

add_library(libskia SHARED IMPORTED)
set_target_properties(libskia PROPERTIES IMPORTED_LOCATION ${CMAKE_HOME_DIRECTORY}/libs/libskia.so)
include_directories(${CMAKE_HOME_DIRECTORY}/include/skia)

message(STATUS ${CMAKE_HOME_DIRECTORY})

add_library(utils STATIC file_utils.cpp)
set_target_properties(utils PROPERTIES CLEAN_DIRECT_OUTPUT 1)
