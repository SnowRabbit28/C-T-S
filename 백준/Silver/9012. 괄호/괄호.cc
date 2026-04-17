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
        string ans;
        cin >> ans;

        bool isTrue = true;

        stack<char> s;
        for (char c : ans)
        {
            if (c == '(')
                s.push(c);
            else if (!s.empty() && c == ')')
                s.pop();
            else if (s.empty() && c == ')'){
                isTrue = false;
                break;
            }
        }

        if (!isTrue)
            cout << "NO" << "\n";
        else if (s.empty())
            cout << "YES" << "\n";
        else
            cout << "NO" << "\n";
    }
}