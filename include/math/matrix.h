#ifndef MATRIX_H
#define MATRIX_H

#pragma once
#include <random>
#include "io/csv_reader.h"
class matrix
{
public:
    matrix();
    ~matrix();
    matrix(int nrows, int ncols);
    matrix(int nrows, int ncols, bool randomize);
    int get_num_rows();
    int get_num_cols();
    float at(int row, int col);
    void set(int row, int col, float val);
    static void mat_mult(matrix* A, matrix* B, matrix* out);
    void load_data(std::string filename, const char delimiter);
    void initialize(int nrows, int ncols);
    void print_matrix();
    

private:
    int numcols_, numrows_;
    float *data;
    bool matrix_initialized = false;
    
};

#endif