#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    long long ans = 0;
    stack<pair<long long, long long>> s;

    while (n--)
    {
        int cnt = 1; // 같은 키가 연속으로 몇명 들어왔는가!
        int h;
        cin >> h;
        while (!s.empty() && s.top().first <= h)
        {
            ans += s.top().second;
            if (s.top().first == h)
                cnt += s.top().second;
            s.pop();
        }
        if (!s.empty())
            ans++;
        s.push({h, cnt});
    }
    cout << ans;
}