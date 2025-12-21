#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    int line = 1; // 대각선의 개수
    int cnt = 1;  // 대각선 안의 분수개수

    while (n > cnt)
    {
        n -= cnt;
        cnt++;
        line++;
    }

    int num, den;

    if (line % 2 == 0)
    {
        num = n;
        den = line - n + 1;
    }
    
    else
    {
        num = line - n + 1;
        den = n;
    }

    cout << num << "/" << den << "\n";
}
