#include <iostream>
int main () {
    using namespace std;

    long speed_light = 299792;
    int hour_in_sec = 3600;
    int day_in_sec = 86400;

    long speed_by_hour = speed_light * hour_in_sec;

    long speed_by_day = speed_light * day_in_sec;
    
    cout << "speed_by_hour" << " " << speed_by_hour << "km" << endl;
    cout << "speed_by_day" << " " << speed_by_day << "km" << endl;


return 0;
}