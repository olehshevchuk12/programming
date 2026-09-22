#include <iostream>
#include <math.h>
int main () {
    using namespace std;
    
    int Ax = 0, Ay = 0;
    int Bx = 10, By = 9;
    int Cx = -10, Cy = 11;

    // a= BC
    // b= AC
    // c= AB
   
    double a = sqrt(pow(Cx - Bx, 2) + pow (Cy - By, 2));

    double b = sqrt(pow(Cx - Ax, 2) + pow (Cy - Ay, 2));

    double c = sqrt(pow(Bx - Ax, 2) + pow (By - Ay, 2));

    int Mx = (Ax + Bx) / 2; // Znahodjenya seredunu AB
    int My = (Ay + By) / 2;

    double Mediana_mc = sqrt(pow(Mx - Cx, 2) + pow(My - Cy, 2));

    double p = (a + b + c) / 2; // Znahodjenya pivperumetra

    double Bisectrusa_Wa = (2 / (b + c)) * sqrt(b * c * p * (p - a));

    cout << "A = (" << Ax << "; " << Ay << ")" << endl;
    cout << "B = (" << Bx << "; " << By << ")" << endl;
    cout << "C = (" << Cx << "; " << Cy << ")" << endl;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    cout << "Sereduna BC = (" << Mx << "; " << My << ")" << endl;
    cout << "Mediana mc = " << Mediana_mc << endl;
    cout << "Bisectrusa Wa = " << Bisectrusa_Wa << endl;

return 0;
}