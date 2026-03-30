#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<pair<int, string>> s;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        string ss;
        cin >> ss;
        s.insert({ss.size(), ss});
    }

    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it).second << "\n";
}