#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double start = 0;
    double step = 0;
    double strike = 0;
    int rows = 0;
    int i = 0;

    cout << "Pochatkove znachenya: ";
    cin >> start;

    cout << "Krok: ";
    cin >> step;

    cout << "Kilikisti ryadkiv (1-15): ";
    cin >> rows;

    if (rows < 1 || rows > 15)
    {
        cout << "Pomulka! Kilikisc ryadkiv povuna bytu 1 do 15.";
        return 0;
    }

    strike = start;

    cout << fixed << setprecision(2);

    cout << "+------------+------------+---------------+" << endl;
    cout << "| Straik   | Litru      | Charku        |" << endl;
    cout << "+------------+------------+---------------+" << endl;

    while (i < rows)
    {
        cout << "| "
             << setw(10) << strike
             << "| "
             << setw(10) << strike * 72.73
             << "| "
             << setw(13) << strike * 1280.46
             << "|" << endl;

        strike += step;
        i++;
    }

    cout << "+------------+------------+---------------+" << endl;

    return 0;
}