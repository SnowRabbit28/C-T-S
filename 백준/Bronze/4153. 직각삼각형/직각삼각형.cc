#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (1)
    {
        int num[3];
        for (int i = 0; i < 3; i++)
        {
            int a;
            cin >> a;
            num[i] = a;
        }
        if(num[0] == 0 && num[1] == 0 && num[2] == 0) return 0;
        sort(num, num + 3);

        if ((num[0] * num[0]) + (num[1] * num[1]) == (num[2] * num[2]))
            cout << "right" << "\n";
        else
            cout << "wrong" << "\n";
    }
}
