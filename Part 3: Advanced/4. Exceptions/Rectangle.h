#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <string>

using namespace std;

class Rectangle
{
public:
    Rectangle() = default;
    Rectangle(const Rectangle &source);
    Rectangle(int width, int height);
    Rectangle(int width, int height, string color);
    ~Rectangle();

    void draw() const;
    int getArea() const;
    int getWidth() const;
    int getHeight() const;
    void setWidth(int width);
    void setHeight(int height);

    static int getObjectsCount();

private:
    int width = 0;
    int height = 0;
    string color;

    static int objectsCount;
};

#include "Rectangle.cpp"

#endif