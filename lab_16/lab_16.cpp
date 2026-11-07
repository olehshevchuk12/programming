#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream inputFile("input.txt");
    ofstream outputFile("output.txt");

    int number;

    if (!inputFile)
    {
        cout << "Error opening input file!" << endl;
        return 1;
    }

    while (inputFile >> number)
    {
        if (number != 0)
        {
            outputFile << number << " ";
        }
    }

    inputFile.close();
    outputFile.close();

    cout << "Done! Result has been saved to output.txt" << endl;

    return 0;
}