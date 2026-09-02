#include <string>
#include <vector>

using namespace std;

vector<int> solution(int l, int r) {
    vector<int> answer;
    for(int i = l; i <= r; i++){
        int num = i;
        while(num > 0){
            int n = num % 10;
            if(n != 5 && n != 0)
                break;
            num /= 10;
        }
        if(num == 0 ) answer.push_back(i);
    }
    if(answer.empty())
        answer.push_back(-1);
    return answer;
}