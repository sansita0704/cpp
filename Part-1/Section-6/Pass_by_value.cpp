#include <iostream>

using namespace std;

double increasePrice(double price)
{
    price *= 1.2;
    return price;
}
// Parameters of a func are like local variables of that func i.e their scope is only within the func body.
// Here the two variables having same name i.e price, are 2 diff variables having diff scope
// Also, their location in the memory is diff.

int main()
{
    double price = 100;
    increasePrice(price);
    cout << price << endl;

    // When increasePrice() is called, a copy of the value stored in the price variable is taken and is stored in the price variable declared in the body of increasePrice()
    // After updating the value, it is stored in the price variable(increasePrice function's local variable).
    // In the main(), we are printing price (main function's local variable) that's why we can't see the updated price.

    double increasedPrice = increasePrice(price);
    cout << increasedPrice << endl;

    return 0;
}
