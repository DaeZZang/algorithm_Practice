#include <iostream>
#include <utility>
#include <map>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M, temp;
    cin >> N;
    map<int, int> m;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        auto findN = m.find(temp);
        if (findN != m.end())
        { //찾은 경우
            m.insert({temp, findN->second++});
        }
        else
        { //못 찾은 경우
            m.insert({temp, 1});
        }
    }
    cin >> M;
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        auto findM = m.find(temp);
        if (findM != m.end())
        {
            cout << findM->second << " ";
        }
        else
        {
            cout << "0 ";
        }
    }
    return 0;
}