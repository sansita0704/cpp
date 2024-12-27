#include <iostream>
#include <fstream>

using namespace std;

struct Movie
{
    int id;
    string title;
    int year;
};

int main()
{
    ifstream file;
    file.open("data.csv");

    if (file.is_open())
    {
        string str;
        getline(file, str);
        // This will read the header row.
        // '>>' operator stops extracting when it encounters a blank-space.
        // But getline() stops extracting when it encounters a '\n'.

        cout << str << endl;

        // Now, to read the movies row, we need to know how many rows are there.
        // To do this, we use eof(end of file) method.
        // It returns true if we are at the end of the file.

        while (!file.eof())
        {
            getline(file, str, ',');
            // It has a third argument by which we can give a delimiter.
            // By default, it is '\n'.

            if (str.empty())
                continue;
            // If the file has a blank line, then if will skip this iteration and in the next iteration condition will become false.
            // So, it will break out of the loop.

            Movie movie;
            movie.id = stoi(str);

            getline(file, str, ',');
            movie.title = str;

            getline(file, str);
            movie.year = stoi(str);

            cout << movie.title << endl;
        }
        file.close();
    }

    return 0;
}