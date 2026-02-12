#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int mx = -1000000, mn = +1000000;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mx = max(a, mx);
        mn = min(a, mn);
    }
    cout << mn << " " << mx;
}