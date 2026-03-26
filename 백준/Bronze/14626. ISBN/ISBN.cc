#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int sum = 0;
    int star = 0;

    for (int i = 0; i < 13; i++)
    {
        if (s[i] == '*')
        {
            if (i % 2 == 0)
                star = 1;
            else
                star = 3;
        }
        else
        {
            if (i % 2 == 0)
                sum += s[i] - '0';
            else
                sum += (s[i] - '0') * 3;
        }
    }

    for (int i = 0; i <= 9; i++)
    {
        if ((sum + (star * i)) % 10 == 0)
            cout << i;
    }
}

