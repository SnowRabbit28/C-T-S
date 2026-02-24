#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int cnt = 0;

    vector<int> v;
    for (int i = 0; i < 6; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    int t, p;
    cin >> t >> p;

    for (int i = 0; i < 6; i++)
    {
        if (v[i] != 0 && v[i] <= t)
            cnt++;
        else if (v[i] != 0 && v[i] > t)
        {
            if (v[i] % t == 0)
                cnt = cnt + (v[i] / t);
            else
                cnt = cnt + (v[i] / t) + 1;
        }
    }

    cout << cnt << "\n" << n / p << " " << n % p;
}
