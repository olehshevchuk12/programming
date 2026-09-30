#include <iostream>
using namespace std;

int main() {

    long ind_nom_stud = 0;
    int ocinka_1 = 0;
    int ocinka_2 = 0;
    int ocinka_3 = 0;
    int ocinka_4 = 0;
    int Correct = 0;
    double seredne_znachenya = 0;

    cout << "Vvedit indefikaciynui nomer studenta: ";
    cin >> ind_nom_stud;

    cout << "Vvedit 4 ekzamenaciyni ocinku: ";
    cin >> ocinka_1 >> ocinka_2 >> ocinka_3 >> ocinka_4;

    Correct = (ocinka_1 >= 0 && ocinka_2 >= 0 && ocinka_3 >= 0 && ocinka_4 >= 0);

    if (!Correct) {
        cout << " POMULKA, Odna z cuh ocinok e vid'emna.";
        return 0;
    }

    seredne_znachenya = ( ocinka_1 + ocinka_2 + ocinka_3 + ocinka_4) / 4;

    cout << "Indefikaciynui nomer:" << ind_nom_stud << endl;
    cout << "Serednya ocinka: " << seredne_znachenya << endl;

    if (seredne_znachenya >= 5) {
        cout << "Ekzamen zdano vidminno." << endl;
    }

    else if (seredne_znachenya >= 4) {
        cout << "Ekzamen zdano dobre." << endl;
    }
    
    else if (seredne_znachenya >= 3) {
        cout << "Ekzamen zdano zadovilino." << endl;
    }
    else {
        cout << "Ekzamen ne skladeno." << endl;
    }
    
    return 0;
}