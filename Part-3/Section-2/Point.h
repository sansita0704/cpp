#ifndef POINT_H
#define POINT_H

#include <ostream>

using namespace std;

class Point
{
public:
    Point(int x, int y);
    int getX() const;
    int getY() const;
    void setX(int x);
    void setY(int y);
    bool operator==(const Point &second) const;
    Point operator+(int value) const;
    Point operator+(const Point &point) const;
    Point &operator++();
    Point operator++(int);

private:
    int x;
    int y;
};

ostream &operator<<(ostream &stream, const Point &point);

#include "Point.cpp"

#endif