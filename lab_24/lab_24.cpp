
#include <iostream>
using namespace std;

int GreatestCommonDivisor(int a, int b)
{
    a = abs(a);
    b = abs(b);

    while (b != 0)
    {
        int t = a % b;
        a = b;
        b = t;
    }

    return a;
}

class Rational
{
private:
    int numerator;
    int denominator;

public:
    Rational()
    {
        numerator = 0;
        denominator = 1;
    }

    Rational(int p, int q)
    {
        if (p == 0)
        {
            numerator = 0;
            denominator = 1;
            return;
        }

        if (q < 0)
        {
            p = -p;
            q = -q;
        }

        int gcd = GreatestCommonDivisor(p, q);

        numerator = p / gcd;
        denominator = q / gcd;
    }

    int Numerator() const
    {
        return numerator;
    }

    int Denominator() const
    {
        return denominator;
    }
};

int main()
{
    {
        const Rational r(3, 10);
        if (r.Numerator() != 3 || r.Denominator() != 10)
        {
            cout << "Rational(3,10) != 3/10";
            return 1;
        }
    }

    {
        const Rational r(8, 12);
        if (r.Numerator() != 2 || r.Denominator() != 3)
        {
            cout << "Rational(8,12) != 2/3";
            return 2;
        }
    }

    {
        const Rational r(-4, 6);
        if (r.Numerator() != -2 || r.Denominator() != 3)
        {
            cout << "Rational(-4,6) != -2/3";
            return 3;
        }
    }

    {
        const Rational r(4, -6);
        if (r.Numerator() != -2 || r.Denominator() != 3)
        {
            cout << "Rational(4,-6) != -2/3";
            return 3;
        }
    }

    {
        const Rational r(0, 15);
        if (r.Numerator() != 0 || r.Denominator() != 1)
        {
            cout << "Rational(0,15) != 0/1";
            return 4;
        }
    }

    {
        const Rational r;
        if (r.Numerator() != 0 || r.Denominator() != 1)
        {
            cout << "Rational() != 0/1";
            return 5;
        }
    }

    cout << "OK";
    return 0;
}