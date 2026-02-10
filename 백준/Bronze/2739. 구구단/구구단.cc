#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    int i = 1;

    while (i <= 9)
    {
        cout << n << " * " << i << " = " << (n * i) << "\n";
        i++;
    }
}
