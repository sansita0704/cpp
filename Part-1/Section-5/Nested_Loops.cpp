#include <iostream>

using namespace std;

int main()
{
    for (int x = 1; x <= 5; x++)
        for (int y = 1; y <= 5; y++)
            cout << "(" << x << ", " << y << ")" << endl;

    // Star pattern

    cout << "Rows: ";
    int rows;
    cin >> rows;

    for (int i = 1; i <= rows; i++)
    {
        for (int j = 0; j < i; j++)
            cout << '*';
        cout << endl;
    }
    
    return 0;
}
