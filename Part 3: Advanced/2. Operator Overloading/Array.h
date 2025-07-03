#ifndef ARRAY_H
#define ARRAY_H

#include <cstddef>
// C Standard Definition
// This file has a bunch of definitions like size_t.

class Array
{
public:
    explicit Array(size_t size);
    // size_t is a data type that represents the size of largest object that the system can handle.
    // Usually, it is unsigned int or unsigned long long.

    ~Array();
    int &operator[](size_t index);
    // With this operator, we are going to reference an existing int.
    // We want the index of the element as a parameter.
    // So, the type should be size_t.

private:
    int *values;
    // Size is determined at run-time.
    // So, at compile-time, the compiler doesn't know the size of the array.
    // So, we will dynamically allocate memory for this array.
    // So, we need an int ptr.
    // Also, we need a destructor where we will deallocate memory for the array.

    size_t size;
    // Array should know its size so we should store it in a separate variable.
};

#include "Array.cpp"

#endif