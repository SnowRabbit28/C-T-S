#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    // 1. 입력
    int T;
    cin >> T;

    for (int i = 0; i < T; i++)
    {
        // 2. 데이터의 개수는 a 의 b 승.. 그러면 int로 해결이 안되나?
        int a, b;
        cin >> a >> b;
        // 3 - 1. 패턴으로 써보기
        a %= 10;
        if (a == 4 || a == 9)
        {
            if (b % 2 == 1)
                cout << a << "\n";
            else
            {
                if (a == 4)
                    cout << 6 << "\n";
                else
                    cout << 1 << "\n";
            }
        }
        else if (a == 2 || a == 8)
        {
            if (b % 4 == 2)
                cout << 4 << "\n";
            else if (b % 4 == 3)
            {
                if (a == 2)
                    cout << 8 << "\n";
                else
                    cout << 2 << "\n";
            }
            else if (b % 4 == 0)
                cout << 6 << "\n";
            else
                cout << a << "\n";
        }
        else if (a == 3 || a == 7)
        {
            if (b % 4 == 2)
                cout << 9 << "\n";
            else if (b % 4 == 3)
            {
                if (a == 3)
                    cout << 7 << "\n";
                else
                    cout << 3 << "\n";
            }
            else if (b % 4 == 0)
                cout << 1 << "\n";
            else
                cout << a << "\n";
        }
        else if ( a == 0)
            cout << 10 << "\n";
        else
            cout << a << "\n";
    }
}

