#include <iostream>

using namespace std;

int main()
{
    // break: to break out of the loop
    // continue: to skip an iteration

    for (int i = 1; i <= 5; i++)
    {
        if (i % 3 == 0)
            continue;
        // This means that if i is divisible by 3 then we can continue to next iteration.
        // So that one iteration is skipped.

        cout << i << endl;
        /*
            if (i % 3 != 0)
             cout << i << endl;
        */
        // This code is also correct.
    }

    for (int i = 1; i <= 5; i++)
    {
        if (i % 3 == 0)
            break;
        // This means if the given condition is true the control will come out of the body of the loop.
        // Hence, premature exit of the loop takes place.

        cout << i << endl;
    }

    /*
    while (true)
    {
        cout << "Number: ";
    }
    */
    // In C++, the condition in a while loop is expected to evaluate to a boolean value (either true or false).
    // So, here the condition is always true resulting in an infinite loop.

    while (true)
    {
        cout << "Number: ";
        int number;
        cin >> number;
        if (number >= 1 && number <= 5)
            break;
        cout << "Error! Enter a number between 1 and 5." << endl;
    }
    /*
    • Working of above code:
    - The number variable has been read from the console.
    - Then if statement checks if the entered number is between 1 and 5 (inclusive) using the given condition.
    - If the condition is true, the break statement is executed.
    - This terminates the loop and the program continues with the statement written after the body of the loop.
    - If the condition is false, the code inside the if block is skipped.
    - The program executes the statement:
    cout << "Error! Enter a number between 1 and 5." << endl;
    - The loop then continues to the next iteration, repeating the same process again.
    */
    return 0;
}
