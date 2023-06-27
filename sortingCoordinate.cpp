#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<pair<int, int>> v;
    for (int i = 0; i < N; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(pair<int, int>(x, y));
    }
    sort(v.begin(), v.end());
    vector<pair<int, int>>::iterator iter;
    for (iter = v.begin(); iter != v.end(); iter++)
    {
        cout << iter->second << " " << iter->first << "\n";
    }
    return 0;
}