#include <iostream>

using namespace std;

int main()
{
    // string name = "Sansita";
    // All the functionalities of string type are defined in string header file.
    // But we do not have to include it because whenever we include iostream, string is also included.

    // C strings or C style strings is a special type of character array.
    // As C style string is a character array, so its size is fixed.
    // But when we use string type its size can be changed as per our requirement.
    // It can automatically resize itself and can handle memory management also.

    // 1st way of initialization

    char name[8] = {'S', 'a', 'n', 's', 'i', 't', 'a'};

    cout << strlen(name) << endl;
    // null terminator(\0) is a special character using which we represent end of the string.
    // If it is not there then it will be treated as a char array and not a C string.

    // 2nd way of initialization using string literal.
    // literal means value
    // string literal is a sequence of characters enclosed within ""

    char myName[50] = "Sansita";

    myName[0] = 's';
    // character literal represents a character enclosed within ''

    cout << myName[0] << endl;
    cout << myName << endl;

    /*
    name of an array is a pointer to its 1st element but here when we print name and myName whole string is displayed
    as cout is defined in such a way that whenever we display name of character array using cout, it does not display address
    instead it treats array as a null-terminated string so it starts to display its character stored at the address to which the
    pointer is pointing to and countinues to displays characters stored after that until it encounters \0
    */

    // All the functions required to work with c-strings are defined in cstring file
    // With iostream, it is also included.

    cout << strlen(myName) << endl; // displays the length of string.
    // It only counts till null-terminator.

    char lastName[] = "Jain";

    // With c-string we can't use + operator to combine string.

    strcat(myName, lastName);
    // Concatenate/combines 2 strings i.e takes 2nd string (which is a const char so it can't be modified) and stores it in 1st string (which is not const)

    cout << myName << endl;
    // We did not get error here for the size of the myName to be small to contain lastName but we should give large size to myName.
    // Otherwise, in complex programs we could gets bugs due to this.

    strcpy(myName, lastName);
    // Takes 2nd string (which is a const char) and copies it in 1st string (which is not const)

    cout << myName << endl;

    int x = strcmp(myName, name);
    // If name comes 1st alphabatically then it will return a negative value.
    // When both are equal then it will return 0.
    // If myName comes 1st alphabatically then it will return a positive value.

    cout << x << endl;

    if (strcmp(myName, lastName) == 0)
        cout << "Equal";

    return 0;
}
