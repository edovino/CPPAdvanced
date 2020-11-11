#include <iostream>
#include "VirtualTouchDecorator.h"

VirtualTouchDecorator::VirtualTouchDecorator(Widget* w) : Decorator(w) {}

void VirtualTouchDecorator::draw() {
    Decorator::draw();
    std::cout << "- toegevoegd: VirtualTouchDecorator" << std::endl;
}

VirtualTouchDecorator::~VirtualTouchDecorator() {
}
