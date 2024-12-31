#include "Point.h"

Point::Point(int x, int y) : x{x}, y{y}
{
}

int Point::getX() const
{
    return x;
}

int Point::getY() const
{
    return y;
}

void Point::setX(int x)
{
    this->x = x;
}

void Point::setY(int y)
{
    this->y = y;
}

bool Point::operator==(const Point &second) const
{
    return (x == second.x) && (y == second.y);
}

Point Point::operator+(int value) const
{
    return Point(x + value, y + value);
}

Point Point::operator+(const Point &point) const
{
    return Point(x + point.x, y + point.y);
}

Point &Point::operator++()
{
    x++;
    y++;
    return *this;
}

Point Point::operator++(int)
{
    Point copy = *this;
    operator++();
    return copy;
}

ostream &operator<<(ostream &stream, const Point &point)
{
    stream << "(" << point.getX() << ", " << point.getY() << ")";
    return stream;
}