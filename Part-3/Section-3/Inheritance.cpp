#include <iostream>
#include "TextBox.h"
#include "Widget.h"

using namespace std;

int main()
{
    // Inheritance is a mechanism for reusing code.
    // e.g. - All the components of a form like text boxes, checkboxes and buttons have some common features like size, position, enable() and disable().
    // So, while creating objects for them, we do not want to define these common properties as it will be repetitive.
    // So, we will make a "Widget" class and implement all these common properties in this class.
    // Then, make other classes inherit it.

    // Widget class - base or parent class.
    // TextBox class - derived or child class.
    // Arrow b/w them represents the inheritance relationship.
    // Go to Screenshots folder to review it.

    Widget widget;

    TextBox box;
    box.disable();
    cout << box.isEnabled() << endl;

    return 0;
}