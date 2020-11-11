cmake_minimum_required(VERSION 3.8)
project(Voorbeeld_DecoratorFactoryMethod)

set(CMAKE_CXX_STANDARD 11)

add_executable(Voorbeeld_DecoratorFactoryMethod
        main.cpp BackgroundDecorator.cpp BackgroundDecorator.h Widget.cpp Widget.h TextWidget.cpp TextWidget.h InputWidget.cpp InputWidget.h Decorator.cpp Decorator.h BorderDecorator.cpp BorderDecorator.h TouchDecorator.cpp TouchDecorator.h VirtualTouchDecorator.cpp VirtualTouchDecorator.h)
