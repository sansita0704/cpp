#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    // Rectangle rectangles[3];
    // If we do not have a default constructor, then we can't write this.
    // This is because when this line gets executed, compiler creates three memory objects.
    // Now, it needs to initialize those objects because there are only those constructor which have some parameters.
    // So, it needs some values which it can pass to a constructor.
    // So, the compiler doesn't know how to create Rectangle object without these values.

    Rectangle rectangles1[] = {
        Rectangle(),
        Rectangle(10, 20),
        Rectangle(10, 20, "red")};
    // This is one way of intializing an array of objects where we are writing the class name and explicitly calling the constructor.

    Rectangle rectangles2[] = {
        {},
        {10, 20},
        {10, 20, "red"}};
    // This is another way of intializing an array of objects where we are using brace-initialiser method and directly providing the values.
    // Here, compiler knows that this array contains objects of Rectangle class.
    // So, when we give these values, it will pass these values to one of the constructor of the Rectangle class.

    rectangles2[0].draw();
    // We can access these objects using index.

    for (Rectangle &rect : rectangles2)
        rect.draw();
    // If we don't use a reference parameter, then in each iteration, one of the object of rectangles2 array will be copied to rect.
    // Then draw() gets called.
    // To avoid this, we have used a reference parameter.
    // Now, in each iteration, rect will reference to one of the object of rectangles2.

    return 0;
}