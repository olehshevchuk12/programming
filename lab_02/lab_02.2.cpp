#include <iostream>
int main () {
    using namespace std;

     int ocinka1 = 90;
     int ocinka2 = 85;
     int ocinka3 = 78;

     double koficient1 = 0.30;
     double koficient2 = 0.25;
     double koficient3 = 0.45;

     cout << "Vediti ocinku1:" << endl;
     cin >> ocinka1;

     cout << "Vediti koficient1:" << endl;
     cin >> koficient1;

     cout << "Vediti ocinku2:" << endl;
     cin >> ocinka2;

     cout << "Vediti koficient2:" << endl;
     cin >> koficient2;

     cout << "Vediti ocinku3:" << endl;
     cin >> ocinka3;

     cout << "Vediti koficient3:" << endl;
     cin >> koficient3;

     double seredne_znachenya =  ocinka1 * koficient1 + ocinka2 * koficient2 + ocinka3 * koficient3;

     cout << "seredne_znachenya:" << seredne_znachenya << endl;

     

return 0;
}
