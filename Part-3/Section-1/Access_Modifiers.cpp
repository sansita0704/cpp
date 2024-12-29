#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    Rectangle rectangle;
    // rectangle.width = -1;

    // State of an object is the data stored in the object.
    // When we store bad data in an object, it goes to an invalid state.
    // Just like when we have negative value in width and height attribute.
    // Then, the object is unable to behave properly.
    // Here's when data hiding principles of OOP comes to the rescue.
    // Data Hiding: A class should hide its internal data from the outside code and provide functions for accessing the data.
    // To do this, we use access modifiers.
    // public
    // private
    // protected
    // All of these are keywords (reserved words).
    // We can add these access modifiers anywhere inside the class.
    // But, as a best practice we should write public members first and then private.
    // This is done so that as soon as we see a class we can right away tell that what features this class provides us (just like the buttons in a remote).

    return 0;
}