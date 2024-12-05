#include <iostream>

using namespace std;

int main()
{
    /*
    // Pointer is a special variable that holds the address of the another variable.
    // We use pointers for:
    - Efficiently passing large objects.
    - Dynamic memory allocation.
    - Enabling polymorphism.
    */

    int number = 10;
    cout << &number << endl;
    // & - address of operator
    // The address of a variable can change in every execution because the memory layout of a program is not guaranteed to be the same every time it runs.

    int *ptr_1 = &number;
    // '*' representes a pointer.
    // int means that ptr can only store the address of an int variable i.e it can only point to an int.

    cout << ptr_1 << endl;

    int *ptr_2;
    // It will take any garbage value.
    // So, as a best practice we should always initialize a pointer.

    // If we don't know that to which variable the pointer is going to point, initialize it to nullptr.
    // nullptr is a pointer that does not points to anything.

    int *ptr_3 = nullptr;
    cout << ptr_3 << endl;

    cout << *ptr_1 << endl;
    // '*' means value at address i.e *ptr = number.
    // '*' - Indirection (de-referencing) operator

    // Using '*', we can also change the value of the variable number.
    *ptr_1 = 30;
    cout << number << endl;

    // Exercise

    int x = 10;
    int y = 20;

    int *ptr_4 = &x; // ptr_4 points to x
    *ptr_4 *= 2;
    cout << x << endl;

    ptr_4 = &y; // Now, ptr_4 points to y
    *ptr_4 *= 3;
    cout << y << endl;

    return 0;
}
