#include <iostream>
#include "Rectangle.h"

using namespace std;

void createRectangle()
{
    try
    {
        // Open a file
        Rectangle rect;
        rect.setWidth(-1);
    }
    catch (const invalid_argument &ex)
    {
        cout << "Close the file" << endl;
        throw;
        // Rethrow the exception without any arguments.
    }
}

void doWork()
{
    createRectangle();
}

int main()
{
    try
    {
        doWork();
    }
    catch (const exception &ex)
    {
        cout << ex.what();
    }

    // Sometimes, we catch an exception but rethrow it so that it can be handled in another part of the program.
    // e.g. - In createRectangle(), we use some system resources like we open a file.
    // Now, createRectangle() throws an exception which gets caught in main().
    // But, the file that we opened remains as it is.
    // We never closed it.

    // To solve this, first we catch the exception locally in createRectangle().
    // Then, rethrow it so that it can be caught by main() and it can display an error message.

    return 0;
}