#include <iostream>
#include <iomanip>
#include <cmath>
#include <cctype>   
using namespace std;

const int    I  = 10;               
const double PI = 3.14159265358979;

double f15(double x)
{
    return fabs(pow(cos(x), 2) - 0.51) * sin(3 * x - 4) - 4.44;
}

double f16(double x)
{
    return cos(2.1 * x) * sin(fabs(x)) / 0.15 - 5.8;
}

int main()
{
    char   letter;
    int    k;
    double a, b, z;

    do
    {
        cout << "Vvedit litery: ";
        cin >> letter;

        if (isdigit(letter))
            cout << "Vvedenui ne pravelinui sunvol. Vvedit Q abo Z dlya vuhody." << endl;
        else
        {
            switch (letter)
            {
            case 'A': case 'B': case 'C':
                cout << "Bukva " << letter << " Vidpovidae cufri 2 na telefoni." << endl;
                break;
            case 'D': case 'E': case 'F':
                cout << "Bukva " << letter << " Vidpovidae cufri 3 na telefoni." << endl;
                break;
            case 'G': case 'H': case 'I':
                cout << "Bukva " << letter << " Vidpovidae cufri 4 na telefoni." << endl;
                break;
            case 'J': case 'K': case 'L':
                cout << "Bukva " << letter << " Vidpovidae cufri 5 na telefoni." << endl;
                break;
            case 'M': case 'N': case 'O':
                cout << "Bukva " << letter << " Vidpovidae cufri 6 na telefoni." << endl;
                break;
            case 'P': case 'R': case 'S':
                cout << "Bukva " << letter << " Vidpovidae cufri 7 na telefoni." << endl;
                break;
            case 'T': case 'U': case 'V':
                cout << "Bukva " << letter << " Vidpovidae cufri 8 na telefoni." << endl;
                break;
            case 'W': case 'X': case 'Y':
                cout << "Bukva " << letter << " Vidpovidae cufri 9 na telefoni." << endl;
                break;
            case 'Q': case 'Z':
                cout << "Vuhit." << endl;
                break;
            default:
                cout << "Vvedenui nepravelinui sunvol. Vvedit Q abo Z dlya vuhody." << endl;
            }
        }
    } while (letter != 'Q' && letter != 'Z');

    a = 0;
    k = I;
    do
    {
        a = a + f15(k);
        k++;
    } while (k <= I + 5);

    b = 1;
    k = I;
    do
    {
        b = b * f16(k);
        k++;
    } while (k <= I + 8);

    z = a * b - PI;

    cout << fixed << setprecision(4);
    cout << "i = " << I << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "z = " << z << endl;

    return 0;
}
