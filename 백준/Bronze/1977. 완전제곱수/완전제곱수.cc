#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    cin >> a >> b;
    int m = 999999;
    int sum = 0;
    // 완전제곱수를 담을 통.
    vector<int> v(101, 0);

    for (int i = 1; i * i <= 10000; i++)
    {
        int x = i * i;
        v.push_back(x);
        if (x >= a && x <= b)
        {
            m = min(m, x);
            sum += x;
        }
    }
    if (m == 999999)
        cout << -1;
    else
        cout << sum << "\n" << m;
}
