#ifndef SHAPE_H
#define SHAPE_H

#include <string>

using namespace std;

class Shape
{
public:
    string getBackground();
    void setBackground(const string &background);
    virtual void draw() const = 0;

private:
    string background;
};

#include "Shape.cpp"

#endif