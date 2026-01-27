#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string line;
        getline(cin, line);

        stringstream ss(line);

        string word;
        while (ss >> word)
        {
            reverse(word.begin(), word.end());
            cout << word << " ";
        }
        cout << "\n";
    }
}