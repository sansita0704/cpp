#include "Date.h"
#include <iostream>

using namespace std;

Date::Date(int year, int month, int day)
{
    if (year < 0)
        throw invalid_argument("year");
    else
        this->year = year;

    if (month < 1 || month > 12)
        throw invalid_argument("month");
    else
        this->month = month;

    if (day < 1 || day > 31)
        throw invalid_argument("day");
    else
        this->day = day;
}

int Date::getYear()
{
    return year;
}

int Date::getMonth()
{
    return month;
}

int Date::getDay()
{
    return day;
}
