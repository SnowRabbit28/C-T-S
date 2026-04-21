#include <bits/stdc++.h>
using namespace std;

vector<int> solution(int numer1, int denom1, int numer2, int denom2) {
    
    int denom = (denom1 * denom2);
    int numer = ((numer1 * denom2) + (numer2 * denom1));
    int g = gcd(numer,denom);
    
    vector<int> answer;
    answer.push_back(numer / g);
    answer.push_back(denom / g);
    return answer;
}

