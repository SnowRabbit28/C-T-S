#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int a;
    cin >> a;
    for (int i = 0; i < a; i++)
    {
        string s;
        cin >> s;

        int cnt = 0;
        int ans = 0;
        for (char c : s)
        {
            if (c == 'X')
            {
                cnt = 0;
            }
            else
            {
                cnt += 1;
                ans += cnt;
            }
        }
        cout << ans << "\n";
    }
}