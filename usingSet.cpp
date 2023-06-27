#include <iostream>
#include <set>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    // set의 특징
    //중복 삭제,순서 상관없이 정렬 입력
    set<string> sts;
    string s, tmp;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        for (int j = i; j < s.length(); j++)
        {
            tmp += s[j];
            sts.insert(tmp);
        }
        tmp = "";
    }
    cout << sts.size();
    return 0;
}