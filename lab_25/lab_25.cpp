#include <iostream>
#include <vector>
#include <map>

using namespace std;

template <class T>
T Sqr(T x)
{
    return x * x;
}

template <class T1, class T2>
pair<T1, T2> Sqr(pair<T1, T2> p)
{
    pair<T1, T2> result;

    result.first = Sqr(p.first);
    result.second = Sqr(p.second);

    return result;
}

template <class T>
vector<T> Sqr(vector<T> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        v[i] = Sqr(v[i]);
    }

    return v;
}

template <class K, class V>
map<K, V> Sqr(map<K, V> m)
{
    for (auto& element : m)
    {
        element.second = Sqr(element.second);
    }

    return m;
}

int main()
{
    vector<int> numbers = {1, 2, 3};

    vector<int> resultVector = Sqr(numbers);

    cout << "Vector: ";

    for (int x : resultVector)
    {
        cout << x << " ";
    }

    cout << endl << endl;

    map<int, pair<int, int>> data =
    {
        {4, {2, 2}},
        {7, {4, 3}}
    };

    map<int, pair<int, int>> resultMap = Sqr(data);

    cout << "Map:" << endl;

    for (auto element : resultMap)
    {
        cout << "Key = " << element.first << endl;

        cout << "First value = "
             << element.second.first << endl;

        cout << "Second value = "
             << element.second.second << endl;

        cout << endl;
    }

    return 0;
}
