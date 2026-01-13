#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int f1 = 0;
    int f2 = 1;
    int ans = 0;

    if (n == 0) { cout << 0; return 0; }
    if (n == 1) { cout << 1; return 0; }

    for (int i = 2; i <= n; i++)
    {
        ans = f1 + f2;
        f1 = f2;
        f2 = ans;
    }
    cout << ans;
}
