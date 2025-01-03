#include <iostream>

using namespace std;

int main()
{
    // Conditional operator (?, :) is used to simplify if statements.
    // If we have an if statement like we set one variable to one value under one condition and then set it to another value under another condition.
    // In this case, we use conditional operator.

    int sales = 9000;
    double commission = (sales > 10000) ? 0.1 : 0.05;
    // If the give condition evaluates to true the the value written after ? is stored in commision.
    // If the give condition evaluates to false the the value written after : is stored in commision.

    /*
    if (sales > 10'000)
     commission = 0.1;
    else
     commission = 0.05;
    */
    // Above 4 lines can be written using ? and : in only 1 line

    cout << commission << endl;

    // Exercise

    cout << "Enter two values: ";
    int first;
    int second;
    cin >> first >> second;

    int larger = (first > second) ? first : second;
    cout << larger;

    /*
    if (first > second)
        larger = first;
    else
        larger = second;
    */

    return 0;
}
