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
    bool isPopular;

    // << and == these operators are implemented for built-in data types so we can't use them for structures
    // to implement them for structures we need to overload them which is known as operator overloading
    // To overload an operator, we use operator keyword and define a func as a member func of a particular structure.
    // Doing this, we tell the compiler to perform that specific operation whenever it encounters that operator with objects of that structure.
    // Now, when we use '==' in main() with Movie objects, the compiler knows to look for an overloaded operator func which is defining the operation to perform with the type of objects used.
    // In this case, it finds that func so it translates 'movie1 == movie2' this statement to a call to the operator==() and passes movie2 as an argument to it the function then returns the result after comparison.
    // That's how operator overloading works.

    /*
    bool operator==(const Movie& movie) const
    // By adding const keyword at the end of method declaration, we have made the method constant.
    // So, now we can't write title = "a";

    {
        return (
            title == movie.title &&
            releaseDate.year == movie.releaseDate.year &&
            releaseDate.month == movie.releaseDate.month &&
            releaseDate.day == movie.releaseDate.day
        );
    }
    */
};

// We can also overload the operator outside the structure

bool operator==(const Movie &first, const Movie &second)
// As we have made both the objects const so there is no need to add const after func declaration.
{
    return (
        first.title == second.title &&
        first.releaseDate.year == second.releaseDate.year &&
        first.releaseDate.month == second.releaseDate.month &&
        first.releaseDate.day == second.releaseDate.day);
}

// It is better to overload operator outside a structure due to two reasons:
// 1. Some operators (like <<) cannot be overloaded inside a structure so we can consistently overload all the operators outside the structure.
// 2. It makes our code more readable that we are taking two object first and second and then comparing each of their members.

ostream &operator<<(ostream &stream, const Movie &movie)
{
    stream << movie.title;
    return stream;
}
// ostream is short for output stream.
// This func takes a movie object writes it to a stream and returns the stream.
// This stream can be cout or something else depending on where we use it.
// If we write << operator with cout then this stream will be cout else it can be different.
// We have to return the stream so that we can do chaining of << operator.

struct Point
{
    int x;
    int y;
};

bool operator==(const Point &first, const Point &second)
{
    return (
        first.x == second.x &&
        first.y == second.y);
}

ostream &operator<<(ostream &stream, const Point &point)
{
    stream << "(" << point.x << ", " << point.y << ")";
    return stream;
}

int main()
{
    Movie movie1 = {
        "Terminator",
        {1984, 6, 2}};

    Movie movie2 = {
        "Terminator",
        {1984, 6, 2}};

    if (movie1 == movie2)
        cout << "Equal" << endl;

    cout << movie1 << endl;

    Point x = {2, 4};
    Point y = {2, 4};

    if (x == y)
        cout << "Equal" << endl;

    cout << x << endl
         << y;

    return 0;
}

// Go to  https://en.cppreference.com/w/cpp/language/operators to learn more about operator overloading.