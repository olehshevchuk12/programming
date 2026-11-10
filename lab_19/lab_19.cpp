#include <iostream>
#include <iomanip>
#include <vector>
#include <cmath>
using namespace std;

const int N = 4;
typedef double MatrixType[N][N];

double f22(double x)
{
    return 2 * sin(fabs(2 * x)) * cos(2 * x) - 11.6 * sin(x / 0.4 - 1);
}

double f23(double x)
{
    return sin(fabs(x)) / 0.1 + 9.4 * sin(3 * x - 2.5);
}

void FillMatrix(MatrixType a)
{
    for (int k = 1; k <= N; k++)
        for (int n = 1; n <= N; n++)
            a[k - 1][n - 1] = n * f22(k) + sin(k) * f23(n);
}

void PrintMatrix(MatrixType a)
{
    for (int k = 0; k < N; k++)
    {
        for (int n = 0; n < N; n++)
            cout << setw(12) << fixed << setprecision(4) << a[k][n];
        cout << endl;
    }
}

int main()
{
    MatrixType a;
    FillMatrix(a);

    cout << "Matrix a[k][n]:" << endl;
    PrintMatrix(a);

    int maxK = 0, maxN = 0;
    for (int k = 0; k < N; k++)
        for (int n = 0; n < N; n++)
            if (a[k][n] > a[maxK][maxN])
            {
                maxK = k;
                maxN = n;
            }

    cout << "Maximum element: " << a[maxK][maxN]
         << "indices (k, n) = (" << maxK + 1 << ", " << maxN + 1 << ")" << endl;

    vector<double> above;

for (int k = 0; k < N; k++)
{
    for (int n = k + 1; n < N; n++)
    {
        above.push_back(a[k][n]);
    }
}

    cout << "Elements above the main diagonal:" << endl;
    double product = 1;
    for (size_t i = 0; i < above.size(); i++)
    {
        cout << setw(12) << fixed << setprecision(4) << above[i];
        product *= above[i];
    }
    cout << endl;

    cout << "Product of elements above the main diagonal: "
         << scientific << setprecision(4) << product << endl;

    return 0;
}
