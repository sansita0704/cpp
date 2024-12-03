#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // size_t: t stands for type
    // size() and sizeof operator returns the value of type size_t.
    // size_t is a data type which represents the size of objects.
    // It is guaranteed to be large enough to store the size of largest object that the machine can handle.

    cout << sizeof(long long) << endl;
    cout << sizeof(size_t) << endl;
    // Size of both the data types is same but the values that they contain are diff.
    // long long is signed by default i.e. it can store -ve values also but size_t is unsigned i.e. it always contains +ve values so it can contain larger values.

    cout << numeric_limits<long long>::min() << endl;
    // after :: we can access the func defined in that class
    cout << numeric_limits<long long>::max() << endl;
    cout << numeric_limits<size_t>::min() << endl;
    cout << numeric_limits<size_t>::max() << endl;
    // size_t = unsigned long long (for 64-bit compiler)

    return 0;
}
