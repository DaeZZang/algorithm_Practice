#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int numbers[8001] = {
    0,
};
vector<int> arr;
int main()
{
    ios::sync_with_stdio(false);
    int N;
    cin >> N;
    int tot = 0;
    int tmp = 0;
    for (int i = 0; i < N; i++) //숫자 입력 받기
    {
        cin >> tmp;
        arr.push_back(tmp);
        tot += tmp;
        numbers[tmp + 4000]++;
    }
    sort(arr.begin(), arr.end()); //정렬하기

    bool flag = false;
    int max = -999;
    int mode = 0;
    for (int i = 0; i < 8001; i++)
    {
        if (numbers[i] == 0)
        {
            continue;
        }
        if (numbers[i] == max)
        {
            if (flag)
            {
                mode = i - 4000;
                flag = false;
            }
        }
        if (numbers[i] > max)
        {
            max = numbers[i];
            mode = i - 4000;
            flag = true; //최빈값이 하나일때 true 여러개일때 false
        }
    }
    cout << round((float)tot / N) << "\n";    //산술평균
    cout << arr[arr.size() / 2] << "\n";      //중앙값
    cout << mode << "\n";                     //최빈값
    cout << arr.back() - arr.front() << "\n"; //범위
    cout << round(-1.0 / 3.0) + 0 << "\n";
}