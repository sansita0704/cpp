#ifndef FILEWRITER_H
#define FILEWRITER_H

#include <string>

using namespace std;

class FileWriter
{
public:
    FileWriter(string fileName);
    string fileName();
    void write(string content);
};

#include "FileWriter.cpp"

#endif