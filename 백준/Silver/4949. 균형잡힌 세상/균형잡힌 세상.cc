#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string str;
    while (true)
    {
        getline(cin, str);
        stack<char> s;
        bool isTrue = true;

        if (str == ".") break;

        for (char c : str)
        {
            if (c == '[' || c == '(')
                s.push(c);

            else if (c == ']')
            {
                if (s.empty() || s.top() != '[')
                {
                    isTrue = false;
                    break;
                }
                else
                    s.pop();
            }
            else if (c == ')')
            {
                if (s.empty() || s.top() != '(')
                {
                    isTrue = false;
                    break;
                }
                else
                    s.pop();
            }
        }
        if (isTrue && s.empty())
            cout << "yes" << "\n";
        else
            cout << "no" << "\n";
    }
}