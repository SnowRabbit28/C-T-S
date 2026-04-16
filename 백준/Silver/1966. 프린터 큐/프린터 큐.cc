#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        queue<pair<int, int>> q;
        priority_queue<int> pq;
        int a, b;
        int cnt = 1;
        cin >> a >> b;

        for (int i = 0; i < a; i++)
        {
            int num;
            cin >> num;
            q.push({i, num});
            pq.push(num);
        }

        while (!q.empty())
        {
            int idx = q.front().first;
            int imp = q.front().second;
            q.pop();

            if (imp == pq.top())
            {
                pq.pop();
                if (idx == b)
                {
                    cout << cnt << "\n";
                    break;
                }
                else
                    cnt++;
            }
            else
                q.push({idx,imp});
        }
    }
}
