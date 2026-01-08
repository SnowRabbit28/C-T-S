#include <bits/stdc++.h>
using namespace std;

int main(void){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string major;
    float score = 0.0;
    string point;
    float sum = 0.0;
    int cnt = 0;
    

    for (int i = 0; i < 20; i++)
    {
        cin >> major >> score >> point;

        if(point == "A+"){sum += score * 4.5; cnt+=score;}
        else if(point == "B+"){sum += score * 3.5; cnt+=score;}
        else if(point == "B0"){sum += score * 3.0; cnt+=score;}
        else if(point == "A0"){sum += score * 4.0; cnt+=score;}
        else if(point == "C+"){sum += score * 2.5; cnt+=score;}
        else if(point == "C0"){sum += score * 2.0; cnt+=score;}
        else if(point == "D+"){sum += score * 1.5; cnt+=score;}
        else if(point == "D0"){sum += score * 1.0; cnt+=score;}
        else if(point == "F"){sum += score * 0.0; cnt+=score;}
    }
    
    cout << (sum / cnt);

}