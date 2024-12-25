#include <iostream>
#include <vector>

using namespace std;

struct Movie
{
    string title;
    int releaseYear = 0;
    bool isPopular;
};

int main()
{
    // Movie movies[5];
    // All the elements of this array will be of Movie type.

    // Vector is a dynamic array with the ability to resize itself automatically when an element is inserted or deleted.
    // vector class is a generic class using which we can create a dynamic array.
    // So it can resize and manage memory by itself so that we do not have to.
    // It is defined in STL.

    vector<Movie> movies;
    // In '<>', we write the type of structure.

    movies.push_back({"Terminator 1", 1984});
    // Adds an object at the end of the vector.
    // We can create a movie object and then pass it as an argument or we can give brace initializer as an argument.
    // As we have defined earlier, that we will store Movie objects in this vector.
    // So, it will automatically create a Movie object and initialize it with the arguments given.

    movies.push_back({"Terminator 2", 1991});
    cout << movies[0].title << endl;

    // To loop over this vector

    for (const auto &movie : movies)
        // const ensures that movie object can't be modfied
        // In each iteration, each element of movies vector i.e an object of Movie type will be stored in movie object, if & is not there.
        // Using &, movie object will act like a reference to the elements of movies vector.

        cout << movie.title << endl;

    return 0;
}
