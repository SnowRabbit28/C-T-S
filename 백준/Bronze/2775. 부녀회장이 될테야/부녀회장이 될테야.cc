#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    int n;
    cin >> n;
    int a[15][15] = {0};

    for (int i = 0; i < n; i++)
    {
        int k, n;
        cin >> k >> n;
        int ans = 0;

        for (int j = 0; j <= k; j++)
        {
            for (int l = 1; l <= n; l++)
            {
                if (j == 0)
                    a[0][l] = l;
                else
                {
                    if (l == 1)
                        a[j][1] = l;
                    else
                        a[j][l] = a[j - 1][l] + a[j][l - 1];
                }
            }
        }
        cout << a[k][n] << "\n";
    }
}