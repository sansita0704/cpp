#include "Rectangle.h"
#include <iostream>

using namespace std;

void Rectangle::draw() const
{
    cout << "Drawing a rectangle" << endl;
    cout << "Dimensions: " << width << ", " << height << endl;
}

int Rectangle::getArea() const
{
    return width * height;
}

int Rectangle::getWidth() const
{
    return width;
}

void Rectangle::setWidth(int width)
{
    if (width < 0)
        throw invalid_argument("The width cannot be negative!");
    if (width > 100)
        throw out_of_range{"The width cannot be greater than 100!"};

    this->width = width;
}

int Rectangle::getHeight() const
{
    return height;
}

void Rectangle::setHeight(int height)
{
    if (height < 0)
        throw invalid_argument("height");
    this->height = height;
}

Rectangle::Rectangle(int width, int height)
{
    objectsCount++;
    cout << "Constructing a Rectangle" << endl;
    setWidth(width);
    setHeight(height);
}

Rectangle::Rectangle(int width, int height, string color) : Rectangle(width, height)
{
    cout << "Constructing a Rectangle with color" << endl;
    this->color = color;
}

Rectangle::Rectangle(const Rectangle &source)
{
    cout << "Rectangle copied" << endl;
    this->width = source.width;
    this->height = source.height;
    this->color = source.color;
}

Rectangle::~Rectangle()
{
    // cout << "Destructor called" << endl;
}

int Rectangle::objectsCount = 0;

int Rectangle::getObjectsCount()
{
    return objectsCount;
}