#include <iostream>

int main()
{
    // Order of operators: the operator which is higher in order will be evaluted first.
    // * and /
    // + and -
    // This order of evaluation can be changed using ()

    int a = 1 + 2 * 3;   // a = 7
    int b = (1 + 2) * 3; // b = 9
    std::cout << a << "\n";
    std::cout << b << "\n";

    int x = 10;
    double y = 5;
    double z = (x + 10) / (3 * y);
    // the whole expression 3 * y is our denominator so enclose it in ()
    // if we do not enclose it in () 3 will be the denominator and then the result will be multiplied by y
    // i.e 'z = (x + 10) / 3 * y' is incorrect

    std::cout << z << "\n";
    return 0;
}
