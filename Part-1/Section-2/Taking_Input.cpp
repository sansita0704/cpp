#include <iostream>

using namespace std;

int main()
{
    cout << "Enter a value: ";
    int value;
    cin >> value;
    // cin is an object which represents standard input stream.
    // It is used to take input from the console i.e used to read the value.
    //'>>' is known as stream extraction operator as it is used to read data from the console screen.
    // If we want to read a decimel point number, we have to use double as the data type.

    cout << value << endl;

    cout << "Enter two numbers: ";
    int x;
    int y;
    cin >> x >> y;
    cout << "Sum: " << x + y << endl;

    // Exercise

    cout << "Enter temperature in Fahrenheit: ";
    double fahrenheit;
    cin >> fahrenheit;
    double celsius = (fahrenheit - 32) / 1.8;
    cout << "Temperature in Celsius = " << celsius;
 
    return 0;
}
