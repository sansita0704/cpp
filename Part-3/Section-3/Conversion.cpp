#include <iostream>
#include "Widget.h"
#include "TextBox.h"

using namespace std;

void showWidget(Widget &widget)
{
}

int main()
{
    TextBox box;
    Widget widget = box;
    // Here, our TextBox is implicitly getting converted to a Widget.
    // This is called "Upcasting" b/z the conversion is upwards i.e. towards base class.

    // Its opposite is "Downcasting" which is not possible.
    // So, we cannot convert a Widget to a TextBox as the TextBox contains some extra members which a Widget does not have.
    // So, when we write "TextBox box = widget;", the compiler does not know how to convert a widget to a textbox.
    // It does not know how to add those extra members.

    // Upcasting also happens when we pass a TextBox into a func which takes a Widget parameter.

    showWidget(box);
    // Here, we are passing it by value.
    // So, a copy of box object is stored inside a widget.
    // In this process, compiler needs to discard the extra members of box i.e. string value.
    // A string takes 24 bytes of memory.
    // That's why, in this process 24 bytes gets discarded.
    // This is called Object Slicing.
    // It does not happen when we use a reference or a ptr.
    // But, in the case of a reference and ptr also, we can't see the members of TextBox.
    // We have access to the members of Widget class only.

    return 0;
}