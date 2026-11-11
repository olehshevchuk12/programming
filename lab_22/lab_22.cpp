
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

class SortedStrings
{
private:
    vector<string> data;

public:
    void AddString(const string& s)
    {
        data.push_back(s);
        sort(data.begin(), data.end());
    }

    vector<string> GetSortedStrings() const
    {
        return data;
    }
};

void PrintSortedStrings(const SortedStrings& strings)
{
    vector<string> words = strings.GetSortedStrings();

    for (string s : words)
    {
        cout << s << " ";
    }

    cout << endl;
}

int main()
{
    SortedStrings strings;

    strings.AddString("first");
    strings.AddString("third");
    strings.AddString("second");

    PrintSortedStrings(strings);

    strings.AddString("second");

    PrintSortedStrings(strings);

    return 0;
}