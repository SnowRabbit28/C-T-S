#include <string>
#include <vector>

using namespace std;

string solution(string code) {
    string answer = "";
    int s = code.size();
    int mode = 0;
    for(int i = 0; i < s; i++){
        if(code[i] == '1'){
            mode = 1 - mode;
            continue;
        } 
        if(mode == 0){
            if(i % 2 == 0) answer += code[i];   
        }
        else
            if(i % 2 != 0) answer += code[i];   
    }
    if (answer.empty()) {
        return "EMPTY";
    }
    return answer;
}