#include <iostream>

using namespace std;

int main()
{
    // Conversion of data from one type to another is known as casting.

    int a = 1;
    double b = 3.2;
    double c = a + b;
    cout << c << endl;
    // Only same data types can be added so here the compiler automatically converted a to double to perform the addition operation.
    // This is fine because double is more precise and takes more space in memory
    // As a result, the conversion of int to double does not result in data loss.
    // When a is converted into double then a + b is evaluated and then the result is stored in c.

    int d = a + b;
    cout << d << endl;
    // Here also, a is converted into double and a + b is evaluated and the result is double.
    // This double value has to be stored in int type variable (i.e d) so it is converted into int.
    // So we get d = 4 i.e. we encountered a data loss.

    int x = 2;
    double y = 2.0;
    int z = x + y;
    cout << z << endl;
    // We get z = 4 so no data loss.
    // int is less precise and occupies less space so this conversion may or may not result in data loss.

    // Whenever there is a possibility of data loss, it is a best practice to use type casting through which we tell the compiler to convert a value from one data type to other.
    // It is like we are explicitely telling the compiler that it is ok if we are having some data loss.

    int s = x + (int)y;  // c-style casting
    cout << s << endl;
    // in () we write the target type.
    // Not all conversions are possible.
    // So, if the conversion is not possible then we would not know until we run the program.
    // So, to test the code we have to run the program each time.
    // That's why there is another type of casting known as C++ casting.
    // Through which we can check any error at compile-time only so we don't have to run the code each time.

    int e = x + static_cast<int>(y);  // C++ casting
    // It is like calling a function 
    // Here, static_cast is an operator and in <> we write the target type. 
    cout << e << endl;

    int p = 10;
    int q = 3;
    double r = p / static_cast<double>(q);  
    // If we don't do casting r = 3.
    // To get exact ans, we convert either p or q to double so that the ans is double.
    cout << r << endl;

    // So, we only need one of the operand to be a decimel type so that the ans is of decimel type.

    return 0;
}
