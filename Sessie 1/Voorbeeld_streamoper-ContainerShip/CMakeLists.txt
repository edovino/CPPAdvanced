cmake_minimum_required(VERSION 3.6)
project(ContainerShip)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Ship.cpp Ship.h Container.cpp Container.h)
add_executable(ContainerShip ${SOURCE_FILES})