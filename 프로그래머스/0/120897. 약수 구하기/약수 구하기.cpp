#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            answer.push_back(i);
            if(n/i != i)
            answer.push_back(n/i);
        }
    }
    sort(answer.begin(),answer.end());
    return answer;
}