#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 1. 문자열을 받아서
    // 2. 문자열을 받은 횟수를 정해두고? 짝수면 짝수번째가 흰색이니까..그 횟수를 세면..?
    int n = 8;
    int cnt = 0;
    while (n--)
    {
        string s;
        cin >> s;

        if (n % 2 == 0)
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (i % 2 == 1)
                {
                    if (s[i] == 'F')
                        cnt++;
                }
            }
        }
        else
        {
            for (int i = 0; i < s.size(); i++)
            {
                if (i % 2 == 0)
                {
                    if (s[i] == 'F')
                        cnt++;
                }
            }
        }
    }
    cout << cnt;
}