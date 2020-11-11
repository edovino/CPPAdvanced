#include <iostream>
#include "BorderDecorator.h"

BorderDecorator::BorderDecorator(Widget* w) : Decorator(w) {
}

BorderDecorator::~BorderDecorator() {
}

void BorderDecorator::draw() {
    Decorator::draw();
    std::cout << "- toegevoegd: BorderDecorator" << std::endl;
}
