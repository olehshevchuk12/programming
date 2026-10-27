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
    char tup_rob;          
    double narah_sym;          
    double stavka_podat;     
    double syma_podat;         
    double Syma_vudachi;      
    bool correct;

    do
    {
        cout << "Vvedit tup robit (A, B abo C): ";
        cin >> tup_rob;
        correct = true;

        switch (tup_rob)
        {
        case 'A':
            narah_sym = 100 * fabs(f12(I) + 50);
            stavka_podat = 0.10;
            break;
        case 'B':
            narah_sym = 150 * fabs(f13(I) + 100);
            stavka_podat = 0.15;
            break;
        case 'C':
           narah_sym = 200 * fabs(f14(I) + 135);
            stavka_podat = 0.20;
            break;
        default:
            correct = false;
            cout << "Pomulka: nevirnui tup robit!." << endl;
        }
    } while (!correct);

    syma_podat = narah_sym * stavka_podat;
    Syma_vudachi = narah_sym - syma_podat;

    cout << fixed << setprecision(2);
    cout << "Narahovana syma: " << narah_sym << endl;
    cout << "Syma podatky:    " << syma_podat << endl;
    cout << "Syma do vudachi:  " << Syma_vudachi << endl;

    return 0;
}
