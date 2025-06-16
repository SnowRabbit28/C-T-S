#include <bits/stdc++.h>
using namespace std;

int main(void){

    ios::sync_with_stdio(0);
    cin.tie(0);

    int num[4];
    int cut;

    for(int i = 0; i < 3; i++){
        cut = 0;
        for (int j = 0; j < 4; j++)
        {
            cin >> num[j];
            if (num[j] == 0) cut++;
        }
        if (cut == 0) cout << "E" <<'\n';
        else if (cut == 1) cout << "A" <<'\n';
        else if (cut == 2) cout << "B" <<'\n';
        else if (cut == 3) cout << "C" <<'\n';
        else if (cut == 4) cout << "D" <<'\n';
    }
}