#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    // Special functions that are automatically called when an object destroys are called Destructors.
    // It's purpose is to clean up the system resources used by the object.
    // Does not have a return type.
    // Name of destructor = name of the class.
    // It has no parameters.
    // We can't overload them.
    // So, each class can have max 1 destructor.

    Rectangle first{10, 20};
    // This object is declared in stack.
    // So, when main() finishes execution, it gets out of scope so it gets destroyed.
    // At this point, destructor is called.

    return 0;
}