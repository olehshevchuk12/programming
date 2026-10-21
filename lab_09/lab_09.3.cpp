#include <iostream>
using namespace std;

  long long Factorial(int n)
{
      long long f = 1;

    for (int i = 1; i <= n; i++)
        f *= i;

    return f;
}

int main()
{
    int n;

    while (true)
    {
        cout << "Vvedit chuslo (-1 dlya zavershennya): " << endl;
        cin >> n;

        if (n == -1)
            break;

        if (n < 0)
        {
            cout << "Faktorial dlya vid'emnuh chusel ne isnye." << endl;
        }
        else
        {
            cout << n << "! = " << Factorial(n) << endl;
        }
    }

    cout << "Programyvanya zaversheno.";

    return 0;
}