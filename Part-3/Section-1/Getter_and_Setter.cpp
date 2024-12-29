#include <iostream>
#include "Rectangle.h"

using namespace std;

int main()
{
     Rectangle rectangle;

     // According to the principle of data hiding, we should provide functions for accessing the data.
     // So, we provide get() and set() for getting the value and setting the value respectively.

     cout << rectangle.getWidth() << endl
          << rectangle.getHeight() << endl;

     rectangle.setWidth(20);
     rectangle.setHeight(1);
     cout << rectangle.getWidth() << endl
          << rectangle.getHeight() << endl;

     return 0;
}