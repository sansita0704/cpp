#include <iostream>

using namespace std;

void printNumbers(int numbers[])
{
     numbers[0] = 0;
}

int main()
{
     int numbers[] = {10, 20, 30};
     // Here, numbers is a pointer to the first element of this array.

     cout << numbers << endl
          << &numbers[0] << endl
          << *numbers << endl;
     // *numbers = numbers[0]

     int *ptr = numbers;
     // Compiler treats numbers as an integer ptr so we can initialize ptr with numbers.
     // So now ptr also points to the 1st element of the array

     cout << ptr << endl      // same as numbers
          << *ptr << endl     // same as *numbers
          << &ptr[1] << endl; // same as numbers[1]

     // When we write ptr[1], numbers[1] is printed because compiler knows that ptr points to the 1st element of the array.
     // Therefore, ptr[1] means the value of the 2nd element of the array.
     // As a result, it performs arithmetic operations to get the address of the 2nd element and then access the value at that address.
     // It just adds (1 * size(int) = 4) to the address of 1st element to get the address of the 2nd element.

     printNumbers(numbers);
     // Arrays are always passed by reference because we pass a pointer not the entire array.
     // So any changes we make inside the func will be visible outside the func also.
     // This is done for efficiency as the array can contain many elements so copying each element is not a good way to do the task.

     cout << numbers[0] << endl;

     return 0;
}
