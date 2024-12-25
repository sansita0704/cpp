#include <iostream>

using namespace std;

enum Action
{
    ListInvoices = 1,
    AddInvoices,   // Assigned 2
    UpdateInvoices // Assigned 3
};
// It is custom data type used to group related constants.
// It is defined using enum keyword.
// By default, its members are assigned values 0, 1, 2 and so on.
// Members of an enumeration are called enumerators.

int main()
{
    // const int listInvoices = 1;
    // const int addInvoices = 2;
    // const int updateInvoices = 3;
    // We can group these related numeric constants into an enumeration.

    cout << "1: List invoices" << endl
         << "2: Add invoice" << endl
         << "3: Update invoice" << endl
         << "Select: ";

    int input;
    cin >> input;

    if (input == Action::ListInvoices)
        cout << "List invoices.";
    // To avoid using magic nos. we should declare numeric constants for each task.
    // We can improve this code further by using enumerations.

    return 0;
}