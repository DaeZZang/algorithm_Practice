#include <iostream>
int count = 0;
int number = 665;
int t;
int movieNumber;
using namespace std;

int main()
{
    int movieNumber;
    cin >> movieNumber;

    while (count != movieNumber)
    {
        number++;
        t = number;
        while (t != 0)
        {
            if (t % 1000 == 666)
            {
                count++;
                break;
            }
            else
                t /= 10;
        }
    }
    cout << number;
    return number;
}