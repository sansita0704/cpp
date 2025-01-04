#include <iostream>
#include "Array.h"
#include "Pair.h"

using namespace std;

int main()
{
    Array<int> intArray{3};
    // Just by providing the size of the array, compiler is unable to understand the type of array we want to create.
    // So, we have to explicitly supply an extra argument.

    intArray[0] = 1;
    cout << intArray[0] << endl;

    Array<string> strArray{3};
    strArray[0] = "Hello World!";
    cout << strArray[0] << endl;

    Array<Pair<string, int>> pairArray{3};
    // Pair is a class template with 2 type parameters.
    // So, in <> we need to supply the arguments for these parameters.
    // Here, we are getting an error as we do not have a default constructor in Pair class.
    // So, the compiler doesn't understand what values to pass to the constructor.

    pairArray[0] = {"a", 1};

    return 0;
}