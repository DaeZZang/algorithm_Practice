#include <iostream>

using namespace std;

int main()
{
    int a, b, x, y;
    cin >> a >> b;
    for (int i = 0; i < 2; i++)
    {
        cin >> x >> y;
        a ^= x;
        b ^= y;
    }
    cout << a << " " << b << endl;
    return 0;
}