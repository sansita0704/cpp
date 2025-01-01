#include "FileWriter.h"
#include <iostream>

using namespace std;

FileWriter::FileWriter(string fileName)
{
    cout << "Constructor of FileWriter" << endl;
}

string FileWriter::fileName()
{
    return "fileName";
}

void FileWriter::write(string content)
{
    cout << content;
}