cmake_minimum_required(VERSION 3.8)
project(Voorbeeld_Decorator)

set(CMAKE_CXX_STANDARD 11)

add_executable(Voorbeeld_Decorator
        main.cpp Widget.cpp Widget.h TextWidget.cpp TextWidget.h InputWidget.cpp InputWidget.h Decorator.cpp Decorator.h BorderDecorator.cpp BorderDecorator.h TouchDecorator.cpp TouchDecorator.h)
