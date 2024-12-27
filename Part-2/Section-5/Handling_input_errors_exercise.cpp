#include <iostream>

using namespace std;

int getNumber(const string &prompt, const int &min, const int &max)
{
    while (true)
    {
        cout << prompt;
        int number;
        cin >> number;
        if (cin.fail() || number < min || number > max)
        {
            cout << "Enter a valid number!" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        else
            return number;
    }
}

int main()
{
    int first = getNumber("First: ", 2, 10);
    cout << first;
    return 0;
}