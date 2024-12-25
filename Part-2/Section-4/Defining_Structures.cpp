#include <iostream>

using namespace std;

struct Movie // PascalCase
{
    string title;
    int releaseYear = 0; // default value
    bool isPopular;
};
// We are defining this structure outside the main() so that we can use it reuse in multiple functions.
// With this definition, we are not allocating any memory for the variables.
// We are just telling the compiler that a Movie structure containes these variables.
// We do not have to initialize title and isPopular because, by default, strings are initialized to null string and booleans are initialized to false.

struct Customer
{
    int id;
    string name;
    string email;
};

int main()
{
    // With structures, we can define custom data type.
    // In CS, we call this ADT i.e. Abstract data type.
    // Abstraction: A general model of something.
    // So, we can have an abstraction of a movie, a customer, etc.
    // Using structure, we can put all the related variables but with diff data types into 1 unit or container.
    // If we define variables for a movie without structure, we have to declare every variable individually and then we have to pass them to a func, resulting in a large no. of parameters of a function.

    Movie movie1;
    // When this line gets executed, the compiler allocates space for member variables of the object.
    // This movie1 is an instance of Movie type.
    // An instance of a structure, also known as an object, refers to a specific occurrence or variable of that structure type.
    // When we declare a structure, we define its blueprint or template i.e we tell the compiler that these are the member variables of this structure.
    // An instance is created when we declare a variable of that structure type, allocating memory to hold the member variables defined within the structure.
    // So an object is like a variable but it is diff from other variables as in this case, it has member variables which can be accessed or modified using dot operator.

    // Each instance of a structure holds its own set of values for the member variables, allowing us to represent and manipulate different data elements using the same structure template.

    movie1.title = "Terminator";
    movie1.releaseYear = 1984;
    // cout << movie;
    // cout is defined for built-in data types only, so compiler doesn't know how to send movie to console.

    cout << "Title: " << movie1.title << endl
         << "Release Year: " << movie1.releaseYear << endl;

    // Exercise

    Customer customer;

    cout << "Enter your ID: ";
    cin >> customer.id;

    cout << "Enter your name: ";
    cin >> customer.name;

    cout << "Enter your email: ";
    cin >> customer.email;

    cout << "ID: " << customer.id << endl
         << "Name: " << customer.name << endl
         << "Email: " << customer.email << endl;

    // To initialize a structure

    // It is always a good practice to initialise a structure otherwise its variables will get garbage value.

    Movie movie2 = {"Terminator", 1984};
    // The values are written in order of definition of structure.
    // Adding an equal sign is optional but it makes the code more readable and clear.

    // It is not compulsory to initialize all the variables but if we do not initialize releaseYear then we can't initialize isPopular because the compiler will think that 0 or 1 is given for year.

    Movie movie3 = {"Hello", 0};

    return 0;
}
