cmake_minimum_required(VERSION 3.0)
project(multitread)
set(CMAKE_CXX_STANDARD 17)

add_executable(multitread main.cpp)
include_directories(${CMAKE_SOURCE_DIR})


set(CMAKE_BUILD_TYPE Release)