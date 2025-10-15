#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N = 0;
    cin >> N;
    int answer = 0;
    stack<int> s;

    while (N--)
    {
        int a;
        cin >> a;

        if (a == 0)
        {
            s.pop();
        }
        else
            s.push(a);
    }

    while (!s.empty())
    {
        answer += s.top();
        s.pop();
    }

    cout << answer;
}


