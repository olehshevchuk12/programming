#include <iostream>
#include "phone_number.h"

using namespace std;

int main()
{
    try
    {
        PhoneNumber phone1("+38-067-7777");
        cout << phone1.GetInternationalNumber() << endl;
    }
    catch (const exception& ex)
    {
        cout << ex.what() << endl;
    }

    try
    {
        PhoneNumber phone2("380-67-7777");
        cout << phone2.GetInternationalNumber() << endl;
    }
    catch (const exception& ex)
    {
        cout << ex.what() << endl;
    }

    return 0;
}