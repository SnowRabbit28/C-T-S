#include <string>
#include <vector>

using namespace std;

int solution(vector<int> sides) {
    int answer = 0;
    int big = max(sides[0], sides[1]);
    int small = min(sides[0], sides[1]);
    for(int i = big - small + 1; i < 2001; i++){
        if(small + i > big){
            if( i <= big ) answer++;
            else if(small + big > i) answer++;
        }
        
    }
    return answer;
    
}