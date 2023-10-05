#ifndef CPUPU_LABS_MATRIX_H
#define CPUPU_LABS_MATRIX_H

struct Matrix {
    int numRows;
    int numCols;
    int** data;

    Matrix(int rows, int cols);
    ~Matrix();
    void fillMatrix();
    void printMatrix();
};

#endif // CPUPU_LABS_MATRIX_H
