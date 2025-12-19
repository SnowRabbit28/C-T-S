#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int ans = 0;
    string s;
    cin >> s;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'c' && s[i + 1] == '=')
        {
            ans++;
            i++;
        }
        else if (s[i] == 'c' && s[i + 1] == '-')
        {
            ans++;
            i++;
        }
        else if (s[i] == 'd' && s[i + 1] == 'z' && s[i + 2] == '=')
        {
            ans++;
            i += 2;
        }
        else if (s[i] == 'd' && s[i + 1] == '-')
        {
            ans++;
            i++;
        }
        else if (s[i] == 'l' && s[i + 1] == 'j')
        {
            ans++;
            i++;
        }
        else if (s[i] == 'n' && s[i + 1] == 'j')
        {
            ans++;
            i++;
        }
        else if (s[i] == 's' && s[i + 1] == '=')
        {
            ans++;
            i++;
        }
        else if (s[i] == 'z' && s[i + 1] == '=')
        {
            ans++;
            i++;
        }
        else
            ans++;
    }
    cout << ans;
}