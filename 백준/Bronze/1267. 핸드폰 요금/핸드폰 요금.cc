#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N = 0;
    int M =0;
    int Y = 0;
    int sec[20] = {};

    cin >> N;
    for (int n = 0; n < N; n++)
    {
        cin >> sec[n];
    }


    for (int i = 0; i < N; i++)
    {
        Y += ((sec[i] / 30) + 1) * 10;
        M += ((sec[i] / 60) + 1) * 15;
    }
    

    if(Y < M) cout << "Y " << Y;
    else if (Y > M) cout << "M " << M;
    else cout << "Y M " << Y;
    
}

