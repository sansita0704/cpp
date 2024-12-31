#include <iostream>
#include "SmartPointer.h"

using namespace std;

int main()
{
    SmartPointer ptr{new int};
    *ptr = 10;
    cout << *ptr << endl;
    *ptr = 20;
    cout << *ptr;

    return 0;
}