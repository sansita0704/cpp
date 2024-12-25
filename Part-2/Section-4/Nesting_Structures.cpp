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

    // To represent date of release, we have to use these variables but it would be good to store all 3 related details into another structure so that we can use it whenever needed.
    /*
    int releaseYear = 0;
    int releaseMonth = 0;
    int releaseDay = 0;
    */

    Date releaseDate;
    bool isPopular;
};

struct Address
{
    string street;
    string city;
    int zipCode;
};

struct Customer
{
    int id;
    string name;
    string email;
    Address address;
};

int main()
{
    Movie movie = {"Terminator 1", 1984};
    cout << movie.releaseDate.year << endl;
    // Compiler automatically set 1984 as year

    // To initialize date

    // 1st way
    Date date = {1984, 6, 2};
    movie = {"Terminator 1", date};

    // 2nd way - brace initializer
    movie = {
        "Terminator 1",
        {1984, 6, 2}};
    // Each member on a new line.

    // Exercise

    Customer customer =
        {
            1,
            "Sansita",
            "sansita@gmail.com",
            {"Street",
             "Los Angeles",
             9806}};

    return 0;
}
