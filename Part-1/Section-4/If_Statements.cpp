#include <iostream>

using namespace std;

int main()
{
    // We use if statements to control the logic of our program.

    int temperature = 80;
    if (temperature < 60)
        cout << "Cold" << endl;
    // In () we give condition.
    // If the given condition is true then Cold will be displayed.
    // If the given condition is false then nothing will be displayed.

    cout << "Done" << endl;
    // No matter what the condition is, this statement will be executed as it is not a part of if block.

    if (temperature < 60)
    {
        cout << "Cold" << endl
             << "Wear warm clothes" << endl;
    }
    // To write multiple statements in if block we use {}
    // To write single statement, avoid {} to make the code more neat and clean.

    // To give more than 1 condition use else if
    else if (temperature < 90)
        cout << "Nice" << endl;
    else
        cout << "Hot" << endl;

    // Here, if the 1st condition is false that means temperature > 60.
    // Then, second condition will be checked.
    // If the temperature < 90 "Nice" will be displayed.
    // If the temperature > 90 then "Hot" will be displayed.

    // Exercise

    int sales = 15000;
    double commission;

    if (sales <= 10000)
        commission = 0.1;
    else if (sales <= 15000)
        commission = 0.15;
    else
        commission = 0.2;

    cout << commission;

    return 0;
}
