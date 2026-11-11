
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class ReversibleString
{
private:
    string text;

public:
    ReversibleString()
    {
        text = "";
    }

    ReversibleString(const string& str)
    {
        text = str;
    }

    void Reverse()
    {
        reverse(text.begin(), text.end());
    }

    string ToString() const
    {
        return text;
    }
};

int main()
{
    ReversibleString s("live");

    s.Reverse();
    cout << s.ToString() << endl;

    s.Reverse();

    const ReversibleString& s_ref = s;
    string tmp = s_ref.ToString();
    cout << tmp << endl;

    ReversibleString empty;
    cout << '"' << empty.ToString() << '"' << endl;

    return 0;
}