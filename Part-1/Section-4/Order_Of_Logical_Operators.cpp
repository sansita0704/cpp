#include <iostream>

using namespace std;

int main()
{
    // Order of logical operators is:
    // !
    // &&
    // ||
    // This order can be changed using ().

    bool a = true;
    bool b = false;
    bool c = true;
    bool d = b && !a;
    // ! is higher in priority than &&.
    // So, firstly the second expression is evaluated.
    // So !a becomes false.
    // Now as one condition is false and && operator is used so entire expression becomes false no matter what the b is.

    cout << boolalpha << d << endl;

    bool e = a || b && c;
    // && is higher in priority.
    // So, first b && c is evaluated.
    // As b is false, b && c becomes false then || is evaluated.
    // As a is true the entire expression becomes true no matter what is there on RHS.

    cout << e << endl;

    bool f = (a || b) && c;
    // First a || b is evaluated which results true.
    // Then && is evaluated which also results in true.

    cout << f << endl;

    // Exercise

    bool isCitizen = true;
    bool hasBachelorDegree = false;
    short yearsOfExperience = 1;

    bool isEligible = isCitizen && (hasBachelorDegree || yearsOfExperience >= 2);
    cout << isEligible;

    return 0;
}
