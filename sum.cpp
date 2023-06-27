#include <iostream>
using namespace std;

int main()
{
    int number;
    int temp;
    int flag = 0;
    int sum = 0;
    cin >> number;
    for (int i = 1; i < number; i++)
    {
        sum = i;
        temp = i;
        while (temp > 0)
        {
            sum += (temp % 10);
            temp /= 10;
        }
        if (sum == number)
        {
            cout << i;
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        cout << "0";
    }
    return 0;
}