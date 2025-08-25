#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    int freq[26];
    fill(freq, freq + 26, 0);
    cin >> s;

    for (auto c : s)
        freq[c - 'a']++;
    for( int count : freq)
    cout << count << ' ';
}
