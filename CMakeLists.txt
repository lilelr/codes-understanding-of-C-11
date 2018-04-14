cmake_minimum_required(VERSION 3.7)
project(codes_understanding_of_C__11)

set(CMAKE_CXX_STANDARD 11)
add_subdirectory(chpater7)
add_subdirectory(chapter3)

set(SOURCE_FILES main.cpp)
add_executable(codes_understanding_of_C__11 ${SOURCE_FILES})