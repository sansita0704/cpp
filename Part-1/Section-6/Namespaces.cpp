#include <iostream>

using namespace std;

// Namespaces are like buckets in which we can place our functions in.
// Namespaces are used to group related classes, functions and variables together, providing a way to organize
// Also they help prevent naming conflicts, that means we can write functions having same name but performing different tas in a seperate namespace.
// Hence both of them will be diff from each other.
// e.g. - std namespace contains functions, classes defined in standard library
// string class is defined in std so if we create another string class that will not conflict with the string class stored in std.
// We use namespace keyword to define a namespace.

// defining a namespace
namespace math1
{
    int add(int a, int b)
    {
        return a + b;
    }

    int sub(int a, int b)
    {
        return a - b;
    }
}

namespace math2
{
    double add(double a, double b)
    {
        return a + b;
    }

    double mul(double a, double b)
    {
        return a * b;
    }
}

using math2::mul;

int main()
{
    // As add() is in math1 namespace so we have to first write math1 then only the func will be called.
    cout << math1::add(4, 5) << endl;
    cout << math1::sub(4, 5) << endl;

    // If we have to call func from the namespace multiple times then we have to write name of the namespace again and again.
    // So, to simplify our code aur reduce repetition we include the namespace at the top of the code only.

    cout << mul(4.9, 3.0) << endl;
    cout << math2::add(4, 3) << endl;
    
    return 0;
}
