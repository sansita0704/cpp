#ifndef DATE_H
#define DATE_H

class Date
{
public:
    Date(int year, int month, int day);

    int getYear();
    int getMonth();
    int getDay();

private:
    int year;
    int month;
    int day;
};

#include "Date.cpp"

#endif