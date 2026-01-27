#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 1. 입력
    int a, b;
    cin >> a >> b;

    vector<int> v;
    int ans = 0;

    for (int i = 0; v.size() <= 1000; i++)
    {
        for (int j = 0; j < i; j++)
        {
            v.push_back(i);
            if (v.size() > 1000)
                break;
        }
    }

    for (int i = a - 1; i < b; i++)
    {
        ans += v[i];
    }
    cout << ans;
}
