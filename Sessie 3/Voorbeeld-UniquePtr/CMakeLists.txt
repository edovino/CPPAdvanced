cmake_minimum_required(VERSION 3.6)
project(UniquePtrDone)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp FancyObject.cpp FancyObject.h )
add_executable(UniquePtr ${SOURCE_FILES})
