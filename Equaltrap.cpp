    void FF::input_Equaltrap(){
        cout << "Введите бедро трапеции";
        cin >> a_Equaltrap_thigh;
        cout << "Введите основания трапеции";
        cin >> an_Equaltrap_base1 >> an_Equaltrap_base2;
    };

#include "Equaltrap.h"

using namespace std;

float Equaltrap::Square() {
    square_Equaltrap = (an_Equaltrap_base1 + an_Equaltrap_base2) * 0.5 * sqrt((a_Equaltrap_thigh * a_Equaltrap_thigh) - ((an_Equaltrap_base1 - an_Equaltrap_base2) * (an_Equaltrap_base1 - an_Equaltrap_base2))/4 ) ;
    return square_Equaltrap ;
}

    float Equaltrap::perimetr() {
        per_Equaltrap = (an_Equaltrap_base1 + an_Equaltrap_base2) + a_Equaltrap_thigh * 2;
        return per_Equaltrap;
    }

};
