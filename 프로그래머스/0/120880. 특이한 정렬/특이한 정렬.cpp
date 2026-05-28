#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int target_n;
bool compare(int a, int b){
    int adist = abs(target_n - a);
    int bdist = abs(target_n - b);
    
    if(adist == bdist)
        return a > b;
    else
        return adist < bdist;
}
vector<int> solution(vector<int> numlist, int n) {
    target_n = n;
    sort(numlist.begin(),numlist.end(),compare);
    return numlist;
}