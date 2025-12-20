#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    bool num[10001] = {false};

    for (int i = 1; i <= 10000; i++)
    {
        int sum = i;
        int x = i;

        while (x > 0)
        {
            sum += x % 10;
            x /= 10;
        }
        if (sum <= 10000)
            num[sum] = true;
    }

    for (int i = 1; i <= 10000; i++)
    {
        if (!num[i])
            cout << i << "\n";
    }
}

