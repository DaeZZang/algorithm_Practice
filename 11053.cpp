#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    int result = 0;
    cin >> n;
    int dp[1001];
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
        result = max(dp[i], result);
    }
    cout << result << "\n";
    return 0;
}