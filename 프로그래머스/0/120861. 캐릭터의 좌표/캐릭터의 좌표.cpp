#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<string> keyinput, vector<int> board) {
    vector<int> answer;
    int Xmax = board[0] / 2;
    int Ymax = board[1] / 2;
    int x = 0;
    int y = 0;
    for(auto s : keyinput){
        if(s == "left") x--;
        else if(s == "right") x++;
        else if(s == "up") y++;
        else if(s == "down") y--;
        
        x = clamp(x,-Xmax,Xmax);
        y = clamp(y,-Ymax,Ymax);
    }
    answer.push_back(x);
    answer.push_back(y);
    return answer;
}

