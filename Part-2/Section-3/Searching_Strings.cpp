#include <iostream>

using namespace std;

int main()
{
    string name = "San,sita,";

    cout << name.find('a') << endl;
    // Returns the position/index of first occurence of given character.

    cout << name.find('a', 2) << endl;
    // Returns the position/index of first occurence of given character from the given position.
    // So, here searching will start from 2nd position (i.e from 'n').

    cout << name.find('A') << endl;
    // This () is case-sensitive.
    // So, above statement returns a big no. which is equivalent of index = -1 that means the given character doesn't exist.
    // find() returns a value of type size_t so if we store -1 in size_t variable then because of underflowing the value will be converted to the largest value which can be stored in it.
    // That's why we see a big no. on console screen

    // t = unsigned long long
    size_t t = -1; // underflowing
    cout << t << endl;

    if (name.find('A') == -1)
        cout << "Doesn't exist" << endl;

    cout << name.find("sita") << endl;
    // Returns the first occurence of the string "sita" in name.

    cout << name.rfind('a') << endl;
    // reverse find() works just like find() but searches from end of the string.
    // Hence, returns first occurence of the given character from reverse dir.

    cout << name.find_first_of(",.;") << endl;
    // It is similar to find() but it can be used to find set of characters.
    // So, if 1st character is not found then it will start to search for next character.

    cout << name.find_last_of(",.;") << endl;
    // It is similar to rfind() so it finds the last occurence of a character in a given string.

    cout << name.find_first_not_of(",.;") << endl;
    // It starts from the start of the string and returns the position/index of the character diff from the given character.
    // Here, the first character is diff from ",.:" so it will return 0.

    cout << name.find_last_not_of(",.;") << endl;
    // It starts from the end of the string and returns the position of the character diff from the given character.

    return 0;
}
