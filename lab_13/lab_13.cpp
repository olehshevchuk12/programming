#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int I = 10;                 

double f(double x)
{
    return x * cos(x) - 3;        
}

int main()
{
    double h = 0.1 * I;           
    double x, y;
    double prod = 1;              
    int cntNeg = 0;
    double ymax = 0, xmax = 0;

    cout << setw(10) << "x" << setw(15) << "y" << endl;

    for (int k = 0; k <= 10; k++)
    {
        x = k * h;
        y = f(x);
        cout << fixed << setprecision(3)
             << setw(10) << x << setw(15) << y << endl;

        if (k == 0 || y > ymax)
        {
            ymax = y;
            xmax = x;
        }
        if (y < 0)
        {
            prod *= y;
            cntNeg++;
        }
    }

    if (cntNeg == 0)
        cout << "There are no negative values." << endl;
    else
        cout << "Product of negative values = " << prod << endl;

    cout << "Maximum function y = " << ymax
         << " is reached at the point x = " << xmax << endl;
    return 0;
}