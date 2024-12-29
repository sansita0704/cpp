#include <iostream>

using namespace std;

class Rectangle
{
public:
    int width;
    int height;
    void draw();
    int getArea();
};

void Rectangle::draw()
{
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea()
{
    return width * height;
}

int main()
{
    // Just like we have different ways to bake a cake, we have different ways to write software.
    // They are called Programming Paradigm.
    // So, a Programming Paradigm is the style of programming or it is a way of writing software.
    // Examples: Procedural, Functional, Object-oriented, Event-driven.
    // In Functional Paradigm, we build software by creating and composing 'functions' while in Object-oriented programming, we build software by creating objects.
    // There is nothing like best programming paradigm, each of them has its pros and cons and are used to solve specific problems.

    // In OOP, each object has a clear responsibility just like the workers of a restaurent.
    // An Object is a software entity or a building block that has attributes (properties) and functions (methods).
    // It is an instance of a class.
    // Class is a blueprint or recipe for creating objects.
    // Just like we can use a recipe to bake many cakes of the same kind, we can use class to create many objects of same type.

    // We can represent a class using a visual language called UML (Unified Modelling Language).
    // In UML, we represent a class using a box with three sections:
    // 1. Class Name
    // 2. Attributes: variables that hold data.
    // 3. Functions (Methods)
    // Attributes + Functions = Members of a class.
    // Go to Screenshots folder to learn about it.

    // Mostly, we use structures as a simple data containers and classes for creating objects that can do things.
    // So, structure is more about data but class is more about data (attributes) + functionalities (methods).

    // Encapsulation: Combining the data and functions that operate on the data into one unit (class or object).

    // Attributes (in UML), member variables (in C++), fields or properties (in other languages).
    // They all are same.
    // In C++, functions inside the class are called member functions.

    Rectangle rectangle;
    // So, rectangle is the object of Rectangle class.
    // We can access its members using dot operator.

    rectangle.width = 10;
    rectangle.height = 20;
    // In structures, all the members are public by default.
    // In classes, all the members are private by default.
    // So, they are not accessible outside of the class.

    rectangle.draw();
    cout << rectangle.getArea();

    return 0;
}