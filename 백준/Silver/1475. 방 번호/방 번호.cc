#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[10] = {};
    int answer = 0;
    int answer69 = 0;

    string room;
    cin >> room;

    for (auto c : room)
    {
        num[c - '0']++;
    }

    for (int i = 0; i < 10; i++)
    {
        if (i == 6 || i == 9)
            continue;
        answer = max(answer, num[i]);
    }

    if ( num[6] || num[9])
        {
            answer69 = ((num[6] + num[9] + 1) / 2);
            answer = max(answer, answer69);
        }

    cout << answer;
}