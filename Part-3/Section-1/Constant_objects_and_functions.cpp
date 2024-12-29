#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    // Just like we can declare a const int, we can also declare a const object.
    // Compiler makes all the attributes of a const object const.
    // So, all of its attributes become read-only or 'immutable' (unchangeable).

    const Rectangle rectangle;
    // When we access members of a const object, then we can only see those methods which are declared as const.
    // As compiler is sure that it is safe to use them whereas others might change the state of the object.
    // So, as a best practice if we have a method which does not change the state of the object then we should declare it as a const.

    return 0;
}