#ifndef FILEIO_H
#define FILEIO_H

#include "FileReader.h"
#include "FileWriter.h"

class FileIO : public FileReader, public FileWriter
{
public:
    FileIO(string fileName);
};

#include "FileIO.cpp"

#endif