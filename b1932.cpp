#include <iostream>

using namespace std;

int tree[500][500];

int max(int x, int y)
{
    return x > y ? x : y;
}

int main()
{
    int N;
    int result = 0;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cin >> tree[i][j];
        }
    }
    //양끝: 본인+부모값, 가운데: 본인+양쪽 부모님값 비교
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if (j == 0) //양사이드
            {
                tree[i][j] = tree[i - 1][0] + tree[i][j];
            }
            else if (j == i)
            {
                tree[i][j] = tree[i - 1][j - 1] + tree[i][j];
            }
            else
            {
                tree[i][j] = max(tree[i - 1][j - 1] + tree[i][j], tree[i - 1][j] + tree[i][j]);
            }
            result = max(result, tree[i][j]);
        }
    }
    cout << result << endl;
    return 0;
}