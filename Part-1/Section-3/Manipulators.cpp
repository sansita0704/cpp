#include <iostream>
#include <iomanip> // short for io manipulator
// This file stores functions for manipulating streams.

using namespace std;

int main()
{
     cout << "Spring" << "Nice" << endl
          << "Summer" << "Hot" << endl;
     // To organize these labels into columns we use stream manipulators.
     // A manipulator is a function which can be used to modify/manipulate a stream.

     cout << left;
     /*
     - Everything from this point will be left aligned.
     - Using 'left' manipulator we can align everything after it to the left.
     - We also have right manipulator but we don't have to use it as by default the data is right aligned.
     */

     cout << setw(10) << "Spring" << setw(10) << "Nice" << endl
          << setw(10) << "Summer" << setw(10) << "Hot" << endl;
     /*
     - setw() is short for set width
     - Using this func. we can reserve the no. of characters for the data which comes after it.
     - After calling it, 10 characters will be allocated for printing the word 'spring'.
     - 'left' manipulator is known as sticky manipulator as it applies to everything which comes after it.
     - But setw is not a sticky manipulator as it applies to the data which just comes after it
     */

     cout << 12.23456 << endl;
     // It gets rounded off.

     cout << fixed << setprecision(0) << 12.56337 << endl
          << 4.575 << endl;
     /*
     - fixed manipulator is used to print a floating point no.
     - It displays 6 digits after decimal point.
     - setprecision() is used to limit/specify the no. of digits after decimal.
     - fixed and setprecision manipulators are sticky manipulators.
     */

     // Exercise

     cout << setw(15) << "Course" << setw(10) << "Students" << endl
          << setw(15) << "C++" << right << setw(10) << 100 << left << endl
          << setw(15) << "JavaScript" << right << setw(10) << 50;

     return 0;
}