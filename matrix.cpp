#include "matrix.h"
#include <iostream>

using namespace std;

Matrix::Matrix(int rows, int cols) : numRows(rows), numCols(cols) {
    data = new int*[numRows];
    for (int i = 0; i < numRows; ++i) {
        data[i] = new int[numCols];
    }
}

Matrix::~Matrix() {
    for (int i = 0; i < numRows; ++i) {
        delete[] data[i];
    }
    delete[] data;
}

void Matrix::fillMatrix() {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << "Введите элемент [" << i << "][" << j << "]: ";
            cin >> data[i][j];
        }
    }
}

void Matrix::printMatrix() {
    cout << "Матрица:" << endl;
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < numCols; ++j) {
            cout << data[i][j] << ' ';
        }
        cout << endl;
    }
}
