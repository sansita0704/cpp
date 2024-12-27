#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    fstream file;
    file.open("file.txt", ios::in | ios::out | ios::app | ios::binary);
    // Arguments:
    // 1. Name of the file.
    // 2. Modes: Each mode is separted by '|'
    // ios::in: To open the file in reading mode.
    // ios::out: To open the file in writing mode.
    // ios::app: To append to the file.
    // ios::binary: To open the file in binary mode.

    if (file.is_open())
    {
        file.close();
    }

    // The only difference is that while using ifstream we do not have to specify the mode as it assumes the reading mode by default.

    return 0;
}