#include <iostream>
#include <vector>

using namespace std;

int cost[1001][3];
int d[1001][3];

int min(int x, int y)
{
    return x < y ? x : y;
}

int main()
{
    int N, result;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> cost[i][j];
        }
    }
    d[0][0] = d[0][1] = d[0][2] = cost[0][0] = cost[0][1] = cost[0][2] = 0;
    for (int i = 1; i <= N; i++)
    {
        d[i][0] = min(d[i - 1][1], d[i - 1][2]) + cost[i][0];
        d[i][1] = min(d[i - 1][0], d[i - 1][2]) + cost[i][1];
        d[i][2] = min(d[i - 1][1], d[i - 1][0]) + cost[i][2];
    }
    result = min(min(d[N][0], d[N][1]), d[N][2]);
    cout << result;
    return 0;
}