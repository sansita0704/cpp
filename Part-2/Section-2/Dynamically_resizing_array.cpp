#include <iostream>

using namespace std;

int main()
{
    int capacity = 5;
    int *numbers = new int[capacity];
    int entries = 0;
    // entries is used to keep the track of the elements entered by the user and is used as index of elements.

    while (true)
    {
        cout << "Number: ";
        cin >> numbers[entries];
        if (cin.fail())
            break;
        // cin.fail() returns a boolean value.
        // If cin.fail() returns true, it means that the input operation has failed.
        // This can happen if the user enters invalid data or the input is incompatible with the variable type.

        entries++;
        if (entries == capacity)
        // This means our array is full.
        {
            /*
            • To dynamically resize an array:
            1. Create a temp array (twice the size).
            2. Copy all the elements from numbers array to temp array.
            3. Have 'numbers' pointer point to the new array.
            */

            capacity *= 2;
            int *temp = new int[capacity];
            for (int i = 0; i < entries; i++)
                temp[i] = numbers[i];
            delete[] numbers;
            // Frees up the memory allocated to 5 integers in heap.
            // Now, numbers is a nullptr.

            numbers = temp;
            // Now, numbers pointer points to the same address to which temp was pointing to.
            // So, now new array can be accessed using numbers pointer.

            // Earlier, numbers pointer was pointing to let's say a memory location having address = 100.
            // And temp was pointing to memory location having address = 200.
            // 100: [i i i i i]
            // 200: [i i i i i i i i i i]

            // Now, we have copied all the elements from 100 to 200 and made numbers pointer point to the memory location having address = 200.
        }
    }

    for (int i = 0; i < entries; i++)
        cout << numbers[i] << endl;

    delete[] numbers;
    // If we do not enter in "if (entries == capacity)" this if block then new array will not be created so our initial memory that we allocated to the array will be deleted.

    return 0;
}
