#include "FileReader.h"
#include <iostream>

using namespace std;

FileReader::FileReader(string fileName)
{
    cout << "Constructor of FileReader" << endl;
}

string FileReader::fileName()
{
    return "fileName";
}

string FileReader::read()
{
    return "Hello World!";
}