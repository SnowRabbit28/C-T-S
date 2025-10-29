#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int a[5] = {1,2,3,4,5};
int b[8] = {2,1,2,3,2,4,2,5};
int c[10] = {3,3,1,1,2,2,4,4,5,5};
int cnt1, cnt2, cnt3;

vector<int> solution(vector<int> answers) {
    for(int i = 0 ; i < answers.size(); i++){
        if (answers[i] == a[i%5]) cnt1++;
        if (answers[i] == b[i%8]) cnt2++;
        if (answers[i] == c[i%10]) cnt3++;
    }

    if (cnt1 == cnt2 && cnt2 == cnt3) return {1,2,3};
    if (cnt1 == cnt2 && cnt2 > cnt3) return {1,2};
    if (cnt1 < cnt3 && cnt2 < cnt3) return {3};
    if (cnt1 > cnt2 && cnt1 > cnt3) return {1};
    if (cnt1 < cnt2 && cnt2 == cnt3) return {2,3};
    if (cnt1 == cnt3 && cnt2 < cnt3) return {1,3};
    if (cnt2 > cnt1 && cnt2 > cnt3) return {2};
}