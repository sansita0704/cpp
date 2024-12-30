#include <iostream>

int main()
{
    // Variables are used to temporarily store data in the computer's memory.
    // Variable is the name of the location in the memory in which value can be stored which is changeable.

    int file_size;
    // Variable declaration of integer type.

    file_size = 100;
    // Assigning value.

    double sales = 9.99;
    // Variable initialization = Declaration + Assigning the value
    // double: used to store decimal values.

    std::cout << file_size << "\n";
    std::cout << sales << "\n";

    int price = 0;
    std::cout << price << "\n";
    // If the variable is not initialized, it takes a garbage value.
    // So, we should initialize our variables everytime before using them.

    // int a = 0, b = 1;
    // We can initialize more than one variable on the same line by separating them with comma.
    // But as a best practice, we should always initialize or declare each variable on a separate line.

    // Exercise
    int a = 1;
    int b = 2;
    int temp = a;
    a = b;
    b = temp;
    std::cout << a << "\n";
    std::cout << b << "\n";
    return 0;
}