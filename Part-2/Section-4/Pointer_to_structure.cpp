#include <iostream>

using namespace std;

struct Movie
{
    string title;
    int releaseYear = 0;
    bool isPopular;
};

Movie getMovie()
{
    return {"Terminator", 1984};
}

void showMovie(Movie *movie)
{
    // cout << (*movie).title;
    cout << movie->title;
}
// We have de-reference the movie pointer because it stores a number(a memory address).
// And a memory address does not have members.
// Also, we have to wrap it in parenthesis because dot operator has a higher priority than de-reference operator.
// So, to force the compiler to evalute * operator first, we have to wrap it in ().

// We can simplify this code by using structure-pointer operator (->) in place of dot operator.
// Firstly, it de-references the pointer and then it gives the access to the members of the object.

int main()
{
    Movie movie = getMovie();
    showMovie(&movie);
    return 0;
}