#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<pair<int, int>> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        v.push_back({b, a});
    }

    sort(v.begin(),v.end());

    for (int i = 0; i < n; i++)
        cout << v[i].second << " " << v[i].first << "\n";
    

}

