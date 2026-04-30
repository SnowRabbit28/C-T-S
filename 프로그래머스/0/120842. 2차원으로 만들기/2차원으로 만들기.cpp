#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> solution(vector<int> num_list, int n) {
    vector<vector<int>> answer;
    for(int i = 0; i < num_list.size(); i+= n){
        vector<int> v;
        for(int j = 0; j < n; j++){
            v.push_back(num_list[i+j]);
            if(v.size() == n)
            answer.push_back(v);
        }
    }
    return answer;
}