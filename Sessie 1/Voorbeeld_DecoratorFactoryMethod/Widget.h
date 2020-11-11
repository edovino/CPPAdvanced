#pragma once

class Widget {
    protected:
        int width;
        int height;

    public:
        Widget();
        virtual ~Widget();

        static Widget* makeWidget(int type);

        // alternatief:
        // static Widget* makeWidget(int type, bool bordered = false, bool touch = false);

        virtual void draw() = 0;
};
