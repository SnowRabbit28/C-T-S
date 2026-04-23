#include <bits/stdc++.h>
using namespace std;

double solution(vector<int> numbers) {
    double answer = 0;
    double cnt = 0;
    for(int i : numbers){
        answer += i;
        cnt++;
    }
    return answer/cnt;
}