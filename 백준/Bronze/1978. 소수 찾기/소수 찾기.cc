#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int cnt = 0;

    vector<bool> v(1001, true);
    v[0] = v[1] = false;

    for (int i = 2; i * i <= 1000; i++)
    {
        if (v[i])
        {
            for (int j = i * i; j <= 1000; j += i)
                v[j] = false;
            
        }
    }

    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
        if (v[num])
            cnt++;
    }

    cout << cnt++;
}
