#include <iostream>
#include "Length.h"
#include "Point.h"

using namespace std;

int main()
{
    // Operator Overloading is done to implement built-in operators for our classes.

    Length first{10};
    Length second{10};

    if (first == second)
        cout << "Equal" << endl;

    // We can also call this func just like a normal func.
    cout << first.operator==(second) << endl;

    // We cannot write (first == 10) as we have declared the constructor as explicit.
    // So, it cannot convert 10 to a length object.
    // So, we need to overload the == operator again.

    if (first == 10)
        cout << "Equal" << endl;

    // When we overload == operator, modern C++ compilers automatically generate functions for overloading inequality operator for us.
    // If it is not generated then we have to do it in terms of == operator.

    if (first != 10)
        cout << "Not Equal" << endl;

    // Exercise

    Point a{0, 0};
    Point b{0, 10};

    if (a == b)
        cout << "Equal";

    return 0;
}