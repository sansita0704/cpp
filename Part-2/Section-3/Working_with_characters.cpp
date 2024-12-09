#include <iostream>

using namespace std;

bool isValid(string customerNumber)
{
    if (customerNumber.length() != 6)
        return false;

    for (int i = 0; i < 2; i++)
        if (!isalpha(customerNumber[i]))
            return false;

    for (int i = 2; i < customerNumber.length(); i++)
        if (!isdigit(customerNumber[i]))
            return false;

    return true;
}

int main()
{
    string name = " Sansita Jain";

    cout << islower(name[0]) << endl; // returns 1 if the character is lower case.
    cout << isupper(name[0]) << endl; // returns 1 if the character is upper case.

    cout << isalpha(name[0]) << endl; // returns 1 if the character is A-Z or a-z.
    cout << isdigit(name[0]) << endl; // returns 1 if the character is a digit.
    cout << isspace(name[0]) << endl; // returns 1 if there is a space at given index.

    cout << (char)toupper('a') << endl;
    cout << (char)toupper('*') << endl;
    // Here, we can use C-style casting because there is no problem for checking that if the conversion is happening or not.
    // If we pass any non-alphabatical character then that character gets displayed so in one sense conversion is taking place everytime.

    cout << (char)tolower('A') << endl;

    char input;

    // if (input == 'x' || input == 'X')
    // this can be simplified as
    
    if (tolower(input) == 'x')
        cout << "Valid" << endl;

    // Exercise

    string customerNumber = "as4536";
    cout << isValid(customerNumber) << endl;

    return 0;
}
