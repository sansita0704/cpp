#include <iostream>

using namespace std;

int main()
{
    // For making decision:
    // If statement
    // Switch statement

    cout << "1 - Create account" << endl
         << "2 - Change password" << endl
         << "3 - Quit" << endl
         << "Select an option: ";

    short input;
    cin >> input;

    switch (input)
    // switch is a keyword.
    // In () we write the name of the variable.
    {
        // Inside this block, we write case labels for comparing values.

    case 1:
        // After this, we write statements which has to be executed if input = 1.

        cout << "You selected 1";
        break;
    case 2:
        cout << "You selected 2";
        break;
    default:
        cout << "Goodbye!";
        // We don't need a break statement here as there aren't any statements after it.
        // So the control will automatically pass to the statements following {}.
    }
    /*
    • default label
    - The statement we write in default label are executed when none of the other cases are executed.
    • Usage of break statment:
    - We write it to terminate the switch statement.
    - If we don't add break then subsequent statements will also get executed even though the value of the variable is not matched.
    */

    if (input == 1)
        cout << "You selected 1";
    else if (input == 2)
        cout << "You selected 2";
    else
        cout << "Goodbye!";

    // In switch statement we can only do equality comparison i.e whether a variable = 1 or 2.
    // But in if statement we can give any condition.

    return 0;
}
