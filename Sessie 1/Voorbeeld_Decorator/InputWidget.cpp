#include "InputWidget.h"

InputWidget::InputWidget(int w, int h) {
    this->width = w;
    this->height = h;
}

void InputWidget::draw() {
    std::cout << "InputWidget: " << this->width << ", " << this->height << std::endl;
}

InputWidget::~InputWidget() {
}
