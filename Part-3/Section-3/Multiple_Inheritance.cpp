#include <iostream>
#include "FileIO.h"

using namespace std;

int main()
{
    // One class having multiple base classes is called Multiple Inheritance.
    // e.g. - iostream class has 2 base classes istream and ostream.
    // So, it gives us both reading and writing capabilites.

    FileIO file{"Hello"};
    cout << file.read();

    // When we have defined constructor in the base classes then we get an error here.
    // As the compiler cannot generate a default constructor b/z it doesn't know what to pass to the base classes.
    // So, here we need to define a constructor for our FileIO class also where we will call the constructor of base classes.

    // If we have members with same name in base classes with diff implementation.
    // Then both the implementation gets inherited by the derived class.
    // But while calling those members we have to reference them with their base class name.

    // In real-life, we shouldn't use it very much as we could create complex hierarchy.

    return 0;
}