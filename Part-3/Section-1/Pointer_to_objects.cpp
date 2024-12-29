#include "Rectangle.h"
#include "SmartPointer.h"
#include <iostream>
#include <memory>

using namespace std;

int main()
{
    auto *first = new Rectangle(10, 20);
    // Objects that are declared in stack are useful when we need them in a particular func only.
    // As when that func finishes execution, then its memory will be freed automatically and destructor will be called.
    // But sometimes we need objects to stay in memory even after the func finishes execution.
    // In this case, we store them in heap or free store using new operator.
    // "new Rectangle{10, 20}" - this expression returns a Rectangle pointer.
    // To simplify the code, we have used auto keyword.

    first->draw();
    // Here, rectangle is a ptr to a Rectangle object.
    // So, we have to use arrow operator to access its member functions.

    delete first;
    // This frees up the memory of the Rectangle object.

    first = nullptr;
    // This is required, otherwise this rectangle ptr will point to a memory address which does not exist anymore.
    // That ptr is called dangling ptr.

    auto second = make_unique<Rectangle>(10, 20);
    // In (), we can supply the values which will be passed to the constructor of this object.
    // "make_unique<Rectangle>(10, 20);" - This returns a unique pointer pointing to a Rectangle object.

    second->draw();

    // With smart ptr, we do not have to free up its memory.
    // When main() finishes execution, it will be automatically freed.
    // So, destructor will be called.

    // Exercise

    // int *ptr = new int;
    SmartPointer smartPtr{new int};

    // "new int" - This expression returns an int ptr which points to a memory location in heap.
    // So we pass this ptr in ().
    // The contructor of the class initializes the member variable of this object with this ptr.
    // Now, we do not have to worry about releasing the memory.
    // It will be done by the destructor when main() finishes execution.

    return 0;
}