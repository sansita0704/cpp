#include <iostream>
#include <vector>
#include <memory>
#include "CheckBox.h"
#include "Widget.h"
#include "TextBox.h"

using namespace std;

void showWidget(Widget &widget)
{
    widget.draw();
}

int main()
{
    // Polymorphism means many forms.
    // It refers to a situation when an object can take multiple forms.

    TextBox box;
    showWidget(box);

    CheckBox checkbox;
    showWidget(checkbox);

    // This is polymorphism in action.
    // Here, the object widget in showWidget(), takes multiple forms.
    // At runtime, depending on the object that we pass, it takes the form of a TextBox or a CheckBox.
    // This is done b/z we are passing by reference.
    // So, object slicing does not occur.

    // Polymorphic collection of objects

    vector<Widget> widgets1;
    widgets1.push_back(TextBox{});
    widgets1.push_back(CheckBox{});
    // "TextBox{}" is called list initialization.
    // It creates an object of TextBox class using the default constructor of TextBox class.
    // Then, that object is passed to push_back().

    for (const auto &widget : widgets1)
        widget.draw();

    // Here, we have a vector of Widget objects.
    // So, if we pass TextBox object, it should be copied and stored as a Widget object.
    // So, here we are experiencing object slicing.
    // As a result, draw() of Widget class gets called.
    // This is called static or early binding.
    // This means that the compiler matches the func call with the func def at compile-time.

    // But, here we need dynamic or late binding.
    // That means we want the compiler to match the func call with the func def at run-time.
    // So that if we have an object of TextBox class, then the draw() of TextBox class gets called.
    // We can do that using ptr.

    vector<Widget *> widgets2;
    widgets2.push_back(new TextBox{});
    widgets2.push_back(new CheckBox{});

    for (const auto &widget : widgets2)
        widget->draw();

    delete widgets2[0];
    delete widgets2[1];
    // delete is used for a single object or variable created with new operator.
    // delete[] is used for arrays created with new operator.

    // Using raw ptr, we need to delete their memory.
    // We should use smart ptr.

    vector<unique_ptr<Widget>> widgets3;
    // So, every element in this array is a unique ptr of type Widget.

    widgets3.push_back(make_unique<TextBox>());
    widgets3.push_back(make_unique<CheckBox>());

    for (const auto &widget : widgets3)
        widget->draw();

    // So, this vector 'widgets3' is called a polymorphic collection.
    // b/z each object in this collection can take diff forms at runtime.

    return 0;
}