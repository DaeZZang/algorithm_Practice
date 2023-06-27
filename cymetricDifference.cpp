#include <iostream>
#include <algorithm>
#include <map>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    map<int, int> v1, v2;
    int N, M;
    cin >> N >> M;
    int s;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        v1.insert({s, 1});
    }
    for (int i = 0; i < M; i++)
    {
        cin >> s;
        if (v1.find(s) != v1.end())
        {
            v1.erase(s);
        }
        else
        {
            v1.insert({s, 1});
        }
    }
    cout << v1.size();
    return 0;
}