#include <iostream>

using namespace std;

int main()
{
    int values[] = {10, 20, 30};
    // C++: structured binding
    // JavaScript: destructuring
    // python: unpacking
    // All these terms are used for same technique by which we can unpack the array and store each element of array in seperate variable.

    auto [x, y, z] = values;
    /*
    This one line is equivalent to
    int x = values[0];
    int y = values[1];
    int z = values[2];

    • Working:
    - [x, y, z]: declares and define the variables x, y, and z simultaneously.
    - The '=' sign assigns the elements of the array 'values' to the variables x, y, and z.
    - The array is automatically decomposed, and its elements are assigned to the variables x, y, and z respectively.
    - i.e x will hold the first element of 'values', y will hold the second element and so on.
    */

    cout << x << ", " << y << ", " << z;

    return 0;
}
