#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;

    int ab = a * b;
    while (b != 0)
    {
        int c = a % b;
        a = b;
        b = c;
    }

    cout << a << "\n" << ab / a;
}