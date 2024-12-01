#include <iostream>

using namespace std;

const double taxRate = 0.2;
// It is global variable and has global scope.
// To prevent any change in the value of this variable by other func we can declare it as const.

double calculateTax(int sales)
{
    return sales * taxRate;
    // As taxRate is a global variable so we do not have to pass it as argument instead we can use it directly.
}

int main()
{
    // Local Variable is local to a particular func i.e they are accesible in that func or block of code only.
    // they are said to have local scope.
    // Global Variable is declared outside all the func so they are accesible by all the func.
    // They can be very difficult to manage sometimes so as a best practice we should avoid them as much as possible or use global constant instead of variables.

    int sales = 10000;
    double tax = calculateTax(sales);
    cout << tax;

    return 0;
}
