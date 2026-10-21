#include <iostream>
using namespace std;

double Harmoniyne(double x, double y)
{
    return (2.0 * x * y) / (x + y);
}

int main()
{
    double x;
    double y;

    while (true)
    {
        cout << "Vvedit 2 chusla (0 dlya zavershunya): ";
        cin >> x >> y;

        if (x == 0 || y == 0)
            break;

        cout << "Seredne harmoniyne = " << Harmoniyne(x, y) << endl;
    }

    cout << "Prohramyvannya zakincheno.";

    return 0;
}