#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    int answer = 0;
    bool is_three;
    for(int i = 0; i < n; i++){
        answer++;
        while(true){
            if(answer % 3 == 0){
                answer++;
                continue;
            }
            is_three = false;
            int tmp = answer;
            while(tmp > 0){
                if(tmp % 10 == 3){
                    is_three = true;
                    break;
                }
                tmp /= 10;
            }
            if(is_three) { answer++; continue; }
            break;
        }
    }
    return answer;
}