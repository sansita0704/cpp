#include <stdexcept>
// Common exceptions are defined in this file.

#include "Array.h"

using namespace std;

Array::Array(size_t size)
{
    values = new int[size];
    this->size = size;
}

Array::~Array()
{
    delete[] values;
    // To deallocate memory for the int array to which values ptr is pointing.
}

int &Array::operator[](size_t index)
{
    if (index >= size)
        throw invalid_argument("index");
    return values[index];
}
