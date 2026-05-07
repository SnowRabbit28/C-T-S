#include <bits/stdc++.h> 
using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    int m = 128;
    for(int i : array){
        int a = abs(i - n);
        if(a < m) {
            m = a;
            answer = i;
        }
        else if(a == m){
            if(answer > i)
                answer = i;
        }
    }
    return answer;
}
