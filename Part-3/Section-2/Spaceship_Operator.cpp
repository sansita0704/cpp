#include <iostream>
#include "Length.h"

using namespace std;

int main()
{
    int x = 10;
    int y = 20;

    // if (x < y) {}
    // else if (x > y) {}
    // else {}

    // Here, we are doing 2 comparisons to know the relationship b/w x and y.
    // Comparing primitive types is cheaper but in real-life projects we could have objects having several attributes.
    // Comparing those objects would be really expensive.
    // In modern C++, we have spaceship operator or 3 way comparison operator.
    // It can be used for knowing the relation b/w diff objects using a single comparison.

    auto result = x <=> y;
    // It can be used to tell if x is < y, = y or > y.
    // The result of this operator is not a boolean as we have three outcomes less than, equal to or greater than.
    // The type of result is strong_ordering which is a class which kind of acts as an enum.
    // enum is used to grp related constants.
    // Similarly, strong_ordering has some static fields that we can access using :: operator.

    if (result == strong_ordering::less)
    {
    }
    else if (result == strong_ordering::greater)
    {
    }
    else
    {
    }
    // "result == strong_ordering::less" means x < y
    // "result == strong_ordering::greater" means x > y.
    // So, we have 2 comparisons now also.
    // But these two comparisons will be cheaper than comparing 2 objects.

    // Another reason to use <=> operator is if we overload this operator for our class.
    // Then, modern C++ compiler will automatically generate all the relational operators for us.

    Length first{10};
    Length second{20};

    if (first < second)
        cout << "less than" << endl;

    // In a nutshell, in modern C++, if we want to compare objects, we only need to overload equality and spaceship operator.

    return 0;
}