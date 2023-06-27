#include <iostream>
using namespace std;
int numbers[10001] = {0};
// 입력받은 수를 전부 다 입력 받아서 저장하게 되면 제한된 8MB의 메모리를 초과해버린다.
// 숫자를 카운트 해두었다가 표준출력으로 출력만 해주는 방식을 사용해야한다.
int main()
{
    ios::sync_with_stdio(false); // c++만의 독립적인 버퍼가 생성되어 c의 버퍼와 병행하여 사용할 수 없게 되지만, 사용하는 버퍼의 수가 줄어들었기 때문에 실행 속도는 빨라지게 됩니다.
    cin.tie(NULL);
    cout.tie(NULL);
    // cin으로 읽을 때 먼저 출력 버퍼를 비우는데,
    //마찬가지로 알고리즘을 풀 때는 화면에 바로 보이는 것이 중요하지 않습니다.
    //따라서, 입력과 출력을 여러 번 번갈아가며 반복해야 하는 경우 필수적으로 cin.tie(null);
    //코드를 추가하여 cout과 cin의 묶음을 풀어줘야 합니다.

    int N;
    cin >> N; //숫자를 몇개를 받는지 입력받는다.
    for (int i = 0; i < N; i++)
    {
        int temp;
        cin >> temp;
        numbers[temp] += 1; //카운팅
    }
    for (int i = 1; i <= 10000; i++)
    {
        for (int j = 0; j < numbers[i]; j++) // 0개 이면 그냥 출력 안함
        {
            cout << i << "\n";
        }
    }
    return 0;
}