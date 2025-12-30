#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    int cnt = 0;

    queue<int> q;

    for (int i = 1; i <= N; i++)
    {
        q.push(i);
    }

    cout << '<';
    while (!q.empty())
    {
        cnt++;
        int f;
        f = q.front();
        if (cnt == K)
        {
            cnt = 0;
            if (q.size() == 1)
                cout << f;
            else
                cout << f << ',' << ' ';
            q.pop();
            continue;
        }
        q.pop();
        q.push(f);
    }
    cout << '>';
}
