#pragma once

#include "Decorator.h"

class BorderDecorator : public Decorator {
    public:
        BorderDecorator(Widget* w);
        virtual ~BorderDecorator();

        void draw();
};
