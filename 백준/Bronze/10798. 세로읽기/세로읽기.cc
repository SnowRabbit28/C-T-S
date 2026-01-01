#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string ans;
    string s[5] = {};
    for (int i = 0; i < 5; i++)
    {
        cin >> s[i];
    }

    for (int i = 0; i < 15; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i < s[j].size())
                ans += s[j][i];
        }
    }
    cout << ans;
}

