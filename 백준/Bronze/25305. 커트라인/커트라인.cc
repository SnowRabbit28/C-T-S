#include <bits/stdc++.h>
using namespace std;

int main(void)
{

    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, k;
    cin >> N >> k;

    vector<int> v;

    for (int i = 0; i < N; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(), v.end(), greater<int>());

    cout << v[k - 1];
}