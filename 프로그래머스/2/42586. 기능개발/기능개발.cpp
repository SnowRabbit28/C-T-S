#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    vector<int> days;
    int size = speeds.size();
    for(int i = 0; i < size; i++){
        int ans = ceil((double)(100 - progresses[i]) / speeds[i]);
        days.push_back(ans);
    }
    int max = days[0];
    int sum = 1;
    for(int i = 1; i < size; i++){
        if(max >= days[i])
            sum++;
        else{
            answer.push_back(sum);
            sum = 1;
            max = days[i];
        }
    }
    answer.push_back(sum);
    return answer;
}


