#include <iostream>
#include "Person.h"

using namespace std;

void showPerson(Person person)
{
}

int main()
{
    Person person{20};

    // showPerson(20);
    // If we pass an int here, then also it will work fine.
    // This happens because the compiler know that this class has a constructor which takes an int value.
    // So, an implicit conversion will occur and the compiler will convert this int to a person object which will be passed to showPerson()
    // But passing an int value in showPerson() doesn't makes sense, it looks weird.
    // In this case, we use explicit keyword to prevent the compiler to do an implicit conversion.

    return 0;
}