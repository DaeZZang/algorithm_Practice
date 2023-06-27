#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> arr;
bool compare(int a, int b)
{
    return a > b;
}
int main()
{
    int N;
    cin >> N;
    while (N != 0)
    {
        arr.push_back(N % 10);
        N /= 10;
    }
    sort(arr.begin(), arr.end(), compare);
    for (auto i : arr)
    {
        cout << i << "";
    }
    return 0;
}