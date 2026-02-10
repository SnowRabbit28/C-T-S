#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int h, m;
    cin >> h >> m;

    // 1. 0시면 23시로 바뀌어야함.
    // 2 . 45분 이하면 뒤로 돌아가야함.
    //    ( 예 : 25분이면 -45분해서 40분)
    if (m < 45)
    {
        m = 60 - (45 - m);
        if (h == 0)
            h = 23;
        else
            h--;
    }
    else
        m = m - 45;

    cout << h << " " << m;
}
