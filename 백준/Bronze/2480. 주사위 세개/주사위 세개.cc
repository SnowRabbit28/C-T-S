#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[3];
    cin >> num[0] >> num[1] >> num[2];

    sort(num, num+3);

    if(num[0] == num[2]){
        cout << 10000+(1000*num[0]);
    }
    else if(num[0]==num[1] || num[1]==num[2]) cout << 1000+(100*num[1]);
    else cout << num[2]*100;
}