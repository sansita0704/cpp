#include <bits/stdc++.h>
#include <iostream>

using namespace std;

template <typename T>
T larger(T first, T second)
{
    return (first > second) ? first : second;
}
// To make this a func template we use template keyword.
// Inside <>, we define template parameter just like we define a func parameter.
// Its type will be class or typename.
// These are keywords.
// Both are same, we can use anyone but in modern C++, we prefer typename keyword as it tells that the type of this parameter can be anything.
// It doesn't have to be a class.
// It can be a primitive type as well.

// Next, we give it a name.
// By convention, we give it "T".

/*
int larger(int first, int second)
{
    return (first > second) ? first : second;
}

double larger(double first, double second)
{
    return (first > second) ? first : second;
}
*/

int main()
{
    // cout << larger(1.1, 1.2) << endl;

    // Problem:
    // Let's say we have a func which returns larger of two numbers.
    // Now, we want to pass variables or objects of diff data type in it.
    // So, we have to overload it.
    // This way, we will have more code to maintain and if there is a bug in our code, we have to fix it at multiple places.
    // This is where function template comes to the rescue.

    // Using function templates, we can define a func in a flexible way.
    // So that it can work with diff data types.
    // Hence, our func will be generic.

    // Advantages of func template:
    // 1. Less code to maintain.
    // 2. Bug fixing is easier.
    // 3. The size of our executable file reduces.
    // This is b/z if we do not call this func anywhere in our program, the compiler is not going to generate instances of this func template in our executable.
    // So, this is not going to be included in our executable.

    larger(1, 2);
    larger("a", "b");
    larger(1.1, 2.2);
    larger(1.1, 2.2);

    // If we call this func and pass two double values, then the compiler would generate an instance of this func template that takes two double values and returns a double.
    // If we again call it with two double, it will not generate the instance again.
    // It will reuse the instance that was generated when 1st line was executed.

    // In func overloading, we might overload a func 20 times but end up using only one of the overload.
    // This is not the case with func template.

    return 0;
}