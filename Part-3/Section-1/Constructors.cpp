#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    // When we do not initialize height and width, it takes garbage value.
    // To solve this, either we can give them a default value inside the interface of the class or we can use a constructor.
    // Constructor is a special function inside a class which is used to initialize the objects of the class.
    // They do not have a return type not even void and it's name is same as the name of the class.
    // It gets called when an object is declared.

    Rectangle rectangle{10, 20};
    // When we have a constructor, we have to specify two values.
    // 2 ways to do so:
    // Using () or using {}
    // In modern C++, we use {}.

    cout << rectangle.getWidth() << endl
         << rectangle.getHeight() << endl;

    return 0;
}