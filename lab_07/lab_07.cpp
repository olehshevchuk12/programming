#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream fin("myfile.dat");

    if (!fin)
    {
        cout << "Pomulka failu!" << endl;
        return 1;
    }

    string line;
    int count = 0;

    while (getline(fin, line))
    {
        for (int i = 0; i < line.length() - 1; i++)
        {
            if (line[i] == '!' && line[i + 1] == '=')
            {
                count++;
            }
        }
    }

    fin.close();

    cout << "Kilikisti operaci!= : " << count << endl;

    return 0;
}