#include <iostream>

using namespace std;

int main()
{
    // Converting strings into nos. can be useful for performing any mathematical operation on it.

    double price = stod("19.x99x");
    // s is short for string and d, i, f indicates target type.
    // When the string is not of proper type then this () does not work properly so we need to pay attention to that.

    cout << price << endl;

    string str = to_string(19.9); // conversion of nos to string.
    
    cout << str << endl;

    return 0;
}
