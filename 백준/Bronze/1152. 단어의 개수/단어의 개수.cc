#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int cnt = 0;
    string s;
    getline(cin, s);

    stringstream ss(s);

    string word;
    while (ss >> word)
    {
        cnt++;
    }
    cout << cnt << "\n";
}