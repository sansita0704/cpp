#ifndef DATETIME_H
#define DATETIME_H

#include "Date.h"
#include "Time.h"

class DateTime : public Date, public Time
{
public:
    DateTime(int year, int month, int day, int hour, int minute, int second);
};

#include "DateTime.cpp"

#endif