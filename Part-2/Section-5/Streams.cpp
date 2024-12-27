#include <iostream>

using namespace std;

int main()
{
    // In real-life applications, we want to read and write data from various sources other than terminal.
    // Different data sources are:
    // Terminal
    // File
    // Network
    // To make it easier, STL is defined in such a way that we can work with all the data sources in the same way.

    // Streams are like a data source or a destination.
    // We have various streams:
    // istream
    // ostream
    // ifstream
    // ofstream
    // istringstream
    // ostringstream

    // All of them have the same interface meaning that they have same functions and we can work with them in the same way.
    // This happens because all of these classes inherits functionalities from the same class ios.
    // Go to https://cplusplus.com/reference/ios/ios/ to learn more about them.

    // Streams are sequence of bytes which acts as a mediator for data flow between program and input or output device.
    // It can be thought as a pipeline that can either send data from one place to another or can retrieve it.
    // Data Source (Input Stream): It can bring data into the program using an externel source.
    // Data Destination (Output Stream): It can send data to an externel destination.

    cout << "First: ";
    int first;
    cin >> first;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "Second: ";
    int second;
    cin >> second;

    cout << "You entered " << first << " and " << second;

    // All these input streams have a buffer i.e. a temporary storage in memory for reading values.
    // First, the entered values goes to buffer.
    // Buffer = [10 20]
    // Now, cin starts to read the value from the buffer until it gets a blank space.
    // So, it will extract 10 from the buffer, convert it to a number and then store it in first.
    // Buffer = [ 20]
    // Now, it will display the next message and now since the buffer is not empty the program will not wait for the use to enter any value.
    // It will extract 20 from the buffer and store it in second.

    // To solve this problem we can use ignore method.
    // It is a member function of input streams which is used to ignore or clear characters from the buffer.
    // It takes two arguments and both are optional.
    // First one takes a streamsize value which represents the no. of characters to ignore.
    // Second is a delimiter character which ignores the characters till it encounters the specified character.
    // It will do any of the task whichever comes first.

    // Here it discards up to 10 characters from the input buffer or stops when it encounters a newline character ('\n'), whichever comes first.
    // This is required because after the user enters a value for first, they press the Enter key, which leaves a newline character ('\n') in the input buffer.
    // If we don't clear this leftover newline, it could interfere with subsequent input, such as reading second with cin.

    // But if the use enters more than 10 characters after the blank space then again same problem will occur.
    // To solve this, we can use numeric limits class to  access the max value of the streamsize variable i.e. the type of the first argument of ignore().
    // Then pass it to ignore(). 

    return 0;
}