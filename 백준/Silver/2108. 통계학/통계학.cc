#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    vector<int> v;
    double sum = 0;
    int da[8001] = {0};
    int da_max = 0;
    vector<int> da_v;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
        sum += a;
        da[a + 4000]++;
    }

    cout << int(round((double)sum / n)) << "\n";

    sort(v.begin(), v.end());
    cout << v[(n / 2)] << "\n";

    for (int i = 0; i < 8001; i++)
        da_max = max(da_max, da[i]);

    for (int i = 0; i < 8001; i++)
    {
        if (da[i] == da_max)
            da_v.push_back(i - 4000);
    }
    sort(da_v.begin(), da_v.end());
    cout << (da_v.size() > 1 ? da_v[1] : da_v[0]) << "\n";

    cout << v.back() - v.front();
}

