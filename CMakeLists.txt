cmake_minimum_required(VERSION 3.18)
project(SkiaFly)

set(CMAKE_CXX_STANDARD 17)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_HOME_DIRECTORY}/out)

add_subdirectory(src)

add_library(libskia SHARED IMPORTED)
set_target_properties(libskia PROPERTIES IMPORTED_LOCATION ${CMAKE_HOME_DIRECTORY}/libs/libskia.so)
include_directories(${CMAKE_HOME_DIRECTORY}/include/skia)

add_library(libutils STATIC IMPORTED)
set_target_properties(libutils PROPERTIES IMPORTED_LOCATION ${CMAKE_HOME_DIRECTORY}/libs/libutils.a)

aux_source_directory(. DIR_SRCS)

add_executable(SkiaFly ${DIR_SRCS})

target_link_libraries(SkiaFly libskia libutils)