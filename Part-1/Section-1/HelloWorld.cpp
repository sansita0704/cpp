/*
• IDE (Integrated Development Environment)
- It is an application which consists of an editor for writing the code and build and debugging tools.

• main()
- Like our TV Remote has several buttons for different purposes like changing the channel or increasing the volume, etc.
- Similarly, a C++ program can also contain different functions each serving a task.
- There is a special function called main() which is the entry point of our program.
- It is like the power on button of our remote.
- C++ is a case-sensitive language i.e. it is sensitive to uppercase and lowercase.
- Before the name of the main(), we write the type of the value that it is going to return.
- int: integer values
- When this program is going to run, the main() will be executed and it will return a value.
- The value it returns will determine if our program has executed successfully or not.
- After the func name we write a pair of parenthesis in which we write its parameters.
- Every func can have one or more parameters.

Note: Whitespaces are generally ignored in C++ i.e. if we have one or ten spaces, it doesn't really matter.
- But, we should add one space to format our code professionally.

- Then we add a pair of curly braces in which we write code which gets executed when our func is executed.

• STL (Standard Library)
- It is a library of code which has some prewritten code which we can directly use in our programs.
- It has different files which has different capabilites.
e.g. - iostream has the capability of taking input from the user and printing something on the screen.
*/

#include <iostream>

int main() {
    std::cout << "Hello, world!"; 
    // This is called a statement.
    // 'std' is short for standard library.
    // It is like a bucket or container for the features that are currently available to us.
    // The features which we have included on the top.
    // 'std::' opens/shows all the features which has been imported by us.

    // 'cout' is short for character out.
    // It is used to output one or more characters on the screen.
    // Just like we terminate a sentence using a full stop, in C++ we do that using a semi-colon.
    
    return 0;     
    // returned value tells the os if the program is run successfully or not. 
    // if there is an error it will return any value other than 0.
}
/*
- While compiling the code, we convert it to the machine code (code written in binary language) which is understood by the machine and could be run by the machine.
- Machine code is like in the native language of an OS which could be understood by that Os only.

- Console or terminal window is the screen on which we see the output of our program.
*/
