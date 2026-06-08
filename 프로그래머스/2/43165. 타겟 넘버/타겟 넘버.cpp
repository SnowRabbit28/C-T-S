#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> numbers, int target) {
    int answer = 0;
    queue<int> Q;
    int a = numbers.size();
    int p, m = 0;
    Q.push(numbers[0]);
    Q.push(-numbers[0]);
    int i = 1;
    
    for(int i = 1; i < numbers.size();i++){
        int q_size = Q.size();
        
        for(int j = 0; j < q_size; j++){
            int cur = Q.front(); Q.pop();
            p = cur + numbers[i];
            m = cur - numbers[i];
            Q.push(p);
            Q.push(m);
        }
    }
    
    while(!Q.empty()){
        if(Q.front() == target) {
            answer++;
            Q.pop();
        }
        else Q.pop();
    }
    return answer;
}