#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    while (cin >> s)
    {
        if (s == "0")
            break;

        int i = 0;
        int j = s.size() - 1;
        bool ok = true;

        while (i < j)
        {
            if (s[i] != s[j])
            {
                ok = false;
                break;
            }
            i++;
            j--;
        }

        cout << (ok ? "yes\n" : "no\n");
    }
}

