#include <string>
#include <vector>

using namespace std;

int solution(int balls, int share) {
    long long answer = 1;
    for(int i = 1; i <= share; i++){
        answer *= balls;
        answer /= i;
        balls--;
    }
    return answer;
}
