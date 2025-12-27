#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    int count;

    for (int i = 0; i < n; i++)
    {
        int w, h;
        cin >> w >> h;
        v.push_back({w, h});
    }

    for (int i = 0; i < n; i++)
    {
        count = 1;
        for (int j = 0; j < n; j++)
        {
            if (v[j].first > v[i].first && v[j].second > v[i].second)
                count++;
        }
        cout << count << "\n";
    }
}