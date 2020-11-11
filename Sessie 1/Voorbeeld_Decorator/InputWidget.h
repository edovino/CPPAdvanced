#pragma once

#include <iostream>
#include "Widget.h"

class InputWidget : public Widget {
    public:
        InputWidget(int w, int h);
        virtual ~InputWidget();

        void draw();
};
