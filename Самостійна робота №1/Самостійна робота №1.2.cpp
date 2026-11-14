#include <iostream>
#include <map>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int q;
    cin >> q;

    map<string, vector<string>> groups;
    map<string, vector<string>> users;

    for (int i = 0; i < q; i++)
    {
        string command;
        cin >> command;

        if (command == "NEW_GROUP")
        {
            string group;
            int n;
            cin >> group >> n;

            for (int j = 0; j < n; j++)
            {
                string user;
                cin >> user;

                groups[group].push_back(user);
                users[user].push_back(group);
            }
        }

        else if (command == "GROUPS_FOR_USER")
        {
            string user;
            cin >> user;

            if (users.count(user) == 0)
            {
                cout << "No user" << endl;
            }
            else
            {
                for (int j = 0; j < users[user].size(); j++)
                {
                    cout << users[user][j] << " ";
                }
                cout << endl;
            }
        }

        else if (command == "USERS_FOR_GROUP")
        {
            string group;
            cin >> group;

            if (groups.count(group) == 0)
            {
                cout << "No group" << endl;
            }
            else
            {
                for (int j = 0; j < groups[group].size(); j++)
                {
                    string user = groups[group][j];

                    cout << "User " << user << ": ";

                    int c = 0;

                    for (int k = 0; k < users[user].size(); k++)
                    {
                        if (users[user][k] != group)
                        {
                            cout << users[user][k] << " ";
                            c++;
                        }
                    }

                    if (c == 0)
                        cout << "no interchange";

                    cout << endl;
                }
            }
        }

        else if (command == "ALL_GROUPS")
        {
            if (groups.empty())
            {
                cout << "No groups" << endl;
            }
            else
            {
                for (auto x : groups)
                {
                    cout << "Group " << x.first << ": ";

                    for (int j = 0; j < x.second.size(); j++)
                    {
                        cout << x.second[j] << " ";
                    }

                    cout << endl;
                }
            }
        }
    }

    return 0;
}