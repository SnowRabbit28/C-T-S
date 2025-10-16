#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    stack<int> s;
    s.push(0);
    int cnt = 1;
    vector<string> v;

    while (n--)
    {
        int a;
        cin >> a;
        if (s.top() > a)
        {
            cout << "NO";
            return 0;
        }
        else
        {
            if (cnt <= a)
            {
                for (int i = cnt; i <= a; i++)
                {
                    cnt++;
                    s.push(i);
                    v.push_back("+");

                    if (i == a)
                    {
                        s.pop();
                        v.push_back("-");
                    }
                }
            }
            else
            {
                s.pop();
                v.push_back("-");
            }
        }
    }

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "\n";
    }
}
