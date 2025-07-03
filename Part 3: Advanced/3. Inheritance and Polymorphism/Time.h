#ifndef TIME_H
#define TIME_H

class Time
{
public:
    Time(int hour, int minute, int second);

    int getHour();
    int getMinute();
    int getSecond();

private:
    int hour;
    int minute;
    int second;
};

#include "Time.cpp"

#endif