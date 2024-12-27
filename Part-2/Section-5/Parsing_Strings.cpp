#include <iostream>
#include <sstream>

using namespace std;

struct Movie
{
    string title;
    int releaseYear;
};

Movie parseMovie(string str)
{
    stringstream stream;
    stream.str(str);

    Movie movie;
    getline(stream, movie.title, ',');
    stream >> movie.releaseYear;

    return movie;
}

int main()
{
    // Parsing: Extracting pieces of information from string.

    string str1 = "10 20";
    stringstream stream;
    stream.str(str1);
    // Now, the buffer of the stream contains "10 20".

    int first;
    stream >> first;
    // Reads all the characters in the buffer until it finds a whitespace.
    // So, it will extract 10 and store it in first.

    int second;
    stream >> second;

    cout << first + second << endl;
    stream.clear();

    // Exercise

    Movie movie = parseMovie("Terminator 1,1984");
    cout << movie.title << endl
         << movie.releaseYear;

    return 0;
}