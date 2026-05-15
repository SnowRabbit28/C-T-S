#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer = {0,0};
    int Xmax = board[0] / 2;
    int Ymax = board[1] / 2;
    for(auto s : keyinput){
        if(s == "left"){
            if(answer[0] == -Xmax) continue;
            else answer[0]--;
        }
        else if(s == "right"){
            if(answer[0] == Xmax) continue;
            else answer[0]++;  
        }
        else if(s == "up"){
            if(answer[1] == Ymax) continue;
            else answer[1]++;  
        }
        else if(s == "down"){
            if(answer[1] == -Ymax) continue;
            else answer[1]--;  
        }
    }
    return answer;
}