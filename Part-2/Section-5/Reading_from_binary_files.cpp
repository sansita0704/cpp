#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    int numbers[3];
    ifstream file("numbers.bin", ios::binary);
    if (file.is_open())
    {
        int number;
        while (file.read(reinterpret_cast<char *>(&number), sizeof(number)))
            cout << number << endl;
        // We are saying that read "sizeof(numbers)" these number of bytes from the file and store it at "reinterpret_cast<char *>(&numbers)" this location in memory.
        // But in real world we don't know how much data is there in a file.
        // So, we read a number one by one using loop.
        // read() returns a reference to an input stream (istream& read()).
        // read method returns false if the input operation is failed (e.g. - if we reach the end of the file.)
        // In each iteration, it reads the next 4 bytes and stores it in number and then prints it.

        file.close();
    }

    return 0;
}