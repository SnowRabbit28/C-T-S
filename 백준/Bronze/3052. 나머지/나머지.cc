#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a;
    int v[42] = {0};
    int cnt = 0;
    for (int i = 0; i < 10; i++)
    {
        cin >> a;
        int num = a % 42;
        v[num]++;
    }

    for (int i = 0; i < 42; i++)
    {
        if (v[i] != 0)
            cnt++;
    }
    cout << cnt ;
}