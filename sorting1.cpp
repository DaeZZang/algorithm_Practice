#include <iostream>
using namespace std;
int main()
{
    int numbers[1000];
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    int temp = 0;
    for (int i = N - 1; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++)
    {
        cout << numbers[i] << '\n';
    }
    return 0;
}