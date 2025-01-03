#include <iostream>
#include "Rectangle.h"

using namespace std;

void createRectangle()
{
    Rectangle rect;
    rect.setWidth(-1);

    cout << "";
    // This line will not be executed.
}

void doWork()
{
    createRectangle();
}

int main()
{
    // Call Stack: It shows are func calls in reverse order.

    // Compiler compiles the code into machine language but does not execute it yet.
    // It checks the code for syntax and static errors (e.g., missing semicolons, invalid data types, etc.).
    // When an exception is thrown, compiler does not handle it.
    // Instead, the runtime system takes over to find and execute the appropriate catch block.

    // The program starts executing from main() (runtime begins).
    // createRectangle() throws an exception.
    // The runtime system searches for a catch block in createRectangle(), but there is none.
    // So, exception remains unhandled and the control moves outside of this func and moves to previous func.
    // At this point, runtime moves to call stack and removes createRectangle() from top of the stack.

    // Then, runtime looks for a catch block in doWork().
    // Again, no catch block is found in doWork(), so the control moves to the main().

    // In main(), again it looks for a catch block.
    // But nothing is found, so our program terminates, often displaying an error message about the unhandled exception.

    // Where should we catch the exception?
    // Technically, we can do it in any of the functions.
    // But what is the right place?
    // There is no right ans to it.
    // It depends on our application and what we are building.

    // e.g. - We can handle it in createRectangle() so that doWork() would not know about it.
    // But sometimes we let the control pass to doWork() and handle the exception there.

    // One practice that we follow is we wrap the entire code of main() in try block and add catch block in main().
    // As a parameter, we use exception class as it is the base class for all types of exceptions.

    try
    {
        doWork();
    }
    catch (const exception &ex)
    {
        cout << ex.what();
    }

    return 0;
}