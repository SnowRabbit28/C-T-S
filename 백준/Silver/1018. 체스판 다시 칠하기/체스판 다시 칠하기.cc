#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m;
    cin >> n >> m;
    char chess[51][51] = {' '};

    string WB[8] = {
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW"};

    string BW[8] = {
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB",
        "BWBWBWBW",
        "WBWBWBWB"};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> chess[i][j];
        }
    }

    int min_chess = 100;
    for (int p = 0; p <= n - 8; p++)
    {
        for (int q = 0; q <= m - 8; q++)
        {
            int cnt_wb = 0;
            int cnt_bw = 0;
            for (int i = 0; i < 8; i++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (chess[i + p][j + q] != WB[i][j])
                        cnt_wb++;
                    if (chess[i + p][j + q] != BW[i][j])
                        cnt_bw++;
                }
            }
            int min_wbw = min(cnt_wb,cnt_bw);
            min_chess = min(min_wbw, min_chess);
        }
    }

    cout << min_chess;
}