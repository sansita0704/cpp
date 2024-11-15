#include <iostream>

int main()
{
    int a = 10;
    int b = 3;
    int c = a + b;
    // '+' is called addition operator and a and b are called operands.
    // Similarly, a - b, a * b can be used.

    std::cout << c << "\n";

    int q = a / b; // displays quotient
    std::cout << q << "\n";
    // As a and b are integers, result will be an integer.
    // But in reality the division of 10 and 3 will result in a floating point number (no. with a decimel).
    // Even if the data type of c is double, then also we get 3 because the result of division of 2 integers is always an integer.
    // We have to convert either a or b to double and q to double.
    // If q is not of double type and a or b is of double type then also the result will be of integer type as q can't store value of double type.

    int r = a % b; // displays remainder
    std::cout << r << "\n";
    // Both the operand should be int because % operator yields the remainder after integer division i.e it works only on integer values
    // Or we can say that % operator displays the remainder after performing division on integers.

    a = a + 5;
    // First a + 5 will be evaluated, then the result will be stored in a.

    std::cout << a << "\n";
    return 0;
}
