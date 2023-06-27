#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    int result = 0;
    string temp;
    vector<string> s;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        s.push_back(temp);
    }
    sort(s.begin(), s.end());
    while (M--)
    {
        cin >> temp;
        if (binary_search(s.begin(), s.end(), temp))
        {
            result++;
        }
    }
    cout << result;
    return 0;
}