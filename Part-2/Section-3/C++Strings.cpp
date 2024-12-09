#include <iostream>

using namespace std;

int main()
{
    string name = "Sansita";

    // string type is defined in Standard Library.
    // string is a class which internally uses a character array/c-string to hold the given string.
    // B/z C++ only has built-in types like int, float, etc.
    // It hides all the complexities of C-strings.
    // e.g. - exceeding the size of array, wasting memory, determining the size of array to be large enough and so on.
    // So, it is very easy to use.
    // e.g. - Smart pointers (unique_ptr class) are integer pointers internally but makes our work easier by deleting the ptr itself.
    // Similarly, string class also makes our works easier by managing memory and resizing the array by itself.

    name[0] = 's';
    cout << name << endl;

    // Instance of a class is called object of that class.
    // Here, name is an object of string class.
    // All the functions defined in string class can be accessed using dot operator.

    cout << name.length() << endl;
    // returns the length of string

    name += " Jain"; // Concatenation
    // string class will take care the resizing of array to hold the result.

    cout << name << endl;

    string another = name; // Copying of string

    if (name == another) // Comparison
        cout << "Same" << endl;

    string names = "John";
    if (names < name)
        cout << "less than" << endl;
    // names comes alphabatically first from name so condition is true.

    if (name.front() == 's')
        cout << "Starts with s" << endl;
    // starts_with() is in latest version of C++.
    // To access first character of string we can use front().

    cout << name[name.length() - 1] << endl;
    // To print last character of string.
    // We can use back() to easily access the last character of the string.

    if (name.back() == 'n')
        cout << "ends with n" << endl;

    cout << name.empty() << endl;
    // Returns true if the string is empty.

    return 0;
}
