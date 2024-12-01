#include <iostream>

using namespace std;

// Function declaration or prototype
void greet(string name);

// If we want to define a func after the main() then we have to declare it before main().
// So that compiler gets to know that there is a func named this and it is defined somewhere in the program.

int main()
{
    string name = "Sansita";
    greet(name);

    return 0;
}

// Function definition
void greet(string name)
{
    cout << "Hello " << name;
}
