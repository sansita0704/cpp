#include <iostream>

using namespace std;

class TextBox
{
public:
    TextBox();
    explicit TextBox(const string &value);
    string getValue();
    void setValue(const string &value);

private:
    string value;
};

TextBox::TextBox()
{
}

TextBox::TextBox(const string &value) : value{value}
{
}

string TextBox::getValue()
{
    return value;
}

void TextBox::setValue(const string &value)
{
    this->value = value;
}
// It is a good practice to set a string parameter as a reference parameter.

int main()
{
    TextBox box;
    box.setValue("Hello World!");
    cout << box.getValue();

    return 0;
}