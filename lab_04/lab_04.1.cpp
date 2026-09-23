#include <iostream>
using namespace std;

int main()
{
    const double xc = 0;  // X Centry kola
    const double yc = 0;  // Y Centry kola
    const double r = 3;   // Radius kola

    double x = 0;
    double y = 0;

    cout << "Vediti koordunatu tochku (x;y): ";
    cin >> x >> y;

    double Vidstani_y_kvadrati = (x - xc) * (x - xc) + (y - yc) * (y - yc);

    if (x == xc && y == yc)
    {
        cout << "Tochka znahodutisya y centri kola" << endl;
    }
    else if (Vidstani_y_kvadrati < r * r)
    {
        cout << "Tochka znahodutisya y koli" << endl;
    }
    else if (Vidstani_y_kvadrati > r * r)
    {
        cout << "Tochka znahodutisya ne v kolom." << endl;
    }
    
    
    return 0;
}