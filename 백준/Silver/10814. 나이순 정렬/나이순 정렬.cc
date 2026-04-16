#include <bits/stdc++.h>
using namespace std;

bool Compare(pair<int,string> a, pair<int,string> b)
{
    return a.first < b.first;
}

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<pair<int, string>> v;

    for (int i = 0; i < n; i++)
    {
        int a;
        string b;
        cin >> a >> b;
        v.push_back({a, b});
    }

    stable_sort(v.begin(), v.end(), Compare);

    for (int i = 0; i < n; i++)
    {
        cout << v[i].first << " " << v[i].second << "\n";
    }
}