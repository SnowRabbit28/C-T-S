#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n,m;
    cin >> n;
    vector<int> va(n);

    for (int i = 0; i < n; i++)
        cin >> va[i];
    
    sort(va.begin(),va.end());

    cin >> m;
    vector<int> vb(m);
    for (int i = 0; i < m; i++)
    {
        cin >> vb[i];
        bool ans = binary_search(va.begin(),va.end(),vb[i]);
        
        cout << (ans ? 1 : 0) << "\n";
    }
}

