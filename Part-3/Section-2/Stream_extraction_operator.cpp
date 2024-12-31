#include <iostream>
#include "Length.h"

using namespace std;

int main()
{
    Length length{10};

    cout << "Length: ";

    cin >> length;
    cout << length << endl;
    return 0;
}