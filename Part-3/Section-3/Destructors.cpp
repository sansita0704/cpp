#include <iostream>
#include "Widget.h"
#include "TextBox.h"

using namespace std;

int main()
{
    // In inheritance, destructors are called in reverse order.
    // Destructor of derived class is called first.

    // TextBox box{true};
    // This works b/z we have inherited the constructor of Widget class which takes a boolean value.
    // But this is a very bad design that we are giving a boolean value to create a TextBox object.
    // So, we should remove all these constructors.

    TextBox box;

    // In these classes, we are not using any system resources or files.
    // So, we do not need a destructor.

    return 0;
}