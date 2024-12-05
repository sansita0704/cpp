#include <iostream>
#include <array>

using namespace std;

int main()
{
    // We use arrays to store a sequence of objects in memory.

    int numbers[] = {10, 20, 30};
    // To iterate through the elements of this array we can use range-based for loop.
    // But in some cases (like copy and compare array), we have to access elements using their index.
    // In that case, we have to use a for loop.

    for (int i = 0; i < size(numbers); i++)
        // The size() returns the number of elements or characters present in a container (array, class, etc.) or string.
        // It is defined in std namespace.
        cout << numbers[i] << endl;

    // To copy an array

    int first[] = {1, 2, 3};

    /*
    int second[] = first;
    */
    /*
    int second[3];
    second = first;
    */
    // Both these block of code will give an error.
    // Because in C++, we can't assign an array to another array.
    // As the name of the array represents the address of the array so if we are writing second = first then in one way we are changing the address of the second array which is not possible.
    // Also at one location two arrays can't exist.
    // So in C++, we can't initialize an array using another array.
    // If we want to copy an array we have to copy each element of first array at a given position to the second array at that same position.

    int second[size(first)];

    for (int i = 0; i < size(first); i++)
        second[i] = first[i];

    for (int number : second)
        cout << number << endl;

    // Comparing arrays

    /*
    if (first == second)
        cout << "equal";
    */
    // This condition does not makes sense as the name of the array represents its address.
    // So, the condition will always be false as the address of two arrays can't be same.
    // So to compare two arrays we need to compare each element of the arrays.

    bool areEqual = true;

    for (int i = 0; i < size(first); i++)
        if (first[i] != second[i])
        {
            areEqual = false;
            break;
            // If this condition is true, that means one of the element is not same.
            // So, there is no need to compare other elements and we can break out of the loop.
        }

    cout << boolalpha << areEqual << endl;

    return 0;
}
