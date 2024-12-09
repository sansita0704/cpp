#include <iostream>

using namespace std;

int main()
{
    string name = "Sansita Jain";

    string copy = name.substr();
    // To copy a string.
    // B/z both the parameters of substr() has a default value.
    // So, when we will call it, it will return the copy of the entire string.

    cout << copy << endl;

    // These 2 strings (copy and name) are 2 independent strings.
    // name = "";  // This will not affect copy.

    string subString1 = name.substr(8);
    cout << subString1 << endl;
    // Extracts the entire string from the index = 8.

    string subString2 = name.substr(8, 3);
    cout << subString2 << endl;
    // Extracts only 3 characters from the index = 8.

    // Exercise
    auto index = name.find(' ');
    cout << index << endl;

    string firstName = name.substr(0, index);
    cout << firstName << endl;

    string lastName = name.substr(index + 1);
    cout << lastName << endl;

    // If we have a name having a middle name then the last name = middle name + last name.
    // To correct this we have to use rfind() to find the space from end of the string.
    // So that first name = first name + middle name.

    return 0;
}
