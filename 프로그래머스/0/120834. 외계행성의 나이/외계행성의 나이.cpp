#include <bits/stdc++.h>
using namespace std;

string solution(int age) {
    string answer = "";
    string ans = to_string(age);
    for(char c : ans){
        c = (c - '0') + 'a';
        answer += c;
    }
    return answer;
}