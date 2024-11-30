#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {1, 2, 3};

    /*
    for (int i = 0; i < 3; i++)
        cout << numbers[i] << endl;
    */
    // If we have to add any extra element in array in future then we have to change the condition.
    // So, to make it general, we use sizeof().

    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++)
        // sizeof(numbers): 12
        // sizeof(int): 4
        // So, by dividing these values we get the no. of items in the array.
        cout << numbers[i] << endl;

    // When we have these kind of list of items and we have to iterate over them then we use range based for loops.

    for (int number : numbers)
        cout << number << endl;
    // The loop variable number is going to hold any 1 item from the array in each iteration.
    // ':' is the range-based for loop syntax, which specifies that number will be assigned to the each element in numbers one by one.
    // And then it will be printed on a seperate line.
    // Here, we don't work with index rather we work on actual integers.

    // Range based for loop on strings

    string name = "Sansita Jain";
    for (char ch : name)
        cout << ch << endl;
    // here ch is storing each character of the string in each iteration

    // Exercise

    int temperatures[] = {4, 51};
    double sum = 0;
    for (int temperature : temperatures)
        sum += temperature;
    short count = sizeof(temperatures) / sizeof(int);
    double average = sum / count;
    cout << average;

    return 0;
}
