#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, star, space = 0;
    cin >> N;

    for (int i = 1; i <= 2 * N - 1; i++)
    {
        star = (i <= N) ? 2 * N - 1 - 2 * (i - 1) : 2 * i - (2 * N - 1);
        space = (i <= N) ? i - 1 : 2 * N - i - 1;

        cout << string(space, ' ')
            << string(star, '*') << '\n';
    }
}