#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0;

    cin >> N;
    int star, space = 0;

    for (int i = 1; i <= 2*N-1; i++)
    {
        int star = (i <= N) ? i : 2*N - i;
        int space = (i <= N) ? 2*N - 2*i : 2*i - 2*N;
        cout << string(star,'*') << string(space,' ') << string(star,'*') <<'\n';
    }
    
}

