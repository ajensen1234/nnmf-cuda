#ifndef CSV_READER_H
#define CSV_READER_H

#pragma once
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

class csv_reader
{
public:
    csv_reader();
    ~csv_reader();
    static int countLines(std::string filename);
    static int countColumns(std::string filename, const char delimiter);
private:

};

#endif