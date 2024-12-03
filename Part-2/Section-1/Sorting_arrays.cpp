#include <iostream>

using namespace std;

void swap(int numbers[], int i, int j)
{
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}

void sort(int numbers[], int size)
{
    // If we have n elements in array we will have n passes.
    for (int i = 0; i < size; i++)
        for (int j = 1; j < size; j++)
            if (numbers[j] < numbers[j - 1])
                swap(numbers, j, j - 1);
}

int main()
{
    // In bubble sort algorithm, after each pass next largest element bubbles up and moves to its correct position.

    int numbers[] = {10, 30, 5};
    sort(numbers, sizeof(numbers) / sizeof(int));

    for (int number : numbers)
        cout << number << endl;

    return 0;
}