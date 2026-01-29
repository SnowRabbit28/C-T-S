#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    // 16진수는 영어 + 숫자라 string으로 받는다.
    string s;
    cin >> s;

    int sum = 0;
    // 한글자씩 떼서, 기존 값* 16 + c를 해준다.
    for (char c : s)
    {
        if (c - '0' >= 0 && c - '0' <= 9)
            sum = sum * 16 + (c - '0');
        else
            sum = sum * 16 + (c - 'A' + 10);
    }
    cout << sum;
}
