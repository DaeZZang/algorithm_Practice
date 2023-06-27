#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, result;
    cin >> N;
    vector<int> numbers(N);
    vector<int> v(N);
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    for (int i = 0; i < N; i++)
    {
        v[i] = numbers[i]; //자기 자신만 포함하는 경우
        if (i == 0)
        {
            result = numbers[0];
            continue;
        }
        if (v[i] < v[i - 1] + v[i])
        {
            v[i] = v[i - 1] + v[i];
        }
        if (result < v[i])
        {
            result = v[i];
        }
    }
    cout << result << endl;
    return 0;
}