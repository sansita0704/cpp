#include <iostream>
#include "Widget.h"
#include "TextBox.h"

using namespace std;

int main()
{
    // In inheritance, the base class constructor is called before the derived class constructor.

    // TextBox box{true};
    // If the widget class does not have a default constructor, then there will be an error.
    // This is b/z the constructor of Widget class gets called first.
    // So, when an object of TextBox is created, the compiler needs some value to pass to the constructor of the base class.

    // To solve this:
    // 1. We can give a default constructor to the Widget class.
    // 2. If we do not want to have a default constructor, we can call the constructor of the base class in the constructor of derived class and pass a value there.
    // But this way there will be some constructor that will not be doing anything other than passing some value to the constructor of base class.
    
    // To avoid this, we can inherit constructor of the base class.
    // By default, constructors are not inherited.

    return 0;
}