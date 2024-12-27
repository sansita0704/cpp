#include <iostream>
#include <iomanip>
#include <fstream>
// All file stream classes are defined in this.

using namespace std;

int main()
{
    // File stream classes:
    // ifstream (input file stream): used to read data from file.
    // ofstream (output stream): used to write data to a file.
    // fstream (file stream): can be used for both reading and writing data to a file.

    ofstream file;
    // ofstream is a class and file is its object.
    // This class has methods.

    file.open("data.csv");
    // Used to open a file.
    // If this file doesn't exist, then it will be created and if it is already there then it will be overwritten.

    if (file.is_open())
    {
        file << setw(20) << "Hello" << setw(20) << "World" << endl;

        // We can also make CSV (Comma Separated Value) files using this.
        // It is not compulsory to write the file name as .csv.
        // But it is a good practice to do so.
        // We will write a list of movies.
        // For each movie there will be three attributes and each will be separated by comma.

        file << "id,title,year\n"
             << "1,Terminator 1,1984\n"
             << "2,Terminator 2,1991\n";

        file.close();
        // To release OS resources allocated for using this stream.
        // If we don't do so, our files will not be accesible to other programs.

        // Similar to input streams, output streams also has a buffer.
        // So, before going to console, data first goes to buffer and then buffer gets flushed out and data goes to console.
        // When we use endl, it always flushes the buffer i.e. for every line buffer gets flushed out.
        // But while using '\n', it is not flushed for every line.
        // It is only flushed once.
        // So, it is better to use '\n'.
    }

    return 0;
}