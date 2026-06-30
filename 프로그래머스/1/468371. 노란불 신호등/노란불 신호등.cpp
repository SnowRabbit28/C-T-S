#include <bits/stdc++.h>
using namespace std;

int solution(vector<vector<int>> signals) {
    int answer = 0;
    long long max_time = 1;
    
    for(auto& x : signals){
        int sum = x[0] + x[1] + x[2];
        max_time = lcm(max_time, sum);
    }
    
    for(int i = 1; i <= max_time; i++){
        bool yellow = true;
        
        for(auto& x : signals){
            int sum = x[0] + x[1] + x[2];
            int pos = (i-1) % sum + 1;
            if(!(pos > x[0] && pos <= x[0] + x[1])){
                yellow = false;
                break;
            }
        }
        if(yellow) return i;
    }
    return -1;
}
