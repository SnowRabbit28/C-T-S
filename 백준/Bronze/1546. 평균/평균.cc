#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    double sum = 100;
    double n;
    cin >> n;

    vector<double> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back(a);
    }

    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());

    for (int i = 1; i < n; i++)
    {
        sum += v[i]/v[0] * 100;
    }
    
    cout << sum / n;
    
}

