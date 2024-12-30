#include <iostream>

using namespace std;

int main()
{
    // Go to Screenshots folder to know about different types of number systems.
    // We use hexadecimal numbers to represent colours.

    int num = 0b11111111;
    // To represent any no. in binary system we use '0b'
    // 255 in decimal is equivalent to 11111111(8 times 1) in binary.
    cout << num << endl;

    int n = 0xff;
    // To represent any no. in hexadecimal system we use '0x'
    // 0xff is same as 0xFF
    cout << n << endl;

    int no = -40;
    cout << no << endl;

    unsigned int a = -79;
    // It will take garbage value.
    // If unsigned keyword is applied before any numerical variable it can't accept a negative value.
    cout << a << endl;

    unsigned int b = 0;
    b--; // It will take garbage value.
    cout << b << endl;

    // So we should try to not use unsigned keyword as much as possible.

    return 0;
}
