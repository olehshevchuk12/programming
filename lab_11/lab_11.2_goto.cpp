#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int I = 10;   

double f12(double x)
{
    return pow(cos(x), 3) / 2.1 + pow(cos(x), 2) / 1.1 - 8.3 * sin(3 * x + 1);
}

double f13(double x)
{
    return pow(sin(x), 2) * pow(cos(x), 3) - sin(x) + 5.2;
}

double f14(double x)
{
    return 2 * sin(x) * sin(2 * x - 1.5) * cos(2 * x + 1.5) - 6;
}

int main()
{
    char tup robit;          
    double nar_sumu;           
    double stavka_podat;     
    double syma_podat;         
    double Syma_vudachi;      

input:
    cout << "Vvedit tup robotu (A, B abo C): ";
    cin >> tup robit;

    if (tup robit == 'A') goto workA;
    if (tup robit == 'B') goto workB;
    if (tup robit == 'C') goto workC;

    cout << "Pomulka: nevirnui tup robotu." << endl;
    goto input;

workA:
    nar_sumu = 100 * fabs(f12(I) + 50);
    stavka_podat = 0.10;
    goto result;

workB:
    nar_sumu = 150 * fabs(f13(I) + 100);
    stavka_podat = 0.15;
    goto result;

workC:
   nar_sumu = 200 * fabs(f14(I) + 135);
   stavka_podat = 0.20;

result:
    syma_podat = nar_sumu * stavka_podat;
    Syma_vudachi = nar_sumu - syma_podat;

    cout << fixed << setprecision(2);
    cout << "Narahovana syma: " << nar_sumu<< endl;
    cout << "Suma podatky:    " << syma_podat << endl;
    cout << "Syma do vudachi:  " << Syma_vudachi << endl;

    return 0;
}
