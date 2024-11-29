#include <iostream>

using namespace std;

int main()
{
    // Logical operators (&&, ||, !) - used for combining 2 or more boolean expressions or conditions.

    int age = 20;

    bool isEligible = age > 18 && age < 65;
    cout << boolalpha << isEligible << endl;
    // With and operator (&&), if both the expressions or conditions are true then only the result will be true.
    // If either of the condition is false then the result will be false.
    // Here, if age = 10 so first condition is false so no matter what the second condition is, the result will always be false.
    // That's why to increase efficiency the compiler will stop evaluating after checking for the first condition.
    // So, it goes from left to right.

    bool ifEligible = age > 18 || age < 65;
    cout << ifEligible << endl;
    // With or operator(||), if either of the condition is true then the result will be true.
    // Here, if age = 10, first condition is false but because second condition is true so the result is true.

    cout << !ifEligible << endl;
    // Not operator(!) is used to reverse a boolean value.
    // So if ifEligible is true !ifEligible is false and vice-versa.

    int salary = 50000;
    bool result = (age > 18 && age < 65) && (salary > 30000);
    // It is not required to add () but to make code more readable we should add ().
    // So it can be easily understood that there are 2 major conditions.
    // 1st one is based on age and the other is based on salary.

    cout << result << endl;

    bool res = (age > 18 && age < 65) || (salary > 30000);
    cout << res << endl;
    // res will be true if either age is b/w 18 and 65 or salary > 30,000

    return 0;
}
