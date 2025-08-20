#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int N = 0;

    cin >> N;

    for (int i = 1; i <= N - 1; i++)
    {
        cout << string(N - i, ' ')
             << string(2 * i - 1, '*')
            << '\n';
    }
    for (int i = 0; i < 2 * N - 1; i++)
    {
        cout << "*";
    }
    cout << '\n';
    for (int i = 1; i <= N - 1; i++)
    {
        cout << string(i,' ')
        << string(2*(N-1)-(2*i-1),'*')
        << '\n';
    }
    
}
