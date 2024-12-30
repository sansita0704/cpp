#include <iostream>

using namespace std;

int main()
{
    int number;
    // In while loop, first condition is checked then the execution takes place.
    // So if the condition is false, there will be no execution of statements within {}.
    // But in do-while, first the statements inside the {} are executed once, then condition is checked.
    // So here, execution always takes place at least once.
    // The task that can be performed using while loop can also be performed using do-while loop.

    do // {} are always used
    {
        cout << "Number: ";
        // In C++ a variable is accessible only in the block in which it is declared.
        // If we declare number here then it will be only valid in the body of do.
        // As a result, we will not be able to use it in while statement.
        // When we declare it in main() it is accessible anywhere in main().

        cin >> number;
    } while (number < 1 || number > 5);

    return 0;
}
