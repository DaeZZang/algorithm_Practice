#include <iostream>
#define MAX 15

using namespace std;

int N, result;
int arr[MAX] = {
    //퀸이 있는 열만 표시, 행은 깊이로 확인됨
    0,
};

bool check(int x)
{
    for (int i = 0; i < x; i++) //이전까지 칠한 애들이랑 겹치는가??
    {
        if (arr[i] == arr[x] || x - i == abs(arr[x] - arr[i]))
        { //같은 열에 칠했는지, 같은 대각선인지 확인
            return false;
        }
    }
    return true;
}

void dfs(int depth)
{
    if (depth == N)
    {
        result++;
    }
    else
    {
        for (int i = 0; i < N; i++) // 행 설정
        {
            arr[depth] = i;   //(depth,i)에 퀸 위치한다
            if (check(depth)) // depth열에 퀸 위치가 정당하면 깊게 내려가기
            {
                dfs(depth + 1);
            }
        }
    }
}

int main()
{
    cin >> N;
    dfs(0);
    cout << result;
    return 0;
}