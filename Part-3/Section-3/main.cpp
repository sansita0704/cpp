#include <iostream>
#include "DateTime.h"

using namespace std;

int main()
{
    DateTime dateTime{2025, 1, 1, 1, 46, 20};

    cout << "Date: " << dateTime.getDay() << "/"
         << dateTime.getMonth() << "/"
         << dateTime.getYear() << endl
         << "Time: " << dateTime.getHour() << ":"
         << dateTime.getMinute() << ":"
         << dateTime.getSecond() << endl;

    return 0;
}