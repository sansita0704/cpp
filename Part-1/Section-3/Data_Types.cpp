#include <iostream>

using namespace std;

int main()
{
    /*
     Two types of language:

     1. Statically-Typed Language:
        - While declaring a variable, we have to specify its type and this type can't change throughout the code.
        e.g. - C++, C#, Java, etc.

     2. Dynamically-Typed language:
        - We don't have to specify any type to the variable.
        - It is determined by the value assigned to the variable.
        - That type can be changed throughout the code.
        e.g.- Python, JavaScript, Ruby, etc.

    - Go to Screenshots folder to see different types of fundamental data types.
    */
    
    double price = 99.99;
    float interestRate = 5.47f;  
    // Writing F/f after the value of the float is necessary.
    // Otherwise the compiler will treat that no. as double and then double data type will be stored in float which can cause data loss.

    long fileSize = 90000L;
    auto fileSizes = 90000; 
    // Writing L/l after the value of the variable is necessary.
    // Otherwise it will be treated as integer.
    // It can be checked by removing L and using auto keyword to declare the variable.
    
    char letter = 'a';
    bool isValid = true;  
    // boolean data type
    
    // The auto keyword in C++ automatically detects the data type and assigns a data type to the variable.
    // The compiler analyses the variable's data type by looking at its initialization.

    // We can also initialize a variable using {}
    int number = 3.5;
    cout << number << endl; 
    // number = 3 as it is of int type.

    // int number {4.6}; 
    // But when we use {} to initialize the variable, we get a compilation error.
    // So, it prevents us from initializing the variable with wrong value.

    // int n {};  
    // n will be assigned 0 automatically
    // If {} are not used it would take any garbage value

    return 0;
}
