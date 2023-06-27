#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<string> v1, v2;
    int N, M;
    string s;
    cin >> N >> M;
    for (int i = 0; i < N; i++)
    {
        cin >> s;
        v1.push_back(s);
    }
    sort(v1.begin(), v1.end());
    for (int i = 0; i < M; i++)
    {
        cin >> s;
        if (binary_search(v1.begin(), v1.end(), s))
        {
            v2.push_back(s);
        }
    }
    sort(v2.begin(), v2.end());
    cout << v2.size() << "\n";
    for (auto o : v2)
    {
        cout << o << "\n";
    }
    return 0;
}