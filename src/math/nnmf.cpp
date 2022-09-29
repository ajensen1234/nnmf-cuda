#include "math/nnmf.h"

nnmf::nnmf()
{

}

nnmf::~nnmf()
{

}


bool nnmf::Initialize(std::string filename, int r, const char delimiter){
    int n = csv_reader::countLines(filename);
    int m = csv_reader::countColumns(filename, delimiter);
    r_= r;
    V_ = std::make_shared<matrix>();
    V_->load_data(filename, delimiter);
    W_ = std::make_shared<matrix>(n,r,true);
    H_ = std::make_shared<matrix>(r,m,true);
    return true;
}

void nnmf::print_H(){
    H_->print_matrix();
}

void nnmf::print_W(){
    W_->print_matrix();
}

void nnmf::print_V(){
    V_->print_matrix();
}