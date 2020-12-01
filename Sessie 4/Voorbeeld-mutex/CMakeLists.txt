cmake_minimum_required(VERSION 3.9)
project(untitled2)

set(CMAKE_CXX_STANDARD 17)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++17 -pthread")

add_executable(untitled2 main.cpp)