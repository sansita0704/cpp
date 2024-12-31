#include <iostream>
#include "Length.h"
#include "Point.h"

using namespace std;

int main()
{
     // Binary Operators: have 2 operands.
     // Unary Operators: have 1 operand.

     Length first{10};
     Length second = ++first;
     cout << "First: " << first << endl
          << "Second: " << second << endl;

     Point a{10, 20};
     Point b = ++a;
     cout << "a: " << a << endl
          << "b: " << b << endl;

     return 0;
}