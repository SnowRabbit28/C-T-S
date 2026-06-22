#include <string>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int solution(int a, int b) {
    int i = stoi(to_string(a)+ to_string(b));
    return max(i,2*a*b);
}