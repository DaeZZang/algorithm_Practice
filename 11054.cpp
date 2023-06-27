#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int result = 0;
    cin >> n;
    int dp[1002];
    int dp2[1002];
    int arr[1001];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i <= n; i++)
    {
        dp[i] = 1;
        for (int j = i - 1; j > 0; j--)
        {
            if (arr[i] > arr[j])
            {
                dp[i] = max(dp[i], dp[j] + 1);
            }
        }
    }
    for (int i = n; i > 0; i--)
    {
        dp2[i] = 1;
        for (int j = i + 1; j <= n; j++)
        {
            if (arr[i] > arr[j])
            {
                dp2[i] = max(dp2[i], dp2[j] + 1);
            }
        }
    }
    for (int i = 1; i <= n; i++)
    {
        result = max(dp[i] + dp2[i], result);
    }
    cout << result - 1 << "\n";
    return 0;
}