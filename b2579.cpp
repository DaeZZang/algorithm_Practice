#include <iostream>

using namespace std;

int stair[301];
int dp[301];

int max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++)
    {
        cin >> stair[i];
    }
    /*dp[1] stair[1], dp[2] stair[1]+stair[2] or stair[2](당연히 전자)
    dp[3] stair[1] + stair[3] or stair[2]+stair[3]
    dp[4] dp[2]+stair[4] or dp[1]+stair[3]+stair[4]
    dp[5] dp[3]+stair[5] or dp[2]+stair[4]+stair[5]
    dp[n]=max(dp[n-2]+stair[n],dp[n-3]+stair[n-1]+stair[n])
    */
    dp[0] = 0;
    dp[1] = stair[1];
    dp[2] = stair[1] + stair[2];
    for (int i = 3; i <= N; i++)
    {
        dp[i] = max(dp[i - 2] + stair[i], dp[i - 3] + stair[i - 1] + stair[i]);
    }
    cout << dp[N] << "\n";
    return 0;
}