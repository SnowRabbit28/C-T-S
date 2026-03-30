#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int cnt = 0;
    int a = 666;

    while (cnt <= n)
    {
        int tmp = a;

        while (tmp >= 666)
        {
            if (tmp % 1000 == 666)
            {
                cnt++;
                break;
            }
            tmp /= 10;
        }

        if (cnt == n)
            break;
        a++;
    }
    cout << a;
}

