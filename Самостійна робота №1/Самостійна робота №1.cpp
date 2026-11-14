#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int q;
    cin >> q;

    map<string, vector<string>> lines;
    map<string, vector<string>> stations;

    for (int i = 0; i < q; i++)
    {
        string command;
        cin >> command;

        if (command == "NEW_LINE")
        {
            string line;
            int n;

            cin >> line >> n;

            for (int j = 0; j < n; j++)
            {
                string station;
                cin >> station;

                lines[line].push_back(station);
                stations[station].push_back(line);
            }
        }

        else if (command == "LINES_FOR_STATION")
        {
            string station;
            cin >> station;

            if (stations.count(station) == 0)
            {
                cout << "No station" << endl;
            }
            else
            {
                for (int j = 0; j < stations[station].size(); j++)
                    cout << stations[station][j] << " ";

                cout << endl;
            }
        }

        else if (command == "STATIONS_FOR_LINE")
        {
            string line;
            cin >> line;

            if (lines.count(line) == 0)
            {
                cout << "No line" << endl;
            }
            else
            {
                for (int j = 0; j < lines[line].size(); j++)
                {
                    string station = lines[line][j];

                    cout << "Stop " << station << ": ";

                    bool found = false;

                    for (int k = 0; k < stations[station].size(); k++)
                    {
                        if (stations[station][k] != line)
                        {
                            cout << stations[station][k] << " ";
                            found = true;
                        }
                    }

                    if (!found)
                        cout << "no interchange";

                    cout << endl;
                }
            }
        }

        else if (command == "ALL_LINES")
        {
            if (lines.empty())
            {
                cout << "No lines" << endl;
            }
            else
            {
                for (auto x : lines)
                {
                    cout << "Line " << x.first << ": ";

                    for (int j = 0; j < x.second.size(); j++)
                        cout << x.second[j] << " ";

                    cout << endl;
                }
            }
        }
    }

    return 0;
}