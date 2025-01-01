#include "Shape.h"
#include <string>

using namespace std;

string Shape::getBackground()
{
    return background;
}

void Shape::setBackground(const string &background)
{
    this->background = background;
}
