#include <iostream>

using namespace std;

void printOddNumbers(int limit)
{
    for (int i = 0; i < limit; i++)
    {
        if (i % 2 != 0)
            cout << i << endl;
    }
}

int main()
{
    // Debugging is the process of finding bugs in our code.
    printOddNumbers(10);

    // Breakpoint is the point where the execution stops during the debugging process.
    return 0;
}
