#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    stack<pair<int, int>> s;

    for (int i = 1; i <= n; i++)
    {
        int h;
        cin >> h;
        while (!s.empty() && s.top().first < h)
            s.pop();
        cout << (s.empty() ? 0 : s.top().second) << ' ';
        s.push({h, i});
    }
}