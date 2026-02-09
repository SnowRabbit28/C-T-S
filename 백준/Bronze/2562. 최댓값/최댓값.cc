#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int max = 0;
    int cnt = 0;
    for (int i = 1; i <= 9; i++)
    {
        int a;
        cin >> a;
        if (max < a)
        {
            cnt = i;
            max = a;
        }
    }
    cout << max << "\n" << cnt;
}