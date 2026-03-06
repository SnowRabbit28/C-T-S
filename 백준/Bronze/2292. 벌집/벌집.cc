#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int i = 1;
    int c = 6;
    int cnt = 1;

    while (i < n)
    {
        i = i + (cnt * c);
        cnt++;
    }
    cout << (i == 1 ? 1 : cnt);
}

