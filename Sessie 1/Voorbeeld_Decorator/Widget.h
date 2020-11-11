#pragma once

class Widget {
    protected:
        int width;
        int height;

    public:
        Widget();
        virtual ~Widget();

        virtual void draw() = 0;
};

