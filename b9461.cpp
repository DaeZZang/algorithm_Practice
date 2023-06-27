#include <iostream>
#include <vector>

using namespace std;

long long p(int n)
{
    vector<long long> v = {0, 1, 1, 1, 2};
    int result = 0;
    if (n < 5)
    {
        return v[n];
    }
    else
    {
        for (int i = 5; i < n + 1; i++)
        {
            v.push_back(v[i - 1] + v[i - 5]);
            // cout << i << ": " << v[i] << endl;
        }
    }
    return v[n];
}

int main()
{
    int N, tmp;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> tmp;
        cout << p(tmp) << "\n";
    }
    return 0;
}