#include <iostream>

using namespace std;

// Problem with the classic enum is that we can't have two enums with same members.
// To solve this problem, we can use strongly typed enumerations.
// To do this, we have add a class keyword.

enum class Action
{
    List = 1,
    Action,
    Update
};

enum class Operation
{
    List = 1,
    Action,
    Update
};

int main()
{
    cout << "1: List invoices" << endl
         << "2: Add invoice" << endl
         << "3: Update invoice" << endl
         << "Select: ";

    int input;
    cin >> input;

    if (input == static_cast<int>(Action::List))
        cout << "List invoices.";
    // Classic enums get implicitly converted to integers.
    // So, we can use them with == operator.
    // But this is not the case with strongly typed enums.
    // So, we have to cast it to an integer.

    return 0;
}