#include <bits/stdc++.h>
#include <iostream>
#include "Pair.h"

using namespace std;

int main()
{
    numeric_limits<int>::max();
    // numeric_limits class is defined as a template.
    // So, while using this class we specify name of a data type in <>.
    // Then, access its static members using :: operator.

    Pair pair{"a", 1};
    // When we create this object, the compiler will generate a pair class where the key is a string and the Value is an int.
    // So, just like func template, if we don't create an object of Pair class then the compiler will not generate any code for Pair class in executable.

    return 0;
}