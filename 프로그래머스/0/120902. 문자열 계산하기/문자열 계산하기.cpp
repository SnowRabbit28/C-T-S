#include <string>
#include <vector>
#include <sstream>

using namespace std;

int solution(string my_string) {
    int answer = 0;
    int num = 0;
    char gi;
    stringstream ss(my_string);
    
    ss >> answer;
    
    while(ss >> gi >> num){
        if (gi == '+')
            answer += num;
        else
            answer -= num;
    }
    return answer;
}