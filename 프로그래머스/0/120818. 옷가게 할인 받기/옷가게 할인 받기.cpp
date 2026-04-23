#include <bits/stdc++.h>
using namespace std;

int solution(int price) {
    int answer = 0;
    if(price >= 100000){
        if(price >= 300000){
            if(price >= 500000){
                answer = (int)(price * 0.8);
            }
            else answer = (int)(price * 0.9);
        }
        else answer = (int)(price * 0.95);
    }
    else answer = (int)price;

    return answer;
}