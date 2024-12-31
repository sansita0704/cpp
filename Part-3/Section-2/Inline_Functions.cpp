#include <iostream>

using namespace std;

int main()
{
    // When we define a member func of a class inside the class, we refer it to an inline func.
    // With this we are telling the compiler to replace all the func calls with the code written inside the func.
    // With this, there is slight performance boost.
    // This is b/z when a func gets called there is a control pass to the definition of the func.
    // Then it comes back to main();
    // This has a bit of overhead.
    // So, inline functions help us to remove this small overhead.

    // This does not mean that we should define all the func in header file.
    // To reduce compilation time, we should implement all the algorithm or logic in cpp file.
    // Also, defining the func in the class, creates clutter.
    // So, by seeing the public section of the class, we can't tell what are the features that this class provides.
    // We will be distracted by all the complexities.

    // As a best practice, we should keep this file as simple as we can.
    // If we want to declare the func inline, outside the class, we should use inline keyword in func definition.

    // This is not compulsory that this replacement of code will happen.
    // It is upto the compiler to decide if this will happen or not.
    // We should only use this with very simple functions.
    // Preferably, with the one liner func.
    // If there are more lines then one func call will be replaced with those lines.
    // So, the size of executable file and our application will increase.
    // Due to which performance can suffer.

    return 0;
}