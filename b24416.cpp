#include <iostream>
#include <vector>

using namespace std;

int fN = 0;
int dN = 0;

int fib(int n)
{
    if (n == 1 or n == 2)
    {
        fN++;
        return 1;
    }
    else
    {
        return fib(n - 1) + fib(n - 2);
    }
}

int main()
{
    int n;
    vector<int> v;
    cin >> n;
    fib(n);
    v.push_back(1);
    v.push_back(1);
    for (int i = 3; i <= n; i++)
    {
        dN++;
        v.push_back(v[i - 1] + v[i - 1]);
    }
    cout << fN << " " << dN;
    return 0;
}