#include <iostream>

using namespace std;

short search(int numbers[], int size, int target)
{
    for (int i = 0; i < size; i++)
        if (numbers[i] == target)
            return i;
    return -1;
}

int main()
{
    // In linear search algorithm, the best case is when the target value is the first element of the array then we only have to compare once.
    // The worst case is when the target value is the last element of the array then we have to compare n times (n: size of array)
    // This is called linear search algorithm because as the size of the array increases the cost of the algo also increases linearly
    // The cost of an algorithm refers to the amount of resources, such as time and space, required to execute the algorithm.

    int numbers[] = {10, 20, 30};
    short index = search(numbers, sizeof(numbers) / sizeof(int), 10);
    cout << index;

    return 0;
}