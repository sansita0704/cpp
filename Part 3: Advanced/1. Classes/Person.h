#ifndef PERSON_H
#define PERSON_H

class Person
{
public:
    explicit Person(int age);

    // A constructor with only one parameter is called a converting constructor.
    // So, it can convert an int to a person.
    // Person(int age) - converting constructor.
    // explicit Person(int age) - not a converting constructor.

private:
    int age;
};

#include "Person.cpp"

#endif