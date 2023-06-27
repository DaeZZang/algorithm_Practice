#include <iostream>
#include <vector>
#include <utility>

using namespace std;

vector<int> numbers;
vector<int> ops;

int minN = 1000000001;
int maxN = -1000000001;
int nn;

void dps(int result, int depth)
{
    if (depth == nn) //탈출조건,출력
    {
        if (result < minN)
        {
            minN = result;
        }
        if (result > maxN)
        {
            maxN = result;
        }
        return;
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            if (ops[i] > 0)
            {
                ops[i]--;
                if (i == 0) //더하기
                {
                    dps(result + numbers[depth], depth + 1);
                }
                else if (i == 1) //빼기
                {
                    dps(result - numbers[depth], depth + 1);
                }
                else if (i == 2) //곱하기
                {
                    dps(result * numbers[depth], depth + 1);
                }
                else //나누기
                {
                    dps(result / numbers[depth], depth + 1);
                }
                ops[i]++;
            }
        }
    }
    return;
}

int main()
{
    int tmp;
    cin >> nn;                   //숫자 개수 입력받기
    for (int i = 0; i < nn; i++) //숫자 입력받기
    {
        cin >> tmp;
        numbers.push_back(tmp);
    }
    for (int i = 0; i < 4; i++) //연산자 개수 입력받기
    {
        cin >> tmp;
        ops.push_back(tmp);
    }
    dps(numbers[0], 1);
    cout << maxN << "\n"
         << minN;
    return 0;
}