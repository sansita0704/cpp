#include <iostream>
#include "Length.h"

using namespace std;

int main()
{
    Length first{10};
    Length second{20};

    if (first < second)
        cout << "Less than" << endl;

    return 0;
}