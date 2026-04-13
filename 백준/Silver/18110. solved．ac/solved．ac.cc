#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int v[300000] = {0};
    int sum = 0;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v[i] = a;
    }
    sort(v, v + n);
    float jsum = round(n * 0.15);

    float end = n - jsum;
    for (int i = jsum; i < end; i++)
    {
        sum += v[i];
    }

    cout << round(sum / (end - jsum));
}
