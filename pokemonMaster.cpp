#include <iostream>
#include <algorithm>
#include <map>
#include <string>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int N, M;
    cin >> N >> M;
    int result = 0;
    string temp;
    map<string, int> m1;
    map<int, string> m2;
    for (int i = 0; i < N; i++)
    {
        cin >> temp;
        m1.insert({temp, i + 1});
        m2.insert({i + 1, temp});
    }
    for (int i = 0; i < M; i++)
    {
        cin >> temp;
        if (isdigit(temp[0]))
        { //숫자인 경우 value 값으로 key값을 찾아야함
            N = stoi(temp);
            auto it = m2.find(N);
            cout << it->second << "\n";
        }
        else // key값으로 value값을 찾아야함
        {    //
            auto it = m1.find(temp);
            cout << it->second << "\n";
        }
    }
    return 0;
}