#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0, v = 0;
    int a[108] = {};
    int num[208] = {};
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        num[a[i] + 100]++;
    }

    cin >> v;
    cout << num[v + 100];
}
