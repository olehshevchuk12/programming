#include <iostream>
using namespace std;

double Fahrenheit(double c)
{
    return 1.8 * c + 32;
}

int main()
{
    double c = 0;

    cout << "Budi laska, vvedit temperatyry y gradysah za Celsiya: ";
    cin >> c;

    cout << c << " Gradysiv za Celsiem dorivnue " << Fahrenheit(c) << " Gradusiv za Farengeitom.";

    return 0;
}