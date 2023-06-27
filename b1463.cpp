#include <iostream>
#include <vector>
#include <algorithm>
#define THREE(x) (x / 3)
#define TWO(x) (x / 2)
#define ONE(x) (x - 1)

using namespace std;

int main()
{
    int n;
    cin >> n;
    /*
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = one + dp[3] or two +dp[2]
     */
    vector<int> dp(n + 1);
    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;
    dp[4] = 2;
    for (int i = 5; i <= n; i++)
    {
        if (i % 6 == 0)
        {
            dp[i] = min(dp[i / 2] + 1, dp[i / 3] + 1);
        }
        else if (i % 3 == 0)
        {
            dp[i] = min(dp[i / 3] + 1, dp[i - 1] + 1);
        }
        else if (i % 2 == 0)
        {
            dp[i] = min(dp[i / 2] + 1, dp[i - 1] + 1);
        }
        else
        {
            dp[i] = dp[i - 1] + 1;
        }
    }
    cout << dp[n];
    return 0;
}