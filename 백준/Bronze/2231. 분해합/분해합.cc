#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int nn = n;
    int cnt = 0;
    while (nn != 0)
    {
        nn = nn / 10;
        cnt++;
    }

    int num = n - (cnt * 9);
    if (num < 0)
        num = 0;

    for (int i = num; i <= n; i++)
    {
        int sum = i;
        int tmp = i;

        while (tmp != 0)
        {
            sum += tmp % 10;
            tmp = tmp / 10;
        }
        if (sum == n)
        {
            cout << i;
            return 0;
        }
    }

    cout << 0;
}
