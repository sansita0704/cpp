#include <iostream>

using namespace std;

int main()
{
    // When a variable of smaller type is initialized to a variable of larger type then the value is narrowed and then stored in the variable of smaller type
    // This is known as narrowing.

    int number = 1000000;
    short another = number; // Narrowing
    // Here, an integer is getting converted to short so it is called Narrowing Conversion.
    // So our number will be shortened.

    // short no {num}; - error
    cout << another << endl;

    short a = 100;
    int b = a;
    // Initializing a variable of larger type to a smaller is not an issue
    cout << b << endl;

    return 0;
}
