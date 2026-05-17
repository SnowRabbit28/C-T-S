#include <string>
#include <vector>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int num = 0;
    for(auto c : my_string){
        if(c - '0' >= 0 && c- '0' <= 9){
            num = num * 10 + (c - '0');
            if(c - '0' > 10){
                answer += num;
                num = 0;
            }
        }
        else{
            answer += num;
            num = 0;
        }
            
    }
    if(num > 0) answer+=num;
    return answer;
}