#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> arr, int divisor) {
    vector<int> answer;
    for(auto& v : arr){
        if(v % divisor == 0) answer.push_back(v);
    }
    sort(answer.begin(),answer.end());
    return answer.empty() ? vector<int>{-1}: answer;
}