#include <iostream>
#include <vector>
#include <utility>

#define MAX 20

using namespace std;

bool checkNumbers[MAX];
int grid[MAX][MAX];
int minN = 1000000001;
int aScore, bScore, N;

void calculate()
{
    int start = 0;
    int link = 0;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            if (checkNumbers[i] && checkNumbers[j])
                start += grid[i][j];
            if (checkNumbers[i] == false && checkNumbers[j] == false)
                link += grid[i][j];
        }
    }
    int result = abs(start - link);
    if (result < minN)
        minN = result;
    for (int i = 0; i < N; i++)
    {
        cout << checkNumbers[i];
    }
    cout << "\n"
         << "result: " << result << " Min: " << minN << "\n";
    return;
}

void dps(int index, int depth)
{
    if (depth == (N / 2)) // numbers 보고 팀을 뽑고 점수 비교하는 절차
    {
        calculate();
        return;
    }
    else //팀뽑기
    {
        for (int i = index; i < N; i++)
        {
            if (!checkNumbers[i]) //만약 선수 index가 포함이 안되어 있다면
            {
                checkNumbers[i] = true; //팀에 포함된 세계선
                dps(i + 1, depth + 1);  //팀에 포함시켜 보내버리기
                checkNumbers[i] = false;
            }
        }
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin >> N;                   //숫자 개수 입력받기
    for (int i = 0; i < N; i++) //시너지표 입력받기
    {
        for (int j = 0; j < N; j++)
        {
            cin >> grid[i][j];
        }
    }
    dps(0, 0);
    cout << minN;
    return 0;
}