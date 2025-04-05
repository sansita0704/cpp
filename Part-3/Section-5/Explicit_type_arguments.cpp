#include <bits/stdc++.h>
#include <iostream>

using namespace std;

template <typename T>
T larger(T first, T second)
{
    return (first > second) ? first : second;
}

int main()
{
    auto result = larger(1, 2);
    auto ans = larger(1.1, 2.2);

    // In func templates, most of the times the compiler can guess or deduce the type of T.
    // For example, here the type of result will be int and type of ans will be double.
    // But sometimes, we need to explicitly supply an argument for T i.e. we have to tell the compiler what T represents.
    // e.g. - If we pass an int and a double to this func, the compiler would not know how to generate an instance of this template for this func call.
    // As in template, we have both the arguments of same type.
    // So, it doesn't know if it has to treat both of these values as int or double.

    // In these cases, we supply an argument for T in <>.

    auto res = larger<double>(1, 1.2);
    // Now, the compiler will treat these values as double and generate an instance accordingly.

    return 0;
}