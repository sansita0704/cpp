// Our remote has various buttons outside and a complex electronic circuit inside.
// Similarly, this header file is like that complex circuit.
// We will define the interface of the class here.
// Then, in our main file, we will include this header file to access the features of rectangle class.

#ifndef RECTANGLE_H
#define RECTANGLE_H
// This is called header guard.
// It is written to prevent multiple inclusions of the this file during the compilation process.

#include <string>

using namespace std;

class Rectangle
{
public:
    Rectangle() = default;
    // Here, we are telling compiler to construct a default constructor for us.
    // So that we can create a rectangle without giving values for height and width.

    // A constructor with no parameters is called a default constructor.
    // Similar to normal functions, we can overload constructors as well.
    // So, here we have two constructors with diff signature.

    Rectangle(const Rectangle &source);
    // Rectangle(const Rectangle &source) = delete;
    // To avoid the copying of a constructor we can set the copy constructor to delete keyword.
    // So, now we can't copy an object of this class.
    // If we don't do so, compiler will automatically create a copy constructor.

    Rectangle(int width, int height);
    Rectangle(int width, int height, string color);
    ~Rectangle();

    void draw() const;
    int getArea() const;
    // Here, we only have function declaration.
    // Function definition will be there in rectangle.cpp.

    // Getter (accessor)
    int getWidth() const;

    // Settor (mutator) (mutate means to change sth)
    void setWidth(int width);

    int getHeight() const;
    void setHeight(int height);

    static int getObjectsCount();

private:
    int width = 0;
    int height = 0;
    string color;

    static int objectsCount;
    // Whenever we declare a static variable, we have to define it in our implementation file.
    // We should always stack all the static members together and separate them using a line break.
};

#include "Rectangle.cpp"
// Mosh hasn't included it but I have to otherwise compiler is giving error as it is unable to access the definition of methods.

#endif