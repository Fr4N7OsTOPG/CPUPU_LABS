#include <cmath>
#include <iostream>
#include "FF.h"

using namespace std;
void FF::menu(){

    cout << " 1 - Суммарная площадь всех фигур."<< endl;
    cout << " 2 - Суммарный периметр всех фигур." << endl;

};
void FF::line(){
    cout << "--------------------------------\n" ;
}

void FF::start() {
    Geometric_fig x;
    bool While = true;
    while (While) {
        menu();
        cin >> a;
        switch (a) {
            case 1:
                line();
                x.FF_square();
                line();
                break;
            case 2:
                line();
                x.FF_per();
                line();
                break;
            case 0:
                line();
                cout << "The program has been closed.\nGood luck!\n";
                line();
                While = false;
                break;
            default:
                line();
                cout << "Нет такой команды.\n";
                line();
                break;

        }
    }
}
int a_circle , an_Equaltrap_thigh, an_Equaltrap_base1, an_Equaltrap_base2;
void FF::input_circle(){
    cout << "Введите радиус круга ";
    cin >> a_circle;
};
void FF::input_Equaltrap(){
    cout << "Введите бедро трапеции";
    cin >> a_Equaltrap_thigh;
    cout << "Введите основания трапеции";
    cin >> an_Equaltrap_base1 >> an_Equaltrap_base2;
};
