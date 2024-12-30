#include <iostream>

using namespace std;

int main()
{
    // Loops are used to repeat a set of instructions.
    // for is a keyword.
    // In () we write 3 statements:
    // 1. Initialization: We initialize loop variable (or counter variable) used in the loop to determine the no. of times the loop will run.
    // It's a convention to call this variable i.
    // 2. Condition: We give a boolean expression or condition.
    // Till the condition is true the loop will run.
    // 3. Updation: It determines how the value of i changes after every iteration or repetition.
    // Then we add the statements that we want to repeat.

    for (int i = 0; i < 5; i++)
        cout << i << endl;
    // Displays no. 0 to 4

    for (int i = 1; i <= 5; i++)
        cout << i << endl;
    // Displays no. 1 to 5

    for (int i = 5; i > 0; i--)
        cout << i << endl;

    // To display odd nos
    for (int i = 1; i <= 5; i++)
        if (i % 2 != 0)
            cout << i << endl;

    // Factorial of a no.
    cout << "Enter a positive number: ";
    int number;
    cin >> number;

    if (number < 0)
        cout << "Error! Number is not positive.";
    else
    {
        int factorial = 1;
        for (int i = 2; i <= number; i++)
            factorial *= i;
        cout << "The factorial of " << number << " is: " << factorial << endl;
    }
}
