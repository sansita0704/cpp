#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {10, 20, 30};
    int *ptr = numbers;
    ptr++;

    // If ptr = 100, then when it is incremented by 1, it actually becomes 104 (instead of 101).
    // This is b/z we know that an int takes 4 bytes of memory so 1st element takes 4 bytes so its address is 100 - 103.
    // Now if the ptr becomes 101 then it will point somewhere in b/w the 1st element which does not makes sense (how can we read a value from the middle of an int).
    // That's why it becomes 104 so that it points to the beginning of the 2nd element.
    // This behaviour of pointer, to automatically increment by the size of data type to which it points, ensures that when we access any value through pointer in array it does not give any garbage/wrong value and we can easily navigate through array

    cout << *ptr << endl;
    // output = 2nd element

    ptr--;
    cout << *ptr << endl;
    // output = 1st element

    cout << *(ptr + 1) << endl;
    // same as ptr[1] and numbers[1]
    // In reality, compiler takes ptr[1] and converts it into *(ptr + 1) and then displays the value at that address.
    // We should always use bracket notation to make the code more easier to understand.

    // We can only add or subtract pointer, can't multiply or divide them by a no.

    return 0;
}
