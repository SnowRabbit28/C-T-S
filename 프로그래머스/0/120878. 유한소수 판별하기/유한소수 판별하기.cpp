#include <bits/stdc++.h>
using namespace std;

int solution(int a, int b) {
    int num = gcd(a,b);
    b /= num;
    while(b % 2 == 0) b /= 2;
    while(b % 5 == 0) b /= 5;
    if(b == 1) return 1;
    return 2;
}
