#ifndef ARRAY_H
#define ARRAY_H

#include <iostream>
#include <cstddef>
// C Standard Definition
// This file has a bunch of definitions like size_t.

using namespace std;

template <typename T>
class Array
{
public:
    explicit Array(size_t size);
    ~Array();

    T &operator[](size_t index);

private:
    T *values;
    size_t size;
};

template <typename T>
Array<T>::Array(size_t size)
{
    values = new T[size];
    this->size = size;
}

template <typename T>
Array<T>::~Array()
{
    delete[] values;
}

template <typename T>
T &Array<T>::operator[](size_t index)
{
    if (index >= size)
        throw invalid_argument("index");
    return values[index];
}

#endif