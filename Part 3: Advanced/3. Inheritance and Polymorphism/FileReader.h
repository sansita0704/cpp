#ifndef FILEREADER_H
#define FILEREADER_H

#include <string>

using namespace std;

class FileReader
{
public:
    FileReader(string fileName);
    string fileName();
    string read();
};

#include "FileReader.cpp"

#endif