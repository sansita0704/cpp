#include <iostream>

using namespace std;

// Creating functions with same name but diff parameters is known as func overloading.
// It helps us write more easy to read and understand code having func performing similar operations but on diff no. and type of values.

void greet(string name)
{
    cout << "Hello " << name << endl;
}

// This is like another version of greet() which can have any no. or type of parameter
void greet(string title, string name)
{
    cout << "Hello " << title << " " << name << endl;
}
// The name parameter declared here is completely different and independent from the one declared above.

// Signature of a function = name of func + (no. and type of parameters)
// Each overloaded func should have a unique signature (name of parameter does not matter).

int main()
{
    greet("Sansita");
    greet("Miss", "Sansita");

    return 0;
}
