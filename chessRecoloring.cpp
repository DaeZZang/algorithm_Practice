#include <iostream>
using namespace std;
char chess[51][51]; //공통된 배열은 그냥 전역변수처리하자
char white[8][8] = {
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W'};

char black[8][8] = {
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B',
    'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W',
    'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B'};

int whiteCount(int x, int y)
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chess[x + i][y + j] != white[i][j])
                count++;
        }
    }
    return count;
}
int blackCount(int x, int y)
{
    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if (chess[x + i][y + j] != black[i][j])
                count++;
        }
    }
    return count;
}
int main()
{
    int N, M;
    cin >> N >> M;

    for (int i = 0; i < N; i++) //배열 입력받기
    {
        for (int j = 0; j < M; j++)
        {
            cin >> chess[i][j];
        }
    }

    int black, white;
    int min = 64;

    for (int i = 0; i < N - 7; i++)
    {
        for (int j = 0; j < M - 7; j++)
        {
            black = blackCount(i, j);
            white = whiteCount(i, j);
            if (black < white)
            {
                min = (min > black ? black : min); //삼항연산자 잘 쓰자
            }
            else
            {
                min = (min > white ? white : min);
            }
        }
    }
    cout << min << "";
}
