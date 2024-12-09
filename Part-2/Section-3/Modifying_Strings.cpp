#include <iostream>

using namespace std;

int main()
{
    string name = "Sansita";

    name.append(" Jain");
    cout << name << endl;
    // Adds another string into an existing string.

    name.insert(0, "I am ");
    cout << name << endl;
    // Inserts "I am " string at 0th position.

    name.erase(0, 5);
    cout << name << endl;
    // Erases 5 characters from 0th position.

    name.replace(0, 3, "SAN");
    cout << name << endl;
    // Replaces a portion of string.
    // At 0th position, it replaces next 3 characters with "SAN".

    name.clear();
    cout << name << endl;
    // Clear up the string i.e. name = "";

    // Go to https://cplusplus.com/reference/string/string/ to see the list of all the functions defined in string class.

    return 0;
}
