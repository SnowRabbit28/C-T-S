#include <string>
#include <vector>

using namespace std;

long long solution(string numbers) {
    long long answer = 0; 
    string tmp = "";
    string num[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(char c : numbers){
        tmp += c;
        for(int i = 0; i < 10; i++){
            if(tmp == num[i]){
                answer = answer * 10 + i;
                tmp = "";
                break;
            } 
        }
    }
    return answer;
}

