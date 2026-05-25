#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int num = 0;
    stringstream ss(s);
    string word;
    
    while(ss >> word){
        if(word == "Z")
            answer -= num;
        else{
            num = stoi(word);
            answer += num;
        }
    }
    return answer;
}


