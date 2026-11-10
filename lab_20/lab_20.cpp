#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include <ctime>
using namespace std;

const int VARIANT = 10;    
const int NUM_TOWNS = 6;    
const int NUM_CANDS = 5;   
typedef int VotesType[NUM_TOWNS][NUM_CANDS];

void FillVotes(VotesType votes)
{
    for (int k = 0; k < NUM_TOWNS; k++)
        for (int n = 0; n < NUM_CANDS; n++)
            votes[k][n] = rand() % 500 + 50 * VARIANT;
}

void PrintVotes(VotesType votes)
{
    cout << setw(10) << "Town";
    for (int n = 0; n < NUM_CANDS; n++)
        cout << setw(12) << "Cand. " + to_string(n + 1);
    cout << endl;

    for (int k = 0; k < NUM_TOWNS; k++)
    {
        cout << setw(10) << k + 1;
        for (int n = 0; n < NUM_CANDS; n++)
            cout << setw(12) << votes[k][n];
        cout << endl;
    }
}

int main()
{
    srand(time(NULL));

    VotesType votes;
    FillVotes(votes);

    cout << "Voting results:" << endl;
    PrintVotes(votes);

    int first[NUM_TOWNS];
    for (int k = 0; k < NUM_TOWNS; k++)
        first[k] = votes[k][0];

    int maxVotes = first[0];
    for (int k = 1; k < NUM_TOWNS; k++)
        if (first[k] > maxVotes)
            maxVotes = first[k];

    vector<int> towns;
    for (int k = 0; k < NUM_TOWNS; k++)
        if (first[k] == maxVotes)
            towns.push_back(k + 1);

    cout << "Maximum votes of the first candidate: " << maxVotes << endl;
    cout << "Town(s) where the first candidate got the maximum: ";
    for (size_t i = 0; i < towns.size(); i++)
        cout << towns[i] << " ";
    cout << endl;

    return 0;
}
