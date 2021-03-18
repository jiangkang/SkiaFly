cmake_minimum_required(VERSION 3.18)
project(SkiaFly)

set(CMAKE_CXX_STANDARD 17)

add_library(libskia SHARED IMPORTED)
set_target_properties(libskia PROPERTIES IMPORTED_LOCATION ${CMAKE_CURRENT_SOURCE_DIR}/libs/libskia.so)
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include/skia)

add_executable(SkiaFly main.cpp)

target_link_libraries(SkiaFly libskia)