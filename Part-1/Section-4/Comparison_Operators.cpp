#include <iostream>

using namespace std;

int main()
{
    // Comparison operators are used for comparing values.
    // eg - '>' '>=' '<' '<=' '==' '!='

    int a = 10;
    // An expression is a piece of code which produces a value.
    // So, a boolean expression is a piece of code which produces a boolean value.
    // x > 5, x <= 6, x != 4, x == 3 all are boolean expressions.
    // So, we can store the boolean result in a variable of type bool.

    bool result_1 = a > 5; // true if x > 5
    cout << boolalpha << result_1 << endl;
    // Here, we know the value of x so the result will always be true.
    // But this can be useful for checking the value of x when it is read from the console.

    int b = 5;
    bool result_2 = a != b;
    cout << boolalpha << result_2 << endl;

    int c = 5;
    bool result_3 = a == c; // checking for equality
    // If we write result_3 = a = c means we are not checking the equality but we are using the assignment operator to assign the value of c to a and then to result_3.

    cout << result_3 << endl;

    double z = 4.7;
    bool result_4 = a != z;
    cout << result_4 << endl;
    // Since comparisons happen b/w same data types.
    // That's why, here, x is first casted to double and then comparison takes place
    // So, while performing comparisons compiler will automatically convert smaller or less-precise data type to larger or more-precise data type.

    // Comparing characters

    char first = 'a';
    char second = 'A';
    bool result_5 = first == second;
    cout << result_5 << endl;
    // comparing characters in C++ is case-sensitive just like the language itself

    return 0;
}
