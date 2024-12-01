#include <iostream>

using namespace std;

// In C++, by default, the arguments are passes by value.
// But when our arguments contain large values, it is better to skip the copying of the value instead we call it using reference to increase the efficiency of our code.
// string& name - This is called a reference parameter.
// It references an existing value.

void greet(const string& name)
// When we are not using reference parameter here entire string is copied again in the memory at another location.
// Hence, increase in time and space in memory and decrease in efficiency.

{
    cout << "Hello " << name << endl;
    // name = "a";
    // To prevent this accidental error, we can set name to const.
}

void increasePrice(double &price)
{
    price *= 1.2;
}
// Using &, address of the price variable is passed to increasePrice().
// Then the compiler creates an alias of price variable named price which will refer to the same address as of the price variable of the main() and then increasePrice() modifies alias of the price.
// As both the price variables are essentialliy on the same location, changing one will directly affect the other.
// As a result our original price variable is modified.
// price (increasePrice() variable) acts as an alias or another name for the original variable.
// i.e their names may or may not be diff but their address or location is same in the memory.
// So now there is no copying but the actual variable's value is modified by the func.

int main()
{
    double price = 100;
    increasePrice(price);
    cout << price << endl;

    string name = "Sansita";
    greet(name);
    cout << name << endl;

    return 0;
}
