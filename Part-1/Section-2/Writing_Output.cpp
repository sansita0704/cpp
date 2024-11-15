#include <iostream>

int main()
{
    int x = 10;
    int y = 5;

    std::cout << "x = " << x << std::endl;
    std::cout << "y = " << y << std::endl;
    // This is called chaining of multiple stream insertion operators.

    // '::' - namespace
    // cout is an object which represents standard output stream.
    // Stream means sequence of characters.
    // Standard output is the console or terminal window.
    // So, using cout we can display a sequence of characters on the console window.
    // '<<' is known as stream insertion operator as it is used to insert something on the console screen.
    // double quotes is used to display a string of characters.
    // endl stands for end of the line

    // Shortened way
    std::cout << "x = " << x << std::endl
              << "y = " << y;
    return 0;
}
