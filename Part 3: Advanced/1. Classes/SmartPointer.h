#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

class SmartPointer
{
private:
    int *ptr;

public:
    explicit SmartPointer(int *ptr);
    ~SmartPointer();
};

#include "SmartPointer.cpp"

#endif