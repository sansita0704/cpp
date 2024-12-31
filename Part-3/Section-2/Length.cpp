#include "Length.h"
#include <iostream>
#include <compare>
#include <ostream>
#include <istream>

using namespace std;

Length::Length(int value) : value{value}
{
}

bool Length::operator==(const Length &second) const
{
    return value == second.value;
}

bool Length::operator==(int second) const
{
    return value == second;
}

Length Length::operator+(const Length &second) const
{
    return Length(value + second.value);
}

Length &Length::operator+=(const Length &second)
{
    value += second.value;
    return *this;
    // Here, we need to return the 'first' Length object.
    // So, we have to de-reference this ptr.
}

Length &Length::operator=(const Length &second)
{
    cout << "Object assigned" << endl;
    value = second.value;
    return *this;
}

Length &Length::operator++()
{
    value++;
    return *this;
}

Length Length::operator++(int)
{
    Length copy = *this;
    operator++();
    return copy;
}

Length::operator int() const
{
    return value;
}

int Length::getValue() const
{
    return value;
}

void Length::setValue(int value)
{
    this->value = value;
}

ostream &operator<<(ostream &stream, const Length &length)
{
    stream << length.getValue();
    return stream;
}
// Here, we can't directly use private member of the Length class so we use getter.
// We return the stream so that we can chain << operator.
// In main(), the stream that we write with << operator, gets passed as an argument in this function.
// Then, it displays value attribute on console.
// Then, it returns stream i.e. cout in this case so that same process gets repeated and we can chain << operator.
// cout << 1 << 2 << 3;
// cout << 2 << 3;
// cout << 3;

istream &operator>>(istream &stream, Length &length)
{
    int value;
    stream >> value;
    length.setValue(value);
    return stream;
}

/*
bool Length::operator!=(const Length &second) const
{
    return !(value == second.value);
}

bool Length::operator!=(int second) const
{
    // return value != second;
    // We will not implement it like this b/z if in future, we change the logic for comparing two length objects then we need to change the code at several places.

    return !(value == second);
}
*/

strong_ordering Length::operator<=>(const Length &second) const
{
    return value <=> second.value;
}

/*
bool Length::operator<(const Length &second) const
{
    return value < second.value;
}

bool Length::operator<=(const Length &second) const
{
    return !(value > second.value);
    // In terms of > operator.
    // So, we are delegating to the > operator.
}

bool Length::operator>(const Length &second) const
{
    return value > second.value;
}

bool Length::operator>=(const Length &second) const
{
    return !(value < second.value);
}
*/