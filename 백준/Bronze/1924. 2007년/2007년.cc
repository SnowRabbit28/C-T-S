#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int mdays[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    int m, d;
    cin >> m >> d;

    int sum = 0;
    for (int i = 0; i < m - 1; i++)
    {
        sum += mdays[i];
    }

    sum += d;

    switch (sum % 7)
    {
    case 1:
        cout << "MON";
        break;
    case 2:
        cout << "TUE";
        break;
    case 3:
        cout << "WED";
        break;
    case 4:
        cout << "THU";
        break;
    case 5:
        cout << "FRI";
        break;
    case 6:
        cout << "SAT";
        break;
    case 0:
        cout << "SUN";
        break;
    }
}

