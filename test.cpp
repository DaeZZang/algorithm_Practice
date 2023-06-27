#include <iostream>
#include <math.h>
using namespace std;
// hanoi(원판개수,출발지,경유지,도착지)
void hanoi(int num, int from, int by, int to)
{
    if (num == 1) //재귀함수 탈출 조건
        cout << from << " " << to << "\n";
    else
    {
        hanoi(num - 1, from, to, by); //기둥 1에서 기둥 2로 기둥 다 옮김
        cout << from << " " << to << "\n";
        hanoi(num - 1, by, from, to); //기둥 2에서 기둥 3으로 기둥 다 옮김
    }
}

int main()
{
    int num;
    cin >> num;
    cout << (1 << num) - 1 << "\n"; // pow()는 실수 형태로 출력하여 큰 수가 정수형태로 출력되지 않는다.
    hanoi(num, 1, 2, 3);
}