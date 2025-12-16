#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;
    bool a[2008] = {false};

    while (n--)
    {
        int num;
        cin >> num;
        a[num + 1000] = true;
    }

    for (int i = 0; i < 2008; i++)
    {
        if (a[i])
            cout << i - 1000 << "\n";
    }
}