#ifndef CHECKBOX_H
#define CHECKBOX_H

#include "Widget.h"

class CheckBox : public Widget
{
public:
    ~CheckBox();
    void draw() const override;
};

#include "CheckBox.cpp"

#endif