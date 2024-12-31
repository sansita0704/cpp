#include <iostream>
#include "Length.h"

using namespace std;

int main()
{
    Length length{10};

    // int x = length;
    // This does not works b/z the compiler does not know how to convert a length object to an int.
    // When we have defined the conversing func, the compiler will implicitly convert the length object to an int.
    // If we want to stop this, we have to use explicit keyword.
    // Now, when we will cast the length object into int, then only the conversing func will be called.

    int x = static_cast<int>(length);
    cout << x << endl;

    return 0;
}