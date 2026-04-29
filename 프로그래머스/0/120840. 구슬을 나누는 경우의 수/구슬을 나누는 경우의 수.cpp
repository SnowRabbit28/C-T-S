#include <string>
#include <vector>

using namespace std;

int combi(int b, int s){
    if(s == 0) return 1;
    if(b == 1) return 1;
    if(b == s) return 1;
    return combi(b-1, s) + combi(b-1, s-1);
}

int solution(int balls, int share) {
    int answer = 0;
    answer = combi(balls, share);
    return answer;
}