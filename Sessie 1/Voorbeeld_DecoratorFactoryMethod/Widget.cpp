#include "Widget.h"
#include "InputWidget.h"
#include "BorderDecorator.h"
#include "TouchDecorator.h"
#include "VirtualTouchDecorator.h"
#include "TextWidget.h"

#define HOLOLENS true

Widget::Widget() {
}

Widget::~Widget() {
}

Widget* Widget::makeWidget(int type) {
    Widget* widget;
    if (type == 1) {
        widget = new InputWidget(80, 24);
    } else if (type == 2) {
        Widget* tmp = new BorderDecorator(new TextWidget(80, 24));
        if (HOLOLENS) {
            widget = new VirtualTouchDecorator(tmp);
        } else {
            widget = new TouchDecorator(tmp);
        }
    } else if (type == 3) {
        widget = new BorderDecorator((new InputWidget(80, 24)));
    }
    return widget;
}

/*
Widget* Widget::makeWidget(int type, bool bordered, bool touch) {
    Widget* widget;
    if (type == 1) {
        widget = new TextWidget(10, 10);
    } else  { // if (type == 2)
        widget = new InputWidget(80, 24);
    }

    if (bordered) widget = new BorderDecorator(widget);
    if (touch) {
        if (HOLOLENS) {
            widget = new VirtualTouchDecorator(widget);
        } else {
            widget = new TouchDecorator(widget);
        }
    }

    return widget;
}
*/