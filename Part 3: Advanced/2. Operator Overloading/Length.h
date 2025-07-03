#ifndef LENGTH_H
#define LENGTH_H

#include <compare>
#include <ostream>
#include <istream>

using namespace std;

class Length
{
public:
    Length() = default;
    explicit Length(int value);

    bool operator==(const Length &second) const;
    // Since, the result of an equality operator is true or false so return type is bool.
    // For performance reasons, we have used a reference parameter.
    // We only need one parameter because this func will be a member func of first object so it can access first.
    // So, we only need to pass second object.

    bool operator==(int second) const;
    // In C++, we should only use reference parameter for our custom types and not for our primitive types like int and float.
    // This is b/z there is no such performance gain in this.

    // bool operator!=(const Length &second) const;
    // bool operator!=(int second) const;

    strong_ordering operator<=>(const Length &second) const;
    // bool operator<(const Length &second) const;
    // bool operator<=(const Length &second) const;
    // bool operator>(const Length &second) const;
    // bool operator>=(const Length &second) const;

    Length operator+(const Length &second) const;
    Length &operator+=(const Length &second);
    // Here, we are not creating a new object.
    // So, we will not return by value.
    // We are modifying an existing object, so we will return a reference variable or object.
    // This object will refer to the existing object 'first'.

    Length &operator=(const Length &second);
    Length &operator++();   // prefix
    Length operator++(int); // postfix
    // In postfix, firstly a copy of the variable is returned so we will not use a reference variable.
    // We have used an int parameter just to tell the compiler that this implementation is for postfix increment.

    explicit operator int() const;
    // This conversing func does not have a return type and parameter.
    // After the keyword operator, we write the target type i.e. int.

    int getValue() const;
    void setValue(int value);

    // friend ostream &operator<<(ostream &stream, const Length &length);
    // We are telling the length class that it is your friend so now it can access its private members.

private:
    int value;
};

ostream &operator<<(ostream &stream, const Length &length);
// It has to be declared outside the Length class.
// In operator overloading, if an operator is overloaded as a member func of a class, then it must be a member func of the object on the left side of the operator.
// As we have done in == and <=> operator.
// In this case, on LHS of << operator, we have cout which is an output stream.
// It is an object of the class ostream.
// So, this func should be declared in ostream class.
// But that is a part of STL.
// We don't have access to it so we can't change it.
// So, it is declared as a global function.

istream &operator>>(istream &stream, Length &length);

#include "Length.cpp"

#endif