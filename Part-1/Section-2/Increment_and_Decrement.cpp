#include <iostream>

int main()
{
    int x = 10;
    x++;
    // x = x + 1 is same as x++
    // '++' - increment operator and '--' - decrement operator
    std::cout << x << "\n";

    int y = x++;
    // Postfix increment : First the value of x is assigned to y and then value of x is incremented by 1.
    // y = 11, x = 12
    
    int z = ++x;    
    // Prefix increment : first the value of x is incremented by 1 and then it is assigned to z.
    // z = 12, x = 12 (When line 'int y = x++;' is not executed)

    std::cout << x << "\n";
    std::cout << y << "\n";
    std::cout << z << "\n";
    return 0;
}
