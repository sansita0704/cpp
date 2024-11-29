#include <iostream>

using namespace std;

int main()
{
    cout << "Enter two numbers: ";
    int first;
    int second;
    cin >> first >> second;

    cout << "Enter an operator: ";
    char op; // operator is a reserved keyword in C++
    cin >> op;

    switch (op)
    {
    case '+':
        cout << first + second;
        break;

    case '-':
        cout << first - second;
        break;

    case '*':
        cout << first * second;
        break;

    case '/':
        cout << first / second;
        break;

    case '%':
        cout << first % second;
        break;

    default:
        cout << "Invalid Choice.";
    }

    return 0;
}