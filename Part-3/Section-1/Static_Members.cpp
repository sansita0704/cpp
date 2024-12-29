#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
    // Instance members: These members belong to the instances of a class.
    // So, every object has its own copy of these members.

    // Static members: These members belong to the class itself.
    // So, there will be a single copy of these members in the memory and it will be shared among all the instances of the class.

    Rectangle first{10, 20};
    Rectangle second{10, 30};
    cout << Rectangle::getObjectsCount() << endl;
    // Since, static members belong to class, we access them through class name and '::'.

    return 0;
}