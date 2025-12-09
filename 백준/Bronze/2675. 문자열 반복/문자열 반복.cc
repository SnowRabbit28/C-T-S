#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin >> t;

    for (int i = 0; i < t; i++)
    {
        int a;
        cin >> a;
        string s;
        cin >> s;

        for(auto c : s){
            for (int k = 0; k < a; k++)
            {
                cout << c;
            }
        }
        cout << "\n";
    }
}