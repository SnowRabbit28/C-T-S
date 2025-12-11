#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;
    int a[27] = {0};

    for (char c : s)
    {
        c = toupper(c);
        a[c - 'A']++;
    }

    int maxCnt = 0;
    int maxIdx = -1;
    bool dup = false; // dup는 중복체크 여부일때 쓰는 단어

    for (int i = 0; i < 26; i++)
    {
        if (a[i] > maxCnt)
        {
            maxCnt = a[i];
            maxIdx = i;
            dup = false;
        }
        else if (a[i] == maxCnt)
            dup = true;
    }
    if (dup)
        cout << "?";
    else
        cout << char('A' + maxIdx);
}
