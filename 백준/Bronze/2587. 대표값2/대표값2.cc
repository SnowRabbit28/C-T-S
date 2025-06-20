#include <bits/stdc++.h>
using namespace std;

int main (void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int result = 0;
    int num[5];

    for (int i = 0; i < 5; i++)
    {
        cin >> num[i];
        result += num[i];
    }

    sort(num,num+5);
    cout << result/5 << '\n' << num[2];
    
}