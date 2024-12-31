#include <iostream>
#include "Array.h"

using namespace std;

int main()
{
    // Subscript operator []: used to access individual elements in an array using their index.

    Array array{10};
    array[0] = 1;
    cout << array[10] << endl;

    return 0;
}