#include <iostream>

using namespace std;

int main()
{
    /*
    // An escape sequence is the sequence of characters that are written represent some special characters.
    // '\\' is an escape sequence.
    // Using a backslash, we can escape the following character which can be any special character.
    */

    string str = "c:\\my folder";
    // In string literal '\' has a special meaning so to include '\' in string we need to use '\\'.

    cout << str << endl;

    string str1 = "\"Hello World!\"";
    cout << str1 << endl;
    // Here, we are escaping double quotation mark using backslash.

    string str2 = "'Hello World!'";
    cout << str2 << endl;

    char ch = '\'';
    cout << ch << endl;

    string str3 = "Hello\nWorld"; // for adding a new line.
    cout << str3 << endl;

    string str4 = "Hello\t\t\tWorld"; // for adding a tab.
    cout << str4 << endl;

    // Raw string is a string literal that allows us to include special characters without adding escape sequences.
    // Using raw string we can make our code more readable and manageable.
    // Whatever we write inside parenthesis, it will be displayed as it is.

    string str5 = R"("c:\folderA\folderB\file.txt")";
    cout << str5 << endl;

    return 0;
}
