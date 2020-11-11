cmake_minimum_required(VERSION 3.6)
project(Config)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Config.cpp Config.h)
add_executable(Config ${SOURCE_FILES})