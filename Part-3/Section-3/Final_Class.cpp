#include <iostream>

using namespace std;

int main()
{
    // Sometimes, we want to prevent the methods of base class from being overridden in the derived class.
    // This is where we use final keyword.
    // We can add it before or after override.
    // e.g. - If we add final keyword in draw() in TextBox class, then MaskedTextBox class could not override that method.

    // We can also declare a class as final.
    // Now, it cannot be inherited by a derived class.

    return 0;
}