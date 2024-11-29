#include <iostream>

using namespace std;

int main()
{
    // Nesting if-statement: Giving a condition inside a condition i.e writing 1 if-statement inside other.

    bool isCitizen = true;
    bool caResident = true;
    short tution = 0;

    // Outer if statement
    if (isCitizen)
    // While using boolean variable, we don't have to compare them with true or false.
    // isCitizen == true is same as writing only isCitizen
    // i.e if isCitizen will be true the given statements will be executed.
    // isCitizen == false is same as writing !isCitizen.
    // i.e. if isCitizen is false !isCitizen will be true and statements written inside the if block will be executed.
    {
        // Inner if statement
        if (!caResident)
            tution = 1000;
        // It is not required to check if the person is ca resident or not because at the time of declaration we have initialized tution to 0.
    }
    else
        tution = 3000;

    cout << tution;

    return 0;
}
