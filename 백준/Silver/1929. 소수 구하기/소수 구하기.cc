#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    bool no_sosu[1000001];

    no_sosu[0] = no_sosu[1] = true;

    for (int i = 2; i * i <= m; i++)
    {
        if (!no_sosu[i])
        {
            for (int j = i * i; j <= m; j += i)
                no_sosu[j] = true;
        }
    }

    for (int i = n; i <= m; i++)
    {
        if (!no_sosu[i])
            cout << i << "\n";
    }
}