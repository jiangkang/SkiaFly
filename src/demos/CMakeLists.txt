cmake_minimum_required(VERSION 3.18)
project(demos)

set(CMAKE_CXX_STANDARD 17)
set(LIBRARY_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/libs)

include_directories(.)
include_directories(${CMAKE_HOME_DIRECTORY}/src)

add_library(libskia SHARED IMPORTED)
set_target_properties(libskia PROPERTIES IMPORTED_LOCATION ${CMAKE_HOME_DIRECTORY}/libs/libskia.so)
include_directories(${CMAKE_HOME_DIRECTORY}/include/skia)

add_library(libutils STATIC IMPORTED)
set_target_properties(libutils PROPERTIES IMPORTED_LOCATION ${CMAKE_HOME_DIRECTORY}/libs/libutils.a)


aux_source_directory(. DIR_SRCS)

add_library(demos STATIC ${DIR_SRCS})
set_target_properties(demos PROPERTIES CLEAN_DIRECT_OUTPUT 1)
target_link_libraries(demos libutils)
