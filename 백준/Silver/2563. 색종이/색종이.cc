#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int count = 0;
    int p;
    cin >> p;

    bool board[100][100] = {false};

    for (int i = 0; i < p; i++)
    {
        int w, h;
        cin >> w >> h;

        for (int x = 0; x < 10; x++)
        {
            for (int y = 0; y < 10; y++)
            {
                board[w + x][h + y] = true;
            }
        }
    }
    for (int x = 0; x < 100; x++)
    {
        for (int y = 0; y < 100; y++)
        {
            if (board[x][y])
                count++;
        }
    }
    cout << count;
}
