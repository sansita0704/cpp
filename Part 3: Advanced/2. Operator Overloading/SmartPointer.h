#ifndef SMARTPOINTER_H
#define SMARTPOINTER_H

class SmartPointer
{
public:
    explicit SmartPointer(int *ptr);
    ~SmartPointer();
    int &operator*();

private:
    int *ptr;
};

#include "SmartPointer.cpp"

#endif