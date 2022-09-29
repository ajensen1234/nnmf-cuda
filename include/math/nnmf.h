#ifndef NNMF_H
#define NNMF_H

#pragma once

#include <string>
#include <memory.h>
#include "math/matrix.h"
#include "io/csv_reader.h"

class nnmf
{
public:
    nnmf();
    ~nnmf();
    bool Initialize(std::string filename, int r, const char delimiter);
    void print_V();
    void print_W();
    void print_H();
    matrix* H_mult_num(matrix* W_n, matrix* V, matrix* H_n);
    matrix* H_mult_den(matrix* W_n, matrix* V, matrix* H_n);
    matrix* W_mult_num(matrix* W_n, matrix* V, matrix* H_n);
    matrix* W_mult_den(matrix* W_n, matrix* V, matrix* H_np1);

private:
    std::shared_ptr<matrix> V_, W_, H_;
    int r_;


};

#endif