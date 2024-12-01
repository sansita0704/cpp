#include <iostream>

using namespace std;

// Functions are block of statements each serving a task just like different buttons of a TV remote.
// Every func has a return type which can be of any type.
// When our func does not return any value, we use void keyword.
// Inside () we write 0 or more parameters.
// We define a block of code using {} which is called body of the function.

// The advantage of using a func is that we can use it multiple times in the program.
// Parameters are the names which we have declared in func definition.
// They are like local variables of a func.

void greet(string firstName, string lastName)
{
    cout << "Hello " << firstName << " " << lastName << "!" << endl;
    // Writing parameters in () are just like declaring variables in the func body.
    // We can use parameters just as regular variable in func body.
}

void greeting(string name)
{
    cout << "Hello " << name << endl;
}

string fullName(string firstName, string lastName)
{
    // Concatenating (combining) 1 or more strings using concatenation operator '+'
    return firstName + " " + lastName;
}

// Exercise

int max(int first, int second)
{
    /*
    if (first > second)
        return first;
    else
        return second;
    */
    /*
    if (first > second)
        return first;
    
    return second;
    */
    // We do not need an else clause because if the condition is true, control will pass to the main().
    // So, the code written below will not be executed.

    // We can make it more shorter using conditional operator.
    
    return (first > second) ? first : second;
}

int main()
{
    string name = fullName("Sansita", "Jain");
    cout << name << endl;

    greet("Sansita", "Jain");
    // This is called calling, invoking or executing a function.
    // In function definition, we have declared 2 string parameters so we have to pass exactly 2 string values to the func at the time of func calling.
    // Values which we pass in func calling are known as arguments which will be stored in the parameters.

    cout << "Done with greet function" << endl;

    greeting(name);
    cout << "Done with greeting function" << endl;

    greeting(fullName("Sansita", "Jain"));
    // Here, we are reusing our fullName() to return the fullName.
    // Firstly, fullName() will be called and it will return full name which will be passed as argument in greeting().

    cout << max(2, 3);

    return 0;
}
