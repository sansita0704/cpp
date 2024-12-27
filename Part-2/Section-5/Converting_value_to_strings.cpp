#include <iostream>
#include <sstream>
#include <iomanip>

using namespace std;

// Overloading to_string method
string to_string(double number, int precision)
{
    stringstream stream;
    stream << fixed << setprecision(precision) << number;
    return stream.str();
}

int main()
{
    // String Stream Classes: Stream classes to work with stream.
    // istringstream
    // ostringstream
    // stringstream
    // We use these classes when we want to convert some value to string or vice-versa.

    double number = 12.34;

    // string str = to_string(number);
    // cout << str;
    // This displays 12.340000.
    // To have the full control on how this number is formatted on displaying, we have to use string streams.

    stringstream stream;
    stream << fixed << setprecision(1) << number;
    // Writes the number to the stream i.e. it is written to the buffer.

    string str = stream.str();
    // str method:
    // When called with no argument, it converts the content stored in buffer to string and returns that string.
    // When called with an argument, it replaces the content of the buffer with the content of the given string.

    cout << str << endl;

    // Exercise

    cout << to_string(number, 1);

    return 0;
}