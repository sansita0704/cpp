#include "TextBox.h"
#include <iostream>

using namespace std;

/*
TextBox::TextBox(bool enabled) : Widget(enabled)
{
}
*/

/*
TextBox::TextBox(bool enabled, const string &value) : Widget(enabled), value{value}
{
}
*/

TextBox::~TextBox()
{
    cout << "TextBox Destructed" << endl;
}

string TextBox::getValue()
{
    return value;
}

void TextBox::setValue(const string &value)
{
    this->value = value;
}

void TextBox::draw() const
{
    cout << "Drawing a TextBox" << endl;
}
