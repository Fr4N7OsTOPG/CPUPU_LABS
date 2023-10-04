#ifndef LAB2_LAB2_H
#define LAB2_LAB2_H
#include <iostream>
#include <fstream>
#include <string>
#include <exception>
using namespace std;
class Methods{
private:
    fstream file;
public:
    WorkwFiles(){};

    ~WorkwFiles() {
    }
    void open(string name) {
        file.open(name, std::ios::app);
        if(...)
        throw std::exception();
    }
    void close(){
        file.close();
    }
    bool isOpen(){
        return file.is_open();
    }
    string ReadLine{
        string line;
        getline(file, line);
        return line;
    }
    string ReadWord() {
        string word;
        file >> word;
        return word;
    }
    
};


#endi
