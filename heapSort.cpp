#include <iostream>
#define parent(x) (x - 1) / 2
using namespace std;
int numbers[1000];
void swap(int i, int j)
{
    int temp = numbers[i];
    numbers[i] = numbers[j];
    numbers[j] = temp;
}
void makeHeap(int *data, int size)
{
    for (int i = 1; i < size; i++)
    {
        int child = i;
        while (child > 0)
        {
            int root = parent(child);
            if (data[root] < data[child])
            {
                swap(root, child);
            }
            child = root;
        }
    }
}
void print(int *data, char *s, int n)
{
    cout << s << "\n";
    for (int i = 0; i < n; i++)
    {
        cout
            << i
            << ": "
            << numbers[i] << "\n";
    }
}
int main()
{
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        cin >> numbers[i];
    }
    print(numbers, "RawArray", N);
    makeHeap(numbers, N);
    print(numbers, "firstHeap", N);
    for (int i = N - 1; i >= 0; i--)
    {
        swap(i, 0);
        makeHeap(numbers, i);
        print(numbers, "afterHeap", N);
    }
    //결과 출력
    print(numbers, "FinalResult", N);
    return 0;
}