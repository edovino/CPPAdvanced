#include <iostream>
#include "BackgroundDecorator.h"

BackgroundDecorator::BackgroundDecorator(Widget* w) : Decorator(w) {
}

void BackgroundDecorator::draw() {
    Decorator::draw();
    std::cout << "- toegevoegd: BackgroundDecorator" << std::endl;
}
