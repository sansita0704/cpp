#include <iostream>

using namespace std;

template <typename T>
T larger(T first, T second)
{
    return (first > second) ? first : second;
}
// In this func template, we only have one type of parameter i.e. "T".
// We can have multiple parameters to represent diff types of parameters of a func.

template <typename K, typename V>
void display(K key, V value)
{
    cout << key << " = " << value << endl;
}
// When we want multiple parameters in a template, we use T, U, V and so on for their name.
// But here, letters K and V makes more sense.

int main()
{
    display("a", 1);
    display(1, 1);
    // So, we can pass any type of argument that supports << operator.

    return 0;
}