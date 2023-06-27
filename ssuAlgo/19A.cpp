#include <iostream>
#include <algorithm>

using namespace std;

int a[4];
int b[4];
int c[4];

int main()
{
    for (int i = 1; i <= 3; i++) // A 입력
    {
        cin >> a[i];
    }
    for (int i = 1; i <= 3; i++)
    {
        cin >> c[i];
    }
    b[1] = c[1] - a[3];
    b[2] = c[2] / a[2];
    b[3] = c[3] - a[1];
    for (int i = 1; i <= 3; i++)
    {
        cout << b[i] << " ";
    }
    return 0;
}