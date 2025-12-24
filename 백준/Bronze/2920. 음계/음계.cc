#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[8];
    for (int i = 0; i < 8; i++)
        cin >> num[i];

    bool asc = true, desc = true;

    for (int i = 0; i < 8; i++)
    {
        if (num[i] != i + 1)
            asc = false;
        if (num[i] != 8 - i)
            desc = false;
    }

    if (asc)
        cout << "ascending";
    else if (desc)
        cout << "descending";
    else
        cout << "mixed";
}


