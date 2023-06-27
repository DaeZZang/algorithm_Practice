#include <iostream>
#include <utility>
#include <map>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int N;
    string temp;
    cin >> N;
    map<string, int> m;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        m.insert({temp, 0});
    }
    for (auto iter : m)
    {
        cout << iter.first << " " << iter.second << endl;
    }

    return 0;
}