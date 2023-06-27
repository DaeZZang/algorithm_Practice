#include <iostream>

using namespace std;

int main()
{
    /*
    dp[i][j] 는 마지막 숫자가 j이고 길이가 i인 계단수의 경우의수
    dp[i][j] = dp[i-1][j-1]+dp[i-1][j+1]
    계단 수 1일때 1,2,3,4,5,6,7,8,9 :9개
    계단 수 2일때 12 23 34 45 56 67 78 89 10 21 32 43 54 65 76 87 98 : 17개
    계단 수 3일때 121 123 232 234 343 345 454 456 565
                567 676 678 787 789 898 101 210 212
                321 323 432 434 543 545 654 656 765
                767 876 878 987 989 :   32개
    */
    int n;
    long long result;
    long long bn = 1000000000;
    long long dp[101][10] = {
        0,
    };
    cin >> n;
    for (int i = 1; i < 10; i++)
    {
        dp[1][i] = 1;
    }
    for (int i = 2; i <= n; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (j == 0)
            {
                dp[i][j] = dp[i - 1][j + 1] % bn;
            }
            else if (j == 9)
            {
                dp[i][j] = dp[i - 1][j - 1] % bn;
            }
            else
            {
                dp[i][j] = (dp[i - 1][j - 1] + dp[i - 1][j + 1]) % bn;
            }
            dp[i][j] %= bn;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        result += dp[n][i];
        result %= bn;
    }
    cout << result << endl;
    return 0;
}