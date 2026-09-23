#include <iostream>
using namespace std;

int main() {

    int day = 0;

    cout << "Vedit Deni Tugnya (1-7): " << endl;
    cin >> day;

    if (day == 1)
        cout << "Ponediok, robochykh dniv zalyshylos: 4";

    else if (day == 2)
        cout << "Vivtorok, robochykh dniv zalyshylos: 3";

    else if (day == 3)
        cout << "Sereda, robochykh dniv zalyshylos: 2";

    else if (day == 4)
        cout << "Chetver, robochykh dniv zalyshylos: 1";

    else if (day == 5)
        cout << "Piatnytsia, robochykh dniv zalyshylos: 0";

    else if (day == 6)
        cout << "Subota, vyhidnyi";

    else if (day == 7)
        cout << "Nedilia, vyhidnyi";

    else
      cout << "Pomylka! Vedit chislo vid 1 do 7.";

    return 0;
}