#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n, m;
    cin >> n >> m;

    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    for (int i = 0; i < m; i++)
    {
        int a, b;
        cin >> a >> b;

        reverse(v.begin() + (a - 1), v.begin() + b);
    }

    for (int i = 0; i < n; i++)
    {
        cout << v[i] << ' ';
    }
}