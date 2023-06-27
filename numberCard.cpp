#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<int> v;
    int N, M, temp;
    cin >> N;
    while (N--)
    {
        cin >> temp;
        v.push_back(temp);
    }
    sort(v.begin(), v.end());
    cin >> M;
    while (M--)
    {
        cin >> temp;
        cout << binary_search(v.begin(), v.end(), temp) << " ";
    }
    return 0;
}