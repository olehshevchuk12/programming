#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

const int VARIANT = 10;
const int N = 7;                       

double f(double x)
{
    return fabs(cos(x * x - 3.8)) / 4.5 - 9.7 * sin(x - 3.1);
}

int main()
{
    double y[N];
    double z[N];                       
    int m = 0;                         

    cout << "Massif y:" << endl;
    for (int k = 0; k < N; k++)
    {
        y[k] = f(k + 1);               
        cout << "y[" << k + 1 << "] = " << fixed << setprecision(3) << y[k] << endl;
    }

    double ymax = y[0];
    for (int k = 1; k < N; k++)
        if (y[k] > ymax) ymax = y[k];

    double third = y[2];
    double lo = (third < ymax) ? third : ymax;
    double hi = (third < ymax) ? ymax : third;

    for (int k = 0; k < N; k++)
        if (y[k] > lo && y[k] < hi)
            z[m++] = y[k];

    cout << endl << "The third element = " << third
         << ", max = " << ymax << endl;

    if (m == 0)
        cout << "There are no elements between the third and the maximum." << endl;
    else
    {
        cout << "New array z (" << m << " el.):" << endl;
        for (int i = 0; i < m; i++)
            cout << "z[" << i + 1 << "] = " << z[i] << endl;
    }
    return 0;
}