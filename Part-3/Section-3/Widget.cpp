#include "Widget.h"
#include <iostream>

using namespace std;

/*
Widget::Widget(bool enabled) : enabled{enabled}
{
    cout << "Widget Constructed" << endl;
}
*/

/*
Widget::~Widget()
{
    cout << "Widget Destructed" << endl;
}
*/

void Widget::enable()
{
    enabled = true;
}

void Widget::disable()
{
    enabled = false;
}

bool Widget::isEnabled() const
{
    return enabled;
}

void Widget::draw() const
{
    cout << "Drawing a widget" << endl;
}
