#include <iostream>
#include <cstdio>

using namespace std;
int main()
{
    int cardNumber, M;
    int cards[100];
    int result = 0;
    int sum = 0;
    cin >> cardNumber >> M;
    for (int i = 0; i < cardNumber; i++)
    {
        cin >> cards[i];
    }
    for (int i = 0; i < cardNumber - 2; i++)
    {
        for (int j = i + 1; j < cardNumber - 1; j++)
        {
            for (int k = j + 1; k < cardNumber; k++)
            {
                sum = cards[i] + cards[j] + cards[k];
                if (sum > result && sum <= M)
                {
                    result = sum;
                }
            }
        }
    }
    cout << result << "\n";
}