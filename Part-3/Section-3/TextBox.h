#ifndef TEXTBOX_H
#define TEXTBOX_H

#include <string>
#include "Widget.h"

using namespace std;

class TextBox final : public Widget
{
public:
    // using Widget::Widget;
    // Here, we are referencing the constructor of base class.

    // TextBox(bool enabled);
    // TextBox(bool enabled, const string &value);
    ~TextBox();
    string getValue();
    void setValue(const string &value);
    void draw() const override final;

private:
    string value;
};
// Public inheritance: This means that public members of Widget class will be inherited as public.
// So, we can access them anywhere outside the class.

// Private inheritance: This means that public members of Widget class will be inherited as private.
// So, we cannot access them outside the class.
// But, we can access them inside the class.

// Most of the time, we use public inheritance.

#include "TextBox.cpp"

#endif