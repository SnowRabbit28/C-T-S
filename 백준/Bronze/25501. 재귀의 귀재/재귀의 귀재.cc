#include <bits/stdc++.h>
using namespace std;

int cnt;
int recursion(string_view s, int l, int r)
{
    cnt++;
    if (l >= r)
        return 1;
    else if (s[l] != s[r])
        return 0;
    else
        return recursion(s, l + 1, r - 1);
}

int isPalindrome(const string& s)
{
    return recursion(s, 0, (int)s.length() - 1);
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        cnt = 0;
        cout << isPalindrome(s) << " " << cnt << "\n";
    }
}

