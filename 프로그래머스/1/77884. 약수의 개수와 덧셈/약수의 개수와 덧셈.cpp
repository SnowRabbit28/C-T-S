#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int left, int right) {
    int answer = 0;
    int n = 0;
    for(int i = left; i <= right; i++){
        n = sqrt(i);
        if(n*n == i) answer -= i;
        else answer += i;
    }
    return answer;
}