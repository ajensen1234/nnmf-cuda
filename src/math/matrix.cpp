#include "math/matrix.h"

matrix::matrix(){

}

void matrix::initialize(int nrows, int ncols){
    if(!matrix_initialized){
    numrows_ = nrows;
    numcols_ = ncols;
    data = new float[nrows*ncols];
    }
    matrix_initialized = true;
}

matrix::~matrix(){

}

matrix::matrix(int nrows, int ncols){
    numcols_ = ncols;
    numrows_ = nrows;
    data = new float[nrows*ncols];
    matrix_initialized = true;
}

matrix::matrix(int nrows, int ncols, bool randomize){
    if (randomize){
        numrows_ = nrows;
        numcols_ = ncols;
        data = new float[nrows*ncols];

        for (int i = 0; i<nrows;i++){
            for (int j = 0; j<ncols;j++){
                this->set(i,j,(float)(rand()) / (float)(RAND_MAX));
            }
        }
    }
    matrix_initialized = true;
}

int matrix::get_num_rows(){
    return numrows_;
}
int matrix::get_num_cols(){
    return numcols_;
}

float matrix::at(int row, int col){
    return data[row*numcols_ + col];
}

void matrix::set(int row, int col, float val){
    data[row*numcols_ + col] = val;
}

void matrix::mat_mult(matrix* A, matrix*B, matrix* out){
    for (int i = 0; i<A->get_num_rows();i++){
        for (int j = 0; j<B->get_num_cols(); j++){
            float sum = 0;
            for(int k = 0; k < A->get_num_cols();k++){
                sum+= (A->at(i,k))*(B->at(k,j));
            }
            out->set(i,j,sum);
        }
    }
}

void matrix::load_data(std::string filename, const char delimiter){

    int nrows = csv_reader::countLines(filename);
    int ncols = csv_reader::countColumns(filename, delimiter);
    initialize(nrows, ncols);
    std::string line;
    std::ifstream myfile(filename.c_str());
    int i = 0;
    int j = 0;
    if (myfile.is_open()){
        int i = 0;
        while(std::getline(myfile,line)){
            int j = 0;
            std::stringstream stream(line);
            std::string val;
            while(std::getline(stream,val,delimiter)){
                this->set(i,j,std::stof(val));
                j++;
            }
            i++;
        }
    }
    
}


void matrix::print_matrix(){
    get_num_cols();
    for (int i = 0; i<numrows_;i++){
        for (int j = 0; j < numcols_;j++){
            std::cout << this->at(i,j) << ", ";
        }
        std::cout << std::endl;
    }
}