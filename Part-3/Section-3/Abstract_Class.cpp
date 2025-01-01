#include <iostream>

using namespace std;

int main()
{
    // Sometimes, we have a virtual method but there is no meaningful way to define it.
    // For example, draw() of Widget class.
    // In a real-life application, the method or algo for drawing diff widget will be diff.
    // But there is no meaningful way to define how a widget should be drawn.
    // Here, we use a pure virtual method.

    // If a class has atleast one pure virtual method, we refer to that class as an abstract class.
    // We cannot make objects of abstract classes.
    // So, they cannot be instantiated.
    // This is b/z the draw() of this class has no implementation.
    // So, what should happen if we declare an object of this class and call the draw().
    // It does not make sense.

    // But we can use them as references or ptr b/z we want them for polymorphic behaviors.
    // These classes only exist to be inherited i.e. to provide some code to other classes.

    // If we don't override pure virtual method of an abstract class, then its derived class will also be an abstract class.
    // This is b/z in that case, the pure virtual method is inherited as it is.
    // So, derived classes will also become abstract classes.

    return 0;
}