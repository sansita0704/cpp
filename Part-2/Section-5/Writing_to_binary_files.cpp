#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    // Types of files:
    // Text Files
    // Binary Files (images, audio files, PDFs, etc.)
    // Binary files are not human readable as they store data in the same way as it is stored in the memory.
    // We deal with them when we have to store non-textual data like numbers.
    // e.g. - An image is made up of pixels and these pixels have numeric values.
    // That's why, images are representated using binary files.

    int numbers[] = {1'000'000, 2'000'000, 3'000'000};

    // ofstream file;
    // file.open("numbers.txt");
    // We can combine both the above lines into a single line.

    /*
    ofstream file("numbers.txt");
    if (file.is_open())
    {
        for (auto number: numbers)
            file << number << endl;
        file.close();
    }
    */

    // When we write this array to a text file then in each line there are 7 digits + a new line character.
    // So, each line contains 8 characters and there are 3 lines in total.
    // So, total size of the file = 8 * 3 = 24.

    ofstream file("numbers.bin", ios::binary);
    // To create a binary file, we can use .bin (for binary) or .dat (for data).
    // As the second argument, we have to add the mode of the file.
    // binary is a const defined in the ios class.
    // It is used to open the file in the binary mode.

    if (file.is_open())
    {
       file.write(reinterpret_cast<char*>(&numbers),  sizeof(numbers));
        // To write to a binary file, we use write method.
        // It has two parameters.

        // 1. const character ptr: It is the address of the part of the memory that we want to write to.
        // Here, we want to go to that part of the memory where numbers array are located.
        // Then, we want to grab the bytes allocated to this array and write it to the disk in the same way as it is written in the memory.
        // But, we cannot use numbers ptr as it is an int ptr and we want a char ptr.
        // To convert it to a char ptr we use an operator called reinterpret_cast.
        // In '<>', we specify the type of the ptr.
        // So using "reinterpret_cast<char*>(&numbers)" this expression, we are representing the address of numbers using a char ptr.

        // 2. Number of bytes we need to read from the memory and write to the disk.

        // The size of the binary file = 12 bytes.
        // This is because an int takes 4 bytes of memory so 3 int takes 12 bytes of memory.
        // That's why if we have a large amt of data, we should write it to a binary file. 

        file.close();
    }

    return 0;
}