#include <iostream>

using namespace std;

int main()
{
    // We can use all the comparison operators for comparing pointers.
    // In case of pointer, remember, we are only comparing addresses.

    int x = 10;
    int y = 20;

    int *ptrX = &x;
    int *ptrY = &x;

    // if (ptrX < ptrY) - comparing addresses
    // if (*ptrX < *ptrY) - comparing values

    if (ptrX == ptrY)
        // This means both the pointers are pointing to the same variable.
        cout << "Same" << endl;

    if (ptrX != nullptr)
        // Before using a pointer, we should always check whether the ptr it is nullptr or not.
        cout << *ptrX << endl;

    // Exercise

    int numbers[] = {10, 20, 30};
    int *ptr = &numbers[size(numbers) - 1];
    cout << *ptr << endl;

    while (ptr >= numbers)
    {
        cout << *ptr << endl;
        ptr--;
    }
    // In an array, the elements are stored in contiguous memory locations (next to each-other).
    // Hence the addresses of the elements are in increasing order.

    return 0;
}
