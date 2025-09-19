#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0, m = 0;
    cin >> n >> m;
    int a[10004]{};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int en = 1, st = 0, sum = a[st], ans = 0;

    while (1)
    {
        if (sum < m)
        {
            if (en == n)
                break;
            sum += a[en];
            en++;
        }
        if (sum >= m)
        {
            if (sum == m)
                ans++;
            sum -= a[st];
            st++;
        }
    }
    cout << ans;
}