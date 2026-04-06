#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int tmp = n;

    if (tmp == 4 || tmp == 7)
        cout << -1;
    else
    {
        if (tmp % 5 == 0)
            cout << tmp / 5;
        else if (tmp % 5 == 1 || tmp % 5 == 3)
            cout << (tmp / 5) + 1;
        else if (tmp % 5 == 2 || tmp % 5 == 4)
            cout << (tmp / 5) + 2;
        else
            cout << -1;
    }
}

