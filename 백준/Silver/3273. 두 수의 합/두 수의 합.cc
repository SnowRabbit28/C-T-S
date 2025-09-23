#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 0, x = 0;
    int answer = 0;
    cin >> n;
    int a[200008] = {};
    bool cnt[2000008] = {false};

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cnt[a[i]] = true;
    }

    cin >> x;

    for (int i = 0; i < n; i++)
    {
        if (cnt[x - a[i]] == true)
            answer++;
    }

    cout << answer/2;
}
