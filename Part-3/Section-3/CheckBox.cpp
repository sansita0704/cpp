#include "CheckBox.h"
#include <iostream>

using namespace std;

CheckBox::~CheckBox()
{
    cout << "CheckBox Destructed" << endl;
}

void CheckBox::draw() const
{
    cout << "Drawing a CheckBox" << endl;
}
