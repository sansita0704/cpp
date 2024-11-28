#include <iostream>

using namespace std;

int main()
{
    // Boolean variable is used to store/represent true or false.
    // It is really useful for coding conditions.

    bool isNewUser = true;
    // true and false are keywords in C++.
    // Internally, true and false values are represented as 1 and 0 respectively i.e true is equivalent to 1 so if we print isNewUser then we will get 1.
    // Here, instead of true we can also use 1, it will be unaffected.
    // But that is not an ideal way to work with booleans as it is difficult to understand that why 1 is used.
    
    bool isOldUser = false;
    cout << isNewUser << endl   
         << isOldUser << endl;
    
    // To see true and false on console we can use a stream manipulator boolalpha
    cout << boolalpha << isNewUser << endl   
         << isOldUser << endl; 
    // boolalpha is a sticky manipulator so it will be applied to all the boolean variables written after it.

    // to turn boolapha manipulator off, we can use noboolalpha manipulator
    cout << noboolalpha << isNewUser << endl   
         << isOldUser << endl; 

    return 0;
}
