#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long cnt = 0;
    int n;
    cin >> n;
    stack<int> s;

    for (int i = 0 ; i < n; i++)
    {
        int h;
        cin >> h;
        while (!s.empty() && s.top() <= h){
            s.pop();
        }
        cnt += s.size();
        s.push(h);
    }

    cout << cnt;
}

