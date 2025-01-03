#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    // Exception: An object to report an error while our program is running.
    // In theory, this object can be anything like an int or a string.
    // But mostly, it is an instance of a class derived directly or indirectly from exception class.
    // Exception class is defined in STL.
    // It has a number of classes derived from it in which some common exceptions are predefined.
    // Go to Screenshots folder to review them.

    // We can also create our custom exceptions.
    // e.g. - EmployeeNotFound, Accountlocked, DailyQuotaReached.
    // We can create these exception classes to report error.

    // Working with exceptions is like playing a volleyball i.e. one player throws it and another player catches it.
    // If a func encounters a problem that it can't handle, it throws an exception.
    // Somewhere else (in another func), we should catch that exception and do sth with it.
    // Perhaps we can show an error to the user and allow them to retry or sth else.
    // In reality, that exception is just an object that contains info about the error.

    /*
    void Rectangle::setWidth(int width)
    {
    if (width < 0)
        throw invalid_argument("width");
    else
        this->width = width;
    }
    */

    // Here, in Rectangle class, we are using throw statement to throw an exception  of type invalid_argument.
    // It is one of the predefined exception classes in STL.
    // So, here we are creating an object of this class and using (), we are calling the constructor of this class.
    // Then, passing a string as an argument.
    // We can also use braces {}.
    // We throw the exception outside of this method i.e. when this line gets executed, control goes out of this method.
    // So, the lines written below it will not be executed.

    // Now, somewhere else we have to catch that exception and handle it.
    // Perhaps we can print an error message.
    // We should not directly print the message inside the method b/z this would work here.
    // But if we make a GUI application, it doesn't have a console.
    // So, cout will not work there.
    // So, it is good to throw an exception, and then let the caller of this method decide what should happen with that error.
    // What should happen with this exception is not the responsibility of this method.

    /*
    cout << "Enter width: ";
    int width;
    cin >> width;

    Rectangle rect;
    rect.setWidth(width);
    */

    // If we do not catch the exception, our program crashes with an uncaught exception.
    // This is a bad user experience.
    // We should handle the exception the right way.

    // We should move the lines that can cause exception in the try block.
    // A try block in the middle of a func looks ugly.
    // So, to make it look more clean we should move the entire code to the try block.

    try
    {
        cout << "Enter width: ";
        int width;
        cin >> width;

        Rectangle rect;
        rect.setWidth(width);

        cout << "Done:";
    }
    catch (const invalid_argument &ex)
    {
        // cout << "Invalid " << ex.what() << endl;
        cout << ex.what() << endl;
    }

    // Just after a try block, we add a catch block.
    // Here, we can catch that exception object.
    // In (), we declare a parameter of the type whose exception is thrown.
    // If a line in try block throws an exception, then the lines written below it will not get executed.

    // Instead of hard coding the name of the argument, we can use a method of exception object.
    // We know that this exception object contains info about the error.
    // We can access it using what().
    // what() returns a const char* i.e. a C-style string.
    // That string is the string that we pass in the constructor of invalid_argument class.

    // So, we can type the entire error message in the constructor itself.
    // It is better to declare this object as a reference parameter and const.

    // Always remember that the code we write in the catch block should not throw an exception.
    // B/z we would not have any other catch block to catch that exception.
    // Hence, our program will crash.
    // Once we catch the exception, the code written after catch block gets executed as it is.

    cout << "End of Program" << endl;

    return 0;
}
