#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    int b;
    cin >> n >> b;
    string ans = " ";

    while (n > 0)
    {
        int a = n % b;
        n /= b;

        if (a >= 0 && a <= 9)
        {
            ans += (a + '0');
        }
        else
            ans += ((a - 10) + 'A');
    }

    reverse(ans.begin(), ans.end());
    cout << ans;
}
