#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b, v;
    cin >> a >> b >> v;

    int cnt, sum = 0;

    if ((v - a) % (a - b) == 0)
        sum = ((v - a) / (a - b)) + 1;
    else
        sum = ((v - a) / (a - b)) + 2;

    cout << sum;
}
