#include <iostream>

using namespace std;

struct Movie
{
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main()
{
    Movie movie = {"Terminator", 1984};

    auto [title, releaseYear, isPopular]{movie};
    /*
    Above one line is equivalent to:
    string title = movie.title;
    int releaseYear = movie.releaseYear;
    bool isPopular = movie.isPopular;
    */
    cout << isPopular;

    return 0;
}
