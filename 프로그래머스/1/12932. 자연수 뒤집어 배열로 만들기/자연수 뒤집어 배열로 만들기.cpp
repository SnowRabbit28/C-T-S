#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

vector<int> solution(long long n) {
    vector<int> v;
    string s = to_string(n);
    reverse(s.begin(),s.end());
    for(auto& a : s){
        v.push_back(a - '0');
    }
    return v;
}