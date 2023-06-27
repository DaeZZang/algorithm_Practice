#include <iostream>
#include <algorithm>
using namespace std;
string words[20000];

bool compare(string a, string b)
{
    if (a.length() == b.length())
    {
        return a < b;
    }
    else
    {
        return a.length() < b.length();
    }
}

int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> words[i];
    }
    sort(words, words + N, compare);
    for (int i = 0; i < N; i++)
    {
        if (words[i] == words[i - 1])
            continue;
        cout << words[i] << "\n";
    }
    return 0;
}