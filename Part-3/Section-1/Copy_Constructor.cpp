#include <iostream>
#include "Rectangle.h"

using namespace std;

void showRectangle(Rectangle &rectangle)
{
    cout << "Showing a Rectangle" << endl;
}
// When we pass objects by value inside a function, then also it is copied.
// Hence, copy constructor gets called.
// But if we change it into a reference parameter, then there will be no copying.

int main()
{
    Rectangle first{10, 20};

    // Copy Constructor is a special type of constructor that is used to copy objects.

    Rectangle second = first;
    // This copying of objects works because BTS, the compiler automatically creates a copy constructor.
    // This constructor takes the first object and copies all of its values into the second object.
    // So, 2 independent entities are formed with same values.
    // This works fine in most of the cases but sometimes we need to have a control over how objects are copied.
    // In these cases, we define a copy constructor.

    showRectangle(first);

    return 0;
}
