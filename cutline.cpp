#include <iostream>
#include <algorithm>
using namespace std;
int numbers[10001];
int main()
{
    ios::sync_with_stdio(false);
    int N, k;
    cin >> N;
    cin >> k;
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    sort(numbers, numbers + N);
    cout << numbers[N - k];
    return 0;
}