#include <iostream>
#include <memory>
// These are the header files defined in STL.

using namespace std;

int main()
{
    // In more complex program, we will be using many pointers and it will be difficult to manage all those pointers and delete them to save memory leaks.
    // Also we have to remember to not delete a pointer twice otherwise our program could crash.
    // That's why, in modern C++ we have smart pointers.
    // We do not have to delete them from heap so we can work with them like normal variables stored in stack.

    /*
    • Types of smart pointers:

    1. Unique pointer: A ptr which owns the piece of memory which it points to.
    - So no other pointer can point to that same location.

    2. Shared pointer: Shared pointers are the pointers which can point to same location
    */

    // UNIQUE PTR

    // unique_ptr is a class which contains many functions and it is defined in memory header file.
    // It is a generic class so it can work with diff data types.
    // inside <>, we give the type of unique ptr which will be created.

    unique_ptr<int> x(new int);

    // Breakdown of above line:

    // new int: The new operator is used to allocate memory for the variable and int specifies the type of the variable.
    // It returns the address of the memory.
    // unique_ptr<int>: Defines the type of the smart pointer. In this case, it is a unique_ptr of int type.
    // x: The name of the unique_ptr.
    // So we are passing the address of an int variable as an argument in the func defined in unique_ptr class which will be responsible to free that memory location.

    *x = 10;
    cout << *x << endl;
    cout << x.get() << endl;
    // get() defined in unique_ptr class returns the address stored in ptr.
    // We can't perform ptr arithmetic on these smart ptr.

    unique_ptr<int> y = make_unique<int>();

    // make_unique<int>(): This is a generic function which dynamically allocates an integer variable in the heap and returns a unique ptr that manages the allocated memory.
    // Inside <>, we give the type of the variable created.

    // unique_ptr<int> y: This declares a unique ptr variable named y that manages an integer pointer.
    // It is initialized with the ptr returned by make_unique<int>().
    // So in short, make_unique<int>() returns an unique ptr which points to the allocated int variable.
    // We store this returned unique ptr in unique ptr variable named y.

    auto z = make_unique<int>();
    // As make_unique<int>() is specifying the type of ptr we can use the auto keyword.

    // To allocate an int array and return a unique ptr.
    auto numbers = make_unique<int[]>(5); // in (), we give size of the array.
    numbers[0] = 10;
    cout << numbers[0] << endl;

    // SHARED PTR

    shared_ptr<int> a(new int);
    // shared_ptr is also a generic class.

    auto b = make_shared<int>();

    *a = 10;

    shared_ptr<int> c(a);
    // In (), we give the variable which the smart ptr will point to but when we give a shared ptr in () then both the pointers point to the same location.

    cout << *c << endl; // output = 10
    if (a == c)
        cout << "equal" << endl;

    return 0;
}
