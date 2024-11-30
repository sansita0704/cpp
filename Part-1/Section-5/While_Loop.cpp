#include <iostream>

using namespace std;

int main()
{
    for (int i = 1; i <= 5; i++)
        cout << i << endl;

    // Rewriting this code using while loop

    int i = 1;
    // In while loop we can't declare loop variable inside the block of the loop.
    // Because we have to specify condition beforehand.
    // So, we have to declare it outside the loop.

    while (i <= 5)
    // As long as this condition is true the statements in {} will be executed.
    {
        cout << i << endl;
        i++;
    }

    int number = 0;
    while (number < 1 || number > 5)
    {
        cout << "Number:";
        cin >> number;
        if (number < 1 || number > 5)
            cout << "Enter a number b/w 1 and 5!" << endl;
    }
    // Here, we are not sure of how many times the code will be executed so while loop is used.
    // When we are sure about the no. of items the loop is going to be executed we use for loop.

    // Exercise

    int secret = 7;
    int guess = 0;
    while (guess != secret)
    {
        cout << "Guess: ";
        cin >> guess;
    }

    return 0;
}
