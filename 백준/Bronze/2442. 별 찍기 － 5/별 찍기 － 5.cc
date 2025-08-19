#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for (int i = 1; i <= N; i++)
    {
        cout << string(N - i,' ')
            << string(i*2-1,'*')
            << '\n';
    }
}

