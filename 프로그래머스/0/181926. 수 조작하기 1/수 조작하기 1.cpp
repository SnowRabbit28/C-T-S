#include <string>
#include <vector>

using namespace std;

int solution(int n, string control) {
    int answer = n;
    for(auto& c : control){
        if(c == 'w') answer = answer + 1;
        else if(c == 's') answer = answer - 1;
        else if(c == 'd') answer = answer + 10;
        else answer = answer - 10;
    }
    return answer;
}