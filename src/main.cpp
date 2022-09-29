#include <iostream>
#include <string>

#include "math/matrix.h"
#include "io/csv_reader.h"

int main(int argc, char *argv[]){
    
    std::string filename = argv[1];
    const char delimiter = *argv[2];
    std::cout << filename << std::endl;
    std::string file_path = "C:/Users/ajensen123/Documents/GitHub/nnmf-cuda/examples/" + filename;
    int cols = csv_reader::countColumns(filename, delimiter);

    return 0;    
}