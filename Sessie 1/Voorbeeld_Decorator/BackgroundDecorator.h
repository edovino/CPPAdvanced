#pragma once

#include "Decorator.h"

class BackgroundDecorator : public Decorator {
    public:
        BackgroundDecorator(Widget* w);

        void draw();
};
