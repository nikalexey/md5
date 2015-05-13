cmake_minimum_required(VERSION 2.8)

project(md5_sample)

set(SOURCE_EXE main.cpp)

set(SOURCE_LIB md5.cpp)

add_library(md5 STATIC ${SOURCE_LIB})

add_executable(main ${SOURCE_EXE})

target_link_libraries(main md5)		