#include <bits/stdc++.h>
using namespace std;

int solution(vector<int> array) {
    int big[1001] = {0};
    int gao = 0;
    int answer = 0;
    for(int i=0;i < array.size();i++)
        big[array[i]]++;
    for(int i=0;i < array.size();i++){
        if (gao < big[array[i]]){
            gao = big[array[i]];
            answer = array[i];
        }
    }
    sort(big,big+1001,greater<int>());
    return big[0]==big[1] ? -1 : answer;
}

