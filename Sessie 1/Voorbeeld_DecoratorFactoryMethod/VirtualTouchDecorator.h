#pragma once

#include "Decorator.h"

class VirtualTouchDecorator : public Decorator {
    public:
        VirtualTouchDecorator(Widget* w);
        virtual ~VirtualTouchDecorator();
        void draw();
};
