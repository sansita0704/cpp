#include <iostream>

using namespace std;

int main()
{
    // We use arrays to store a collection of elements.
    // Array is the collection of similar data types.

    int numbers[5];
    // As array contains more than 1 item, so we give it a plural name.
    // In b/w the [], we give the no. of data items which we store in an array.
    // It will allocate the space for 5 integers right next to each-other in memory at the same address/location.
    // We can access these using their index.
    // If we don't initialise it, it's elements will be initialized to 0.
    // Index of first element of array is 0
    // Index of last elememt is = (size of array - 1)

    cout << numbers << endl;
    // It will display address of the array.
    // The output is in hexadecimel no. as it starts with 0x.
    // The no. written after 0x is the address of the array in the memory.

    cout << numbers[5] << endl;
    // It will give garbage value as last element of this array is numbers[4].

    // To initialise a particular element in the array.
    numbers[1] = 10;
    cout << numbers[1] << endl;

    // Initialisation of an array
    int array[] = {10, 39, 49};
    cout << array[1] << endl;

    int arr[5] = {1, 4};
    // If we have all the values of array then we do not have to give the size of the array.
    // As the compiler will determine size by itslf.
    // But if we want to reserve the space for some integers then give the size and initialize others.
    // As a result remaining integers will be initialised to 0 by default.
    cout << arr[3] << endl;

    int ar[4] = {};
    // all the elements will be initialized to 0.

    // Exercise

    string names[3];

    cout << "Enter first name: ";
    cin >> names[0];

    cout << "Enter second name: ";
    cin >> names[1];

    cout << "Enter third name: ";
    cin >> names[2];

    cout << names[0];
    return 0;
}
