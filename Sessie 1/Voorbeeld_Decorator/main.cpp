#include <vector>
#include <iostream>

#include "Widget.h"
#include "BorderDecorator.h"
#include "TouchDecorator.h"
#include "InputWidget.h"

int main() {
    Widget* plainWidget = new InputWidget(80, 24);
    plainWidget->draw();

    Widget* decoratedWidget1 = new BorderDecorator(new InputWidget(80, 24));
    decoratedWidget1->draw();

    Widget* decoratedWidget2 = new BorderDecorator(
            new TouchDecorator(
                    new InputWidget(80, 24)));
    decoratedWidget2->draw();

    delete plainWidget;
    delete decoratedWidget1;
    delete decoratedWidget2;
}
