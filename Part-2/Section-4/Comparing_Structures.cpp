#include <iostream>

using namespace std;

struct Date
{
    short year = 1900;
    short month = 1;
    short day = 1;
};

struct Movie
{
    string title;
    Date releaseDate;

    // Method: A function defined within a structure or is a part of an object.

    bool equals(const Movie &movie)
    // To confirm that this func is not able to change the value of any member variable of movie we declare it as const.
    {
        // returns true if all the condition are true
        return (
            title == movie.title &&
            releaseDate.year == movie.releaseDate.year &&
            releaseDate.month == movie.releaseDate.month &&
            releaseDate.day == movie.releaseDate.day);
    }
};

int main()
{
    Movie movie1 = {
        "Terminator",
        {1984, 6, 2}};

    Movie movie2 = {
        "Terminator",
        {1984, 6, 2}};

    // if (movie1 == movie2)
    // Above line gives an error as '==' operator is not defined to compare structures.
    // So, to compare 2 objects we have to compare each element of those objects.

    if (movie1.title == movie2.title &&
        movie1.releaseDate.year == movie2.releaseDate.year &&
        movie1.releaseDate.month == movie2.releaseDate.month &&
        movie1.releaseDate.day == movie2.releaseDate.day)
        cout << "Equal" << endl;

    /*
    Problems with this method of comparing:

    1. If, somewhere else in our code, we have to compare more objects we have to write this big if statement again making our code lengthy and harder to manage.
    2. If in future we have to add a new member to the structure we have to change all the if statements.
    */

    if (movie1.equals(movie2))
        // equals() gets called for movie1 and movie2 is passed as an argument.
        cout << "Equal";

    return 0;
}
