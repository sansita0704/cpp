#include <iostream>

using namespace std;
// using is a directive.
// Now std is defined, so we don't have to use it before cout and endl.
// i.e without writing it again and again we can access the objects from it.

int main()
{
    int x = 10;
    int y = 20;

    cout << "x = " << x << endl
         << "y = " << y << endl;

    // Exercise

    double sales = 95000;
    cout << "Total Sales: $" << sales << "\n";

    const double stateTaxRate = 0.04;
    // Avoid writing 0.04 directly as it makes difficult to understand the code.
    // Also if, in future, we have to change its value we do not have to edit the whole code instead just edit the initialisation.
    // By declaring the rate as a constant, we can't assign any other value to that in b/w the code
    double stateTax = sales * stateTaxRate;
    cout << "State Tax: $" << stateTax << "\n";

    const double countyTaxRate = 0.02;
    double countyTax = sales * countyTaxRate;
    cout << "County Tax: $" << countyTax << "\n";

    double totalTax = stateTax + countyTax;
    cout << "Total Tax: $" << totalTax << "\n";

    // Best Practices
    // Use double data type for monetary values.
    // Separate code having different purpose using a line break.
    // Name of the variables should be meaningful.

    return 0;
}
