#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    while (n--)
    {
        int H, W, N;
        cin >> H >> W >> N;
        // 101 102 103 순서
        int h = 0, w = 0;
        if (N % H == 0){    
            h = H;
            w = (N / H);
        }
        else{
            h = N % H;
            w = (N / H) + 1;
        }

        if (w < 10)
            cout << h << 0 << w << "\n";
        else
            cout << h << w << "\n";
    }
}
