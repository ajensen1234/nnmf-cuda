#include "math/matrix.h"
#include "math/nnmf.h"
#include "io/csv_reader.h"
#include <string>
#include <memory.h>
#include <iostream>


int main(){
    std::string fname = "C:/Users/ajensen123/Documents/GitHub/nnmf-cuda/examples/example_matrix.csv";


    std::shared_ptr<nnmf> NNMF  = std::make_shared<nnmf>();;
    NNMF->Initialize(fname, 3, ',');
    std::cout << std::endl;
    NNMF->print_H();
    std::cout << std::endl;
    NNMF->print_V();
    std::cout << std::endl;
    NNMF->print_W();    
    std::cout << std::endl;
    
}