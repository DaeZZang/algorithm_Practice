#include <iostream>
#include <vector>
#include <utility>
int depth;
bool found = false;

using namespace std;

vector<pair<int, int>> v;

int arr[9][9];

bool checkRowAndCol(pair<int, int> p)
{
    for (int i = 0; i < 9; i++) //행,열 검사
    {
        if (arr[p.first][i] == arr[p.first][p.second] && i != p.second) //같은 자리가 아닌 곳에서 같은 값이면 안됨
        {
            return false;
        }
        if (arr[i][p.second] == arr[p.first][p.second] && i != p.first) //위에랑 같음
        {
            return false;
        }
    }
    return true;
}

bool checkBox(pair<int, int> p)
{
    int xBox = p.first / 3;
    int yBox = p.second / 3;
    for (int i = xBox * 3; i < xBox * 3 + 3; i++)
    {
        for (int j = yBox * 3; j < yBox * 3 + 3; j++)
        {
            if (arr[i][j] == arr[p.first][p.second]) //박스 안 숫자 ==내가 임의로 넣은 숫자
            {
                if (i != p.first || j != p.second) //근데 그게 또 내가 넣은 곳이랑 위치가 달라! 그럼 false
                {
                    return false;
                }
            }
        }
    }
    return true;
}

void dfs(int n)
{
    if (n == depth) //끝...출력하기
    {
        cout << "\n";
        for (int i = 0; i < 9; i++)
        {
            for (int j = 0; j < 9; j++)
            {
                cout << arr[i][j] << " ";
            }
            cout << "\n";
        }
        found = true;
        return;
    }
    else
    {
        for (int i = 1; i < 10; i++)
        {
            arr[v[n].first][v[n].second] = i;           //숫자 박기
            if (checkBox(v[n]) && checkRowAndCol(v[n])) //박은 숫자 정당성 검사
            {
                // cout << "\n";
                // for (int i = 0; i < 9; i++)
                // {
                //     for (int j = 0; j < 9; j++)
                //     {
                //         cout << arr[i][j] << " ";
                //     }
                //     cout << "\n";
                // }
                dfs(n + 1);
            }
            if (found)
                return;
        }
        arr[v[n].first][v[n].second] = 0;
        return;
    }
}

int main()
{
    pair<int, int> p;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                p.first = i;
                p.second = j;
                v.push_back(p); //문제가 되는 점들 따로 저장
                depth++;
            }
        }
    }
    dfs(0);
    return 0;
}