#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    unordered_map<int, int> m;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        m[a]++;
    }
    
    int k;
    cin >> k;

    for (int i = 0; i < k; i++)
    {
        int b;
        cin >> b;
        cout << m[b] << " ";
    }
}

