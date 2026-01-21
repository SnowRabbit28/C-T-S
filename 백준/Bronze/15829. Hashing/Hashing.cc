#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 1. 입력
    int L;
    cin >> L;
    string s;
    cin >> s;
    long long ans = 0;
    long long hash = 1;
    int M = 1234567891;

    for (char c : s)
    {
        ans = (ans + (c - 'a' + 1) * hash) % M;
        hash = (hash * 31) % M;
    }
    cout << ans;
}
