#include <iostream>

using namespace std;

int main()
{
    // 1. Data is const

    const int x = 10;
    const int *ptr_1 = &x;
    // Type of pointer and the variable to which it is pointing should be same.
    // So, if the data type of variable is const int, then ptr should be also of the type const int.

    // *ptr = 80;
    // Above line of code will give an error as x is a const.

    int y = 20;
    ptr_1 = &y;
    // Here, x is a const but ptr is not because initally, it was pointing to x but now it is pointing to y.

    // 2. Pointer is const

    int a = 10;
    int *const ptr_2 = &a;
    // Const pointer should always be initialized as after that we can't change its value anywhere else in the code.

    int b = 20;
    // point = &b;
    // Above line of code will give an error as ptr_2 is a const pointer.

    // 3. Both data and pointer are const

    const int p = 10;
    const int *const ptr_3 = &x;
    // ptr_3 is a const pointer pointing to a const int.

    return 0;
}
