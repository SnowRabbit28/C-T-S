#include <bits/stdc++.h>
using namespace std;

int N;
int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> N;
    stack<int> s;

    while (N--)
    {
        string a;
        cin >> a;

        if (a == "push")
        {
            int b;
            cin >> b;
            s.push(b);
        }
        else if (a == "top")
        {
            if (s.empty())
                cout << -1 << '\n';
            else cout << s.top() << '\n';
        }
        else if (a == "size")
            cout << s.size() << '\n';
        else if (a == "empty")
        {
            if (s.empty())
                cout << 1 << '\n';
            else
                cout << 0 << '\n';
        }
        else if (a == "pop")
        {
            if (s.empty())
                cout << -1 << '\n';
            else
            {
                cout << s.top() << '\n';
                s.pop();
            }
        }
    }
}
