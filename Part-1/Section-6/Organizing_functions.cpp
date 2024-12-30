#include <iostream>
#include "Utils/greet.hpp"
#include "Utils/greet.cpp"
// To include files from Utils folder

using namespace std;
using namespace messaging;

using messaging::greet;
using std::cout, std::cin;
// To include only a particular function of a namespace.
// This should be done only when we run into conflicts like having functions with same name in more than one namespace.

int main()
{
    // As we have more and more functions in one file it gets difficult to organize it so we divide our project in diff files each performing a task.
    // Separating func in files makes our main file smaller hence easy to maintain.
    // Also when we have one task in one file we can reuse that file in any other project.

    greet("Sansita");
    return 0;
}
