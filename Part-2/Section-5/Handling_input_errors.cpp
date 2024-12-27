#include <iostream>

using namespace std;

int main()
{
    while (true)
    {
        cout << "First: ";
        int first;
        cin >> first;
        if (cin.fail())
        {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            // It used to clear the failed state of cin or to put the stream into a good state.

            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            break;
    }
    // If a user enters an invalid value then our stream would go into fail state.
    // We can verify this using fail method.

    cout << "Second: ";
    int second;
    cin >> second;

    // cout << "You entered " << first << " and " << second;
    return 0;
}