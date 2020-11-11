#include <vector>
#include <iostream>

#include "Widget.h"

void draw(std::vector<Widget*> widgets) {
    for (auto& widget : widgets) {
        std::cout << "---" << std::endl;
        widget->draw();
    }
    std::cout << "---" << std::endl;
}

int main() {
    std::vector<Widget*> widgets;

    Widget* widget;
    int widgetType;

    while (true) {
        std::cin >> widgetType;

        if (widgetType == 0) {
            break;
        } else {
            widget = Widget::makeWidget(widgetType);
        }
        widgets.push_back(widget);
        draw(widgets);
    }

    for (const auto& item : widgets) {
        delete item;
    }
}
