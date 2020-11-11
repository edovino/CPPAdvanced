#pragma once

#include "Widget.h"

class Decorator : public Widget {
    private:
        Widget* theWidget;
    public:
        Decorator(Widget* w);
        virtual ~Decorator();

        virtual void draw();
};
