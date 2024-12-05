#include <iostream>

using namespace std;

void printNumbers(int numbers[], int size)
{
    for (int i = 0; i < size; i++)
        cout << numbers[i] << endl;
}

// While calling printNumbers(), we only give the name of the array as an argument.
// And as we know that the name of an array indicates the address of the 1st element of the array.
// So, we are only passing the address of the 1st element and not the entire array.
// So, the numbers array inside printNumbers() is a ptr not an array.
// It is pointing to the 1st element of the numbers array.
// So, it does not know the length of the array.

// Since, it is a ptr, so we can't use range based for loop to iterate over the elements.
// As it is just an address so it does not makes sense to iterate over an address.
// We iterate over a sequence of elements but not over a number.

// Also size(numbers) will not give the size of the array as in the printNumbers() numbers is just a pointer.
// So, how will the size() determine the no. of elements stored in it by just knowing the address of 1st element.
// Hence we have to pass an extra parameter i.e size of the array.

// But in main(), the compiler knows the size of the array at compile-time that's why for loop works there but in a seperate func we have to give size of the array.

int main()
{
    int numbers[] = {10, 20, 30};
    printNumbers(numbers, size(numbers));

    return 0;
}
