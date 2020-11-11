#pragma once

#include <iostream>
#include "Widget.h"

class TextWidget : public Widget {
        int width, height;
    public:
        TextWidget(int w, int h);
        virtual ~TextWidget();

        void draw() {
            std::cout << "InputWidget: " << width << ", " << height << std::endl;
        }
};

