#include "app.h"
int App::start() {
    char x = 4;
    char y = 1.6;
    print(swap(x, y))
    int numRows, numCols;
    cout << "Введите количество строк: ";
    cin >> numRows;
    cout << "Введите количество столбцов: ";
    cin >> numCols;
    Matrix matrix(numRows, numCols);
    matrix.fillMatrix();
    matrix.printMatrix();
    return 0;
}
