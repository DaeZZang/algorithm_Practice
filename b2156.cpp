#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int wine[10001];
    int dp[10001];
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> wine[i];
    }
    /*dp[k]=max(dp[k-2]+wine[k],dp[k-3]+wine[k-1]+wine[k])*/
    if (n == 1)
    {
        cout << wine[1];
        return 0;
    }
    if (n == 2)
    {
        cout << wine[1] + wine[2];
        return 0;
    }
    dp[0] = 0;
    dp[1] = wine[1];
    dp[2] = dp[1] + wine[2];
    for (int i = 3; i <= n; i++)
    {
        dp[i] = max(dp[i - 1], max(dp[i - 3] + wine[i - 1] + wine[i], dp[i - 2] + wine[i]));
    }
    cout << dp[n];
    return 0;
}