#include "io/csv_reader.h"
#include "math/matrix.h"
#include <string>
#include <iostream>
#include <memory.h>

int main(){
    std::string fname = "C:/Users/ajensen123/Documents/GitHub/nnmf-cuda/examples/NNMF_test_CSV.csv";
    int num_cols = csv_reader::countColumns(fname, ',');
    int num_rows = csv_reader::countLines(fname);
    std::cout << "Number of Columns: " << num_cols << std::endl;
    std::cout << "Number of Rows: " << num_rows << std::endl;
    
    matrix* A = new matrix(3,4,true);
    matrix* B = new matrix(4,3,true);
    matrix* my_matrix = new matrix(3,3);

    //matrix::mat_mult(A,B,my_matrix);
    //my_matrix->print_matrix();
    //std::cout << std::endl;
    //A->print_matrix();
    //std::cout << std::endl;
    //B->print_matrix();
    //std::cout << std::endl;

    //for (int i = 0; i<3;i++){
    //    for (int j = 0; j<4;j++){
    //        my_matrix.set(i,j,(i+1)*(j+1));
     //   }
    //}


    auto D = std::make_shared<matrix>();
    std::cout << "Matrix D" <<std::endl;
    std::string fname2 = "C:/Users/ajensen123/Documents/GitHub/nnmf-cuda/examples/example_matrix.csv";
    D->load_data(fname2,',');

    D->print_matrix();





}