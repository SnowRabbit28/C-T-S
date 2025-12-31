#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N, K;
    cin >> N >> K;
    int nf = 1, kf = 1, nkf = 1;

    for (int i = N; i > 0; i--)
    {
        nf *= i;
    }
    for (int i = K; i > 0; i--)
    {
        kf *= i;
    }

    for (int i = N - K; i > 0; i--)
    {
        nkf *= i;
    }
    
    cout << nf / (nkf * kf);
}
