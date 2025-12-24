#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int basket[100] = {0};

    for (int i = 1; i <= n; i++)
    {
        basket[i] = i;
    }

    for (int i = 0; i < m; i++)
    {
        int a, b, c;
        cin >> a >> b;

        c = basket[a];
        basket[a] = basket[b];
        basket[b] = c;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << basket[i] << ' ';
    }
}