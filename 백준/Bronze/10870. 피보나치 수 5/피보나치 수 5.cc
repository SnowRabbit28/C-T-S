#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num = 0;
    cin >> num;
    int first = 0;
    int second = 1;
    int sum = 0;

    if (num == 0){
        cout << 0;
        return 0;
    }
    if (num == 1){
        cout << 1;
        return 0;
    }

    for (int i = 2; i <= num; i++)
    {
        sum = first + second;
        first = second;
        second = sum;
    }
    cout << sum;
}

