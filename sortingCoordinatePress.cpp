#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
    int N;
    cin >> N;
    vector<int> original(N);
    for (int i = 0; i < N; i++)
    {
        int n;
        cin >> original[i];
    }
    vector<int> s(original);
    sort(s.begin(), s.end());

    s.erase(unique(s.begin(), s.end()), s.end());

    for (int i = 0; i < N; i++)
    {
        auto it = lower_bound(s.begin(), s.end(), original[i]);
        cout << it - s.begin() << " ";
    }

    return 0;
}