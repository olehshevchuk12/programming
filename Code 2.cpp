#include <iostream>
using namespace std;

int main(){
    double distance1 = 0.375;
    double distance2 = 0.575;
    double distance3 = 1.475;
    double distance4 = 1.0;
    double total = distance1 + distance2 + distance3 + distance4;

    cout << "distance1: " << distance1 << "km " << endl;
    cout << "distance2: " << distance2 << "km " << endl;
    cout << "distance3: " << distance3 << "km " << endl;
    cout << "distance4: " << distance4 << "km " << endl;

    cout << total << "km " << endl;

    return 0;
}
