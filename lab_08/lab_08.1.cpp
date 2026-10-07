#include <iostream>
using namespace std;

void calculator(double a, char op, double b)
{
    if (op == '+')
        cout << "Resultat dorivnye " << a + b << endl;
    else if (op == '-')
        cout << "Resultat dorivnye " << a - b << endl;
    else if (op == '*')
        cout << "Resultat dorivnye " << a * b << endl;
    else if (op == '/')
    {
        if (b != 0)
            cout << "Resultat dorivnye " << a / b << endl;
        else
            cout << "Pomulka dilenya na 0 ne mojluva." << endl;
    }
    else
        cout << "Nevidoma informatia!" << endl;
}

int main()
{
    double a = 0;
    double b = 0;
    char op;
    char answer;

    do
    {
        cout << "Vvedit pershu operaciy, Operacia i drugui operand: ";
        cin >> a >> op >> b;

        calculator(a, op, b);

        cout << "Vukonatu she odnu operaciy (y/n)? ";
        cin >> answer;

    } while (answer == 'y' || answer == 'Y');

    return 0;
}