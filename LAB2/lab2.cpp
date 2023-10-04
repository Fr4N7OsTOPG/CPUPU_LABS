#include <iostream>
#include "lab2.h"
int main() {
    auto file = new WorkwFiles();
    try {
        file->open();
    } catch (exception &e) {
        cout << "opening file error" << e.what() << endl;
    }
    string nameoffile;
    cin >> nameoffile;
    file->open(nameoffile);
    cout << file->isOpen();
    file->ReadLine;
    file->ReadWord;
}
