#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    int ans = 0;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            for (int k = j + 1; k <= n; k++)
            {
                if (v[i] + v[j] + v[k] == m)
                {
                    cout << m;
                    return 0;
                }
                else if (v[i] + v[j] + v[k] < m){
                    ans = max(ans,v[i] + v[j] + v[k]);
                }
            }
        }
    }
    cout << ans;
}