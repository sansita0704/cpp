#include <iostream>

using namespace std;

int main()
{
    // int numbers[10];
    // When we declare a variable like this it is declared in the part of memory known as stack.
    // When these variables go out of scope the memory allocated to them gets cleaned up.
    // Here, scope of numbers is in main() only so when the control gets out of main() the memory allocated to it gets released which can be used for other purposes.

    // When we give size = 10 then the array can only contain 10 elements but what if we need more space for elements then we need to increase the size.
    // But if we increase the size to 1000 and the the user needed only 5 spaces then so much space in memory gets wasted.
    // So, when the size of array is not fixed then we dynamically allocate memory as per our requirement to increase efficiency of our code.
    // In dynamic memory allocation, we allocate more space or increase the size of the array at run-time on demand or as per our need.

    // The variables declared using 'int *numbers = new int[10];' this syntax are stored in a diff part of memory known as heap/free store.
    // In this part, we have to clean up the memory otherwise the memory allocated to these variables will never get released.
    // As we will define more variables, the program will consume more and more memory as a result it will run out of memory and will crash.
    // hence, our program will be having a 'memory leak' means it will constantly consume more and more memory.

    int *numbers = new int[10];
    // new is an operator.
    // in [] we give initial size of the array.
    // new int[10] - this expression returns an integer pointer.
    // This pointer is used to store the address of the first element so it can be used to access and manipulate elements of the array.
    // To deallocate the memory of the variable in heap, we use delete operator.

    delete[] numbers; // deallocation of memory of array.

    // Declaring an integer in heap.
    int *number = new int;
    delete number;

    // We generally do not store an integer in heap as it is more easier to declare it in stack.
    // And we do not have to clean it up.

    numbers = nullptr;
    number = nullptr;
    // This is not mandatory, but it is a good practice to reset these pointers to nullptr.

    return 0;
}
