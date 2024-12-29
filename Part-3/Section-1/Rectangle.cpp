#include "Rectangle.h"
#include <iostream>
// When we include files from the STL, we use '<>'.
// When we include files from our project, we use "".

using namespace std;

void Rectangle::draw() const
{
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}
// To define a member function, we have to qualify it with its class name.
// '::' is called scope resolution operator.
// Inside draw(), we have access to all the members of the class rectangle.

int Rectangle::getArea() const
{
    return width * height;
}

// We have this separation of files i.e. interface of the class in header file and implementation in .cpp file.
// This is because if there is some change in header file then this header file and all the files dependent on it has to be recompiled.
// But, if there is a change in implementation file, then only this file has to be recompiled and it will be linked to other files.
// Most of the times, there is a change in implementation or algorithms.
// But sometimes the interface of the class is changed.

int Rectangle::getWidth() const
{
    return width;
    // returns the width so that outside code can access the value but not change it.
}

void Rectangle::setWidth(int width)
{
    if (width < 0)
        throw invalid_argument("width");
    // In (), we write the name of the invalid argument.
    // invalid_argument is a class.

    // else width = width;
    // This expression is ambiguous as it is not clear which width is on what side of = operator.

    // So, to solve this:
    // 1. Prefix member variables with 'm_'.
    // 2. Rename the parameter(e.g. - theWidth)
    // 3. Rectangle::width
    // 4. Use this ptr.
    // this is a ptr to the current object.
    // (*this).width: To access the width member.
    // We can simplify this code: this->width

    else
        this->width = width;
}

int Rectangle::getHeight() const
{
    return height;
}
// When we have const keyword at the end of a func declaration, we tell the compiler that in this function we are not going to change the state of this object.

void Rectangle::setHeight(int height)
{
    if (height < 0)
        throw invalid_argument("height");
    else
        this->height = height;
}

Rectangle::Rectangle(int width, int height)
{
    objectsCount++;
    // Whenever an object is created, this constructor will be called.
    // So, by increaming the variable we can count the no. of objects.

    cout << "Constructing a Rectangle" << endl;
    setWidth(width);
    setHeight(height);
}

/*
Rectangle::Rectangle(int width, int height) : width{width}, height{height}
{
}
*/

// We can also initialize member variables using a member initializer list.
// We can use both () and {}.
// Also, here the expression is not ambiguous as it is clear to the compiler that parameter is written inside {} and member variable is written on LHS.
// This technique is slightly more efficient than initializing the member variables in the body of the constructor.
// This is because with this implementation, compiler creates the member variables and initializes in one go.
// It occurs in one operation.
// Getters and setters are not called so there is no validation.
// If we use previous method, then the compiler will create the variables first and then it will initialize them as a 2nd operation.

// Both of these techniques are not exclusive.
// We can initialize some variables using one technique and other variables using other technique.

/*
Rectangle::Rectangle()
{
}
*/
// Since, we have already given default values to member variables to 0, so the body of this constructor will be empty.
// In modern C++, we have another way to create a default constructor by setting it to the default keyword.
// With this way, we do not have to write the definition of this constructor.

Rectangle::Rectangle(int width, int height, string color) : Rectangle(width, height)
{
    cout << "Constructing a Rectangle with color" << endl;

    // setWidth(width);
    // setHeight(height);
    this->color = color;
}
// Here, if we copy the code of the previous constructor, there will be repetition.
// If there is some complex logic then we do not want to copy it as if in future we need to change it, we have to change it in all the places.
// In this case, we use constructor delegation.
// There is no limit on this, but it can get complicated when there is a large no. of constructor delegation.

Rectangle::Rectangle(const Rectangle &source)
{
    cout << "Rectangle copied" << endl;
    this->width = source.width;
    this->height = source.height;
    this->color = source.color;
}
// Here, we are using reference parameter because if we don't do so there will be copying of object.
// And the compiler wouldn't know how to copy the object as it will be defined in that constructor itself.
// But this approach is not good as if in future we add a new member variable then we need to remember to change it over here.
// If we don't do so, we will get bugs that are difficult to find.
// That's why, it is best to rely on the constructor that the compiler creates.

Rectangle::~Rectangle()
{
    cout << "Destructor called" << endl;
}

int Rectangle::objectsCount = 0;

int Rectangle::getObjectsCount()
{
    return objectsCount;
}
// Static functions can only access static variables.
// They belong to class so they do not have any info about the instances of the class.
