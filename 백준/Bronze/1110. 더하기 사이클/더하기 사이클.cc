#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a = 200, b = 200;
    int ans;
    int cnt = 0;

    int num;
    cin >> num;

    a = num / 10;
    b = num % 10;

    while (true)
    {
        cnt++;
        ans = a + b;
        a = b;
        b = ans % 10;
        if ((a * 10 + b) == num)
            break;
    }

    cout << cnt;
}