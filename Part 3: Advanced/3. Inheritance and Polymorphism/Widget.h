#ifndef WIDGET_H
#define WIDGET_H

class Widget
{
public:
    // Widget() = default;
    // Widget(bool enabled);
    virtual ~Widget() = default;
    void enable();
    void disable();
    bool isEnabled() const;
    virtual void draw() const;
    // virtual keyword allows the compiler to override this func.
    // It ensures that when we call the draw(), then draw() of derived class gets called when TextBox or CheckBox is passed.

    // virtual void draw() const = 0;
    // It is a pure virtual method having no implementation.

private:
    bool enabled;

protected:
    int width;
    // These are similar to private members in the sense that they cannot be accessed outside the class.
    // But they are diff from private members in the sense that they can be accessed in the derived class.
    // But private members are not accessible in the derived class.

    // Always make your attributes private.
    // Make them protected only when you need to access them in a derived class.
};

#include "Widget.cpp"

#endif