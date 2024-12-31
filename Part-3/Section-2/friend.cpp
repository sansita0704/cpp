#include <iostream>

using namespace std;

int main()
{
    // Sometimes, outside functions of a class need to access private attributes of the class that don't have a public getter or setter.
    // We don't want to generate a getter and setter for those attributes as it is like the complex ckt board of the remote.
    // We do not want to expose them to outside functions.
    // In these cases, we declare those outside functions as the friend of the class.
    // Then, they are able to access the private members of the class.
    // We do this by adding the friend keyword before func declaration.

    return 0;
}