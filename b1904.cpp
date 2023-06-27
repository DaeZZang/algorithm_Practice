#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, tmp;
    vector<long long> v = {0, 1, 2};
    cin >> N;
    for (int i = 3; i < N + 1; i++)
    {
        tmp = 0;
        tmp = v[i - 1] + v[i - 2];
        v.push_back(tmp % 15746);
    }
    cout << v[N];
    return 0;
}

/**
 * N=1
 * 1
 * N=2
 * 11 00
 * N=3
 * 001 100 111
 * N=4
 * 0011 0000 1001 1100 1111
 * N=5
 * 00001 00100 10000
 * 00111 10011 11001 11100
 * 11111
 *
 */