#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int x, y;
    int w, h;
    cin >> x >> y >> w >> h;
    int a, b;
    a = min(x, w - x);
    b = min(y, h - y);
    cout << min(a, b);

    return 0;
}
