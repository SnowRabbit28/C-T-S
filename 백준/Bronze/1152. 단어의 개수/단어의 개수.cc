#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;
    string s;
    getline(cin, s);
    bool inWord = false;

    for (auto c : s)
    {
        if (c == ' ')
        {
            inWord = false;
        }
        else
        {
            if (!inWord)
            {
                inWord = true;
                cnt++;
            }
        }
    }
    cout << cnt << '\n';
}
