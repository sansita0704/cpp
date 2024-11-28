#include <iostream>
#include <limits>

using namespace std;

int main()
{
    cout << sizeof(int) << endl;
    // sizeof() returns the no. of bytes required to store a data type in the machine.

    // calling min() from a class called 'numeric_limits'.
    cout << numeric_limits<int>::min() << endl
         << numeric_limits<int>::max() << endl;

    // Classes are like building blocks of the program.
    // numeric_limits is a generic class so we have to type <> after its name and then specify a data type.
    // We type :: to access members of this class.

    int number = numeric_limits<int>::max();
    number++;
    cout << number << endl;
    // When the value stored in a data type is more than the range of that data type then the value is wrapped around to the lowest value which the data type can have.
    // This is called Overflowing.
    // This is similar to a bucket overflowing, when we add too much water in it.

    int num = numeric_limits<int>::min();
    num--;
    cout << num << endl;
    // When the value stored in a data type is less than the range of that data type then the value is wrapped around to the highest value which the data type can have.
    // This is called Underflowing.

    return 0;
}
