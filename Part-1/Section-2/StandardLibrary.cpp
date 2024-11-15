#include <iostream>
#include <cmath>
// cmath is a file in STL that has many mathematical functions defined in it.

using namespace std;

int main()
{
    double result = floor(1.2);
    cout << result << endl;

    // Exercise

    cout << "Enter the radius of the circle: ";
    double radius;
    cin >> radius;
    const double pi = 3.14;
    double area = pi * pow(radius, 2);
    cout << "Area of the circle: " << area;

    return 0;
}

// Go to https://www.w3schools.com/cpp/cpp_ref_math.asp to see all the functions defined in cmath file.
// Comments are used to clarify our code.
// It makes the code easier to understand.
// They are not compiled.
/* ... */
// used to give multi line comment.
// use comments to explain why(s) and how(s)
