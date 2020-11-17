cmake_minimum_required(VERSION 3.8)
project(Voorbeeld_Strategy_BTWBerekening)

set(CMAKE_CXX_STANDARD 11)

add_executable(Voorbeeld_Strategy_BTWBerekening main.cpp BTWBerekening.cpp BTWBerekening.h Verkoop.cpp Verkoop.h NederlandseBTWBerekening.cpp NederlandseBTWBerekening.h BritseBTWBerekening.cpp BritseBTWBerekening.h)