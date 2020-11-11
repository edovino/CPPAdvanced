#include <iostream>
#include "TouchDecorator.h"

TouchDecorator::TouchDecorator(Widget* w) : Decorator(w) {}

void TouchDecorator::draw() {
    Decorator::draw();
    std::cout << "- toegevoegd: TouchDecorator" << std::endl;
}

TouchDecorator::~TouchDecorator() {
}
