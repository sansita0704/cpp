#include <iostream>
#include "Length.h"
#include "Point.h"

using namespace std;

int main()
{
    Length first{10};
    Length second{20};

    Length third = first + second;
    cout << third << endl;

    // Exercise

    Point a{10, 20};
    Point b{10, 20};

    Point c = a + 3;
    Point d = a + b;
    cout << c << endl
         << d << endl;

    return 0;
}