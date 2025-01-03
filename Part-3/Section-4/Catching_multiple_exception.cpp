#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    try
    {
        cout << "Width: ";
        int width;
        cin >> width;

        Rectangle rect;
        rect.setWidth(width);
    }

    /*
    catch (const invalid_argument &ex)
    {
        cout << ex.what() << endl;
    }
    catch(const out_of_range &ex)
    {
        cout << ex.what() << endl;
    }
    */

    // These two catch blocks are completely independent of each-other just like 2 diff functions.
    // So, the name of the parameters don't have to be unique.

    // The implementation of both these catch blocks are similar.
    // So, we can combine them to a single catch block.
    // Both invalid_argument and out_of_range are two child classes of logic_error class.
    // We know that we can store child class object into the parent class object.
    // So, we will use an object of logic_error class.
    // Then, whatever be the type of exception, it will get stored in the parameter.

    /*
    catch (const logic_error &ex)
    {
        cout << ex.what() << endl;
    }
    */

    // Sometimes, we need to handle diff kind of exceptions in diff way.

    /*
    catch (const out_of_range &ex)
    {
        cout << ex.what() << endl;
    }
    */

    // catch blocks are executed in order.
    // Here, we get a warning b/z an exception of type out_of_range is a logic_error exception.
    // So, it will be handled by the 1st catch block.
    // When it will be caught, control will move out of try-catch block.
    // So, the 2nd catch block will be ignored.

    // To solve this problem, we will order these catch blocks in the order of most specific to most generic.
    // So, the final catch blocks will look like this:

    catch (const out_of_range &ex)
    {
        cout << ex.what() << endl;
        // Now, here we can have a diff implementation.
    }

    catch (const logic_error &ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}