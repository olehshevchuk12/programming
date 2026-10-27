#include <iostream>
#include <iomanip>
using namespace std;

const float PERSON_WT    = 170.0;      
const float LBS_PER_GAL  = 6.7;        
const float EMPTY_WEIGHT = 9887.0;     
const float EMPTY_MOMENT = 3185853.0;  

const float CREW_DIST    = 143.0;
const float ROW1_DIST    = 219.0;
const float ROW2_DIST    = 265.0;
const float ROW3_DIST    = 295.0;
const float ROW4_DIST    = 341.0;
const float CLOSET_DIST  = 182.0;
const float BAGGAGE_DIST = 386.0;
 
const float MAX_WEIGHT = 14900.0;
const float MIN_CG     = 300.0;
const float MAX_CG     = 330.0;

void  GetData(int& crew, int& passengers, int& closet, int& baggage, int& fuel);
float CrewMoment(int crew);
float PassengerMoment(int passengers);
float CargoMoment(int closet, int baggage);
float FuelMoment(int fuel);
void  PrintWarning(float totalWt, float centerOfGravity);

int main()
{
    int crew, passengers, closet, baggage, fuel;
    float totalWt, centerOfGravity;

    // 1. Отримуємо вхідні дані
    GetData(crew, passengers, closet, baggage, fuel);

    // 2. Загальна вага
    totalWt = EMPTY_WEIGHT + float(passengers + crew) * PERSON_WT + float(baggage + closet) + float(fuel) * LBS_PER_GAL;

    // 3. Центр ваги
    centerOfGravity = (CrewMoment(crew) + PassengerMoment(passengers) + CargoMoment(closet, baggage) + FuelMoment(fuel) + EMPTY_MOMENT) / totalWt;

    
    cout << fixed << setprecision(2);
    cout << totalWt << endl;
    cout << centerOfGravity << endl;

    
    PrintWarning(totalWt, centerOfGravity);

    return 0;
}

void GetData(int& crew, int& passengers, int& closet, int& baggage, int& fuel)
{
    cin >> crew >> passengers >> closet >> baggage >> fuel;
}

float CrewMoment(int crew)
{
    return float(crew) * PERSON_WT * CREW_DIST;
}

// Момент пасажирів: спочатку 2 ряд, потім 1, потім 3, потім 4 (по 2 місця)
float PassengerMoment(int passengers)
{
    float moment;

    if (passengers <= 2)
        moment = float(passengers) * PERSON_WT * ROW2_DIST;
    else if (passengers <= 4)
        moment = 2 * PERSON_WT * ROW2_DIST
               + float(passengers - 2) * PERSON_WT * ROW1_DIST;
    else if (passengers <= 6)
        moment = 2 * PERSON_WT * ROW2_DIST
               + 2 * PERSON_WT * ROW1_DIST
               + float(passengers - 4) * PERSON_WT * ROW3_DIST;
    else
        moment = 2 * PERSON_WT * ROW2_DIST
               + 2 * PERSON_WT * ROW1_DIST
               + 2 * PERSON_WT * ROW3_DIST
               + float(passengers - 6) * PERSON_WT * ROW4_DIST;

    return moment;
}

float CargoMoment(int closet, int baggage)
{
    return float(closet) * CLOSET_DIST + float(baggage) * BAGGAGE_DIST;
}
 
float FuelMoment(int fuel)
{
    float D;
    float G = float(fuel);

    if (fuel <= 59)
        D = 314.6 * G;
    else if (fuel <= 360)
        D = 305.8 + (-0.01233 * (G - 60));
    else if (fuel <= 520)
        D = 303.0 + (0.12500 * (G - 361));
    else
        D = 323.0 + (-0.04444 * (G - 521));

    return G * LBS_PER_GAL * D;
}

void PrintWarning(float totalWt, float centerOfGravity)
{
    if (totalWt > MAX_WEIGHT)
        cout << "YVAGA! Zanadto veluka vaga - Litak ne zmoge pidnyatusya!" << endl;
    if (centerOfGravity < MIN_CG || centerOfGravity > MAX_CG)
        cout << "YVAGA! Center vagu poza megamu - Litakom ne mogluvo keruvatu!" << endl;
}
