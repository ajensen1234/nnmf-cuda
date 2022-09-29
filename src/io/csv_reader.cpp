#include "io/csv_reader.h"

csv_reader::csv_reader()
{

}

csv_reader::~csv_reader()
{

}

int csv_reader::countColumns(std::string filename, const char delimiter){
    std::ifstream myfile(filename.c_str());
    int num_cols = 0;
    std::string myline;
    if (getline(myfile,myline)){
        std::stringstream stream(myline);
        std::string dummy;
        while(getline(stream,dummy,delimiter)) ++num_cols;
    }
    myfile.close();
    return num_cols;
}