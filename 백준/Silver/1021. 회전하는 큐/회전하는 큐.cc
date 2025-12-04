#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    deque<int> DQ;

    for (int i = 1; i <= a; i++)
    {
        DQ.push_back(i);
    }

    int ans = 0;
    for (int i = 1; i <= b; i++)
    {
        int n;
        cin >> n;

        int idx = find(DQ.begin(), DQ.end(), n) - DQ.begin();

        while (DQ.front() != n)
        {
            if (idx < (int)DQ.size() - idx)
            {
                DQ.push_back(DQ.front());
                DQ.pop_front();
            }
            else
            {
                DQ.push_front(DQ.back());
                DQ.pop_back();
            }
            ans++;
        }

        DQ.pop_front();
    }
    cout << ans;
}