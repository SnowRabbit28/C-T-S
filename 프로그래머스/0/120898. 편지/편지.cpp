#include <string>
#include <vector>

using namespace std;

int solution(string message) {
    int answer = 0;
    for(char& c : message){
            answer++;
    }
    return answer * 2;
}