#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;
    int n;
    cin >> n;

    cnt = (n / 5) + (n / 25) + (n / 125);

    cout << cnt;
}

