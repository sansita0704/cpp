#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rectangle;

    cout << rectangle.getWidth() << endl
         << rectangle.getHeight() << endl;

    // The C++ compiler automatically generates a default constructor for every class unless we provide a constructor.
    // That's why, before creating the constructor for Rectangle class, we could create it's objects without any values.

    return 0;
}