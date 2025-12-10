#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int a[27];
    fill(a, a + 27, -1);
    bool b[26] = {false};

    int i = 0;
    for (char c : s)
    {
        if (!b[c - 'a'])
        {
            a[c - 'a'] = i;
            b[c - 'a'] = true;
        }
        i++;
    }
    for (int i = 0; i < 26; i++)
    {
        cout << a[i] << ' ';
    }
}
