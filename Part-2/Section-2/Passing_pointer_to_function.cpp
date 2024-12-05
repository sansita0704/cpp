#include <iostream>

using namespace std;

void increaseprice(double *price)
// We have deaclared a pointer as the parameter for this func.
{
    *price *= 1.2;
    // We can't multiply a ptr by a no.
    // So, we use indirection operator to access the value of the price variable.
}

void swap(int *first, int *second)
{
    int temp = *first;
    // We are not declaring t as ptr as we don't want it to point to any variable.
    // We just want to store a value temporarily in it.

    *first = *second;
    *second = temp;
}

int main()
{
    double price = 100;
    increaseprice(&price);
    // We need to add & as we can't initialize a ptr with a no.
    // So, we need to pass the address as an argument.
    // i.e double* ptr = 100 - error

    cout << price << endl;

    // Exercise

    int first = 10;
    int second = 5;
    swap(&first, &second);
    cout << first << ", " << second << endl;

    return 0;
}
