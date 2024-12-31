#include <iostream>
#include "Length.h"

using namespace std;

int main()
{
    Length first{10};
    Length second{20};

    first += second;
    cout << first << endl;

    first = second;
    // This works b/z under the hood, the compiler creates a default assignment operator for us.
    // It copies all the member variables of source object (second) to the target object (first).
    // This works fine most of the time but in some cases we need to have a control over how copying is done.
    // In those cases, we overload = operator.

    cout << first << endl;

    // = operator has diff meaning depending on where we use it.
    // If we use it to initialize a new object to an existing object, then it represents a copy operation.
    // If we assign an existing object, then it represents an assignment operator.

    Length third = first;
    // Here, copy constructor is called.

    first = second;
    // Assignment Operator.

    // If we delete the copy constructor, then we should also delete the = operator.
    // Otherwise it will create inconsistency in our program.

    return 0;
}