#include <iostream>

using namespace std;

double calculateTax(double income, double taxRate = 0.2, double expense = 0)
{
    return income * taxRate;
}

// If we assign a default value to a parameter then it becomes optional to give the argument for that parameter while calling the func.
// If we give an argument it will overwrite the default value.
// Parameter with a default value should be declared after the parameters having no default value.
// When a parameter with a default value is declared then all the arguments after that should have a default value.
// double calculateTax(double income, double taxRate = .2, double expense); - error
// Either declare expense before taxRate or give it a default value.

int main()
{
    double taxes = calculateTax(10000);
    cout << taxes << endl;

    double tax = calculateTax(10000, .3);
    cout << tax << endl;

    return 0;
}
