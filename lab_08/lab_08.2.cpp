#include <iostream>
using namespace std;

void printSymbol(char symbol, int n) // Функція виводить символ задану кількість разів
{
    for (int i = 0; i < n; i++)
    {
        cout << symbol;
    }
    cout << endl;
}

int main()
{
    char symbol;
    int n = 0;

    cout << "Vvedit sunvol: ";
    cin >> symbol;

    cout << "Vvedit kilnkisti povtoreni (ne 0): ";
    cin >> n;

    if (n != 0)
    {
        printSymbol(symbol, n);
    }
    else
    {
        cout << "Pomulka! kilykisti povtoreni ne moje bytu 0." << endl;
    }

    return 0;
}