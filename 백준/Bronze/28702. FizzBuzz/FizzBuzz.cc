#include <bits/stdc++.h>
using namespace std;

int main(void)
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int num = 0;
    for (int i = 0; i < 3; i++)
    {
        string s;
        cin >> s;

        if (s[0] - '0' < 10)
        {
            num = stoi(s);

            if (i == 0)
                num += 3;
            else if (i == 1)
                num += 2;
            else
                num += 1;

            if (num % 3 == 0)
            {
                if (num % 5 == 0)
                    cout << "FizzBuzz";
                else
                    cout << "Fizz";
            }
            else if (num % 5 == 0)
                cout << "Buzz";
            else
                cout << num;
            break;
        }
        else
            continue;
    }
}

