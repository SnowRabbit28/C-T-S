#include <string>
#include <vector>
#include <sstream>

using namespace std;

vector<string> solution(vector<string> quiz) {
    vector<string> answer;
    int a, b, c;
    char op, eq;
    
    for(string str : quiz){
        stringstream ss(str);
        ss >> a >> op >> b >> eq >> c;
        if(op == '-'){
            answer.push_back((a - b == c ? "O" : "X"));
        }
        else
        {
            if(a + b == c)
                answer.push_back("O");
            else
                answer.push_back("X");
        }
    }
    return answer;
}

