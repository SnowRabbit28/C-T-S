#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a;
    cin >> a;
    string s;
    cin >> s;
    int cnt = 0;

    for (char c : s)
    {
        c = c - '0';
        cnt += c;
    }
    cout << cnt;
}
