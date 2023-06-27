#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

typedef struct
{
    int age;
    int number;
    string name;
} s;

bool compare(s a, s b)
{
    if (a.age == b.age)
    {
        return a.number < b.number;
    }
    else
    {
        return a.age < b.age;
    }
}

int main()
{
    int N;
    cin >> N;
    vector<s> v;
    for (int i = 0; i < N; i++)
    {
        int age;
        string name;
        cin >> age >> name;
        v.push_back({age, i, name});
    }
    sort(v.begin(), v.end(), compare);
    for (int i = 0; i < N; i++)
    {
        cout << v[i].age << " " << v[i].name << "\n";
    }
    return 0;
}