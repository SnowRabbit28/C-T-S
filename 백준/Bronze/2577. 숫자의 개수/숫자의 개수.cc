#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, B, C = 0;
    int sum = 0;
    int num[10] = {0};

    cin >> A >> B >> C;
    sum = A * B * C;

    while (sum > 0)
    {
        num[sum % 10]++;
        sum /= 10;
    }

    for (int i = 0; i < 10; i++)
    {
        cout << num[i] << '\n';
    }
}