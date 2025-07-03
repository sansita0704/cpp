#include <bits/stdc++.h>
#include "SmartPointer.h"

SmartPointer::SmartPointer(int *ptr) : ptr{ptr}
{
}

SmartPointer::~SmartPointer()
{
    delete ptr;
    ptr = nullptr;
}

int &SmartPointer::operator*()
{
    return *ptr;
}