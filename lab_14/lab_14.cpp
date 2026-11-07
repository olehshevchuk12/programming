#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int VARIANT = 10;
const int N = 11;                      

double f(double x)
{
    return 13.4 * cos(fabs(x)) * sin(x * x - 2.25);
}

int main()
{
    int year[N];
    double y[N];

    for (int i = 0; i < N; i++)
    {
        year[i] = 2000 + i;
        y[i] = 100 * f(year[i]);       
    }

    cout << setw(8) << "year" << setw(15) << "y_k, y.o." << endl;
    for (int i = 0; i < N; i++)
        cout << setw(8) << year[i] << setw(15) << fixed << setprecision(2) << y[i] << endl;

    double sumProfit = 0, sumLoss = 0;
    int cntProfit = 0;
    for (int i = 0; i < N; i++)
    {
        if (y[i] > 0) { sumProfit += y[i]; cntProfit++; }
        else if (y[i] < 0) sumLoss += y[i];
    }

    cout << endl;
    if (cntProfit == 0)
        cout << "There were no profits." << endl;
    else
        cout << "Amount of earnings = " << sumProfit << " y.o." << endl;

    if (sumLoss == 0)
        cout << "There were no losses." << endl;
    else
        cout << "Amount of damages = " << sumLoss << " y.o." << endl;

    cout << "Number of profitable years = " << cntProfit << endl;
    return 0;
}