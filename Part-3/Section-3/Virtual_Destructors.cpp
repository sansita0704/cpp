#include <iostream>
#include "Widget.h"
#include "TextBox.h"
#include "CheckBox.h"

using namespace std;

int main()
{
    vector<unique_ptr<Widget>> widgets;
    widgets.push_back(make_unique<TextBox>());
    widgets.push_back(make_unique<CheckBox>());

    for (const auto &widget : widgets)
        widget->draw();

    // When these objects are destroyed, destructors are not called properly.
    // We know that destructors are called in reverse order.
    // So, first the destructor of TextBox class should be called.
    // Then the destructor of Widget class should be called.
    // Same should happen with a CheckBox.
    // But, here the destructors of these derived classes are not called.
    // This is happening due to early binding.
    // We can solve this using late binding.
    // We have to declare the destructors as virtual.

    // Whenever we declare a method as virtual, we are going to use polymorphism.
    //  In that case, we want our destructors to work properly.
    // So, we should always declare virtual destructors in these cases even if that destructor is not going to do anything.
    // If the def of destructor is empty, we should set it as default.
    // So that compiler generates its def for us.

    return 0;
}