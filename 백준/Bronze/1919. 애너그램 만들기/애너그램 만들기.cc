#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a, b;
    int a_cnt[26] = {};
    int b_cnt[26] = {};
    int cnt = 0;

    cin >> a >> b;

    for (auto c : a)
        a_cnt[c - 'a']++;

    for (auto c : b)
        b_cnt[c - 'a']++;

    for (int i = 0; i < 26; i++)
    {
        cnt += abs(a_cnt[i] - b_cnt[i]);
    }

    cout << cnt;
}
