#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) {
    vector<int> answer;
    int a = n;
    while(a != 1){
        answer.push_back(a);
        if(a % 2 == 0) a /= 2;
        else a = (3*a) + 1;
    }
    answer.push_back(a);
    return answer;
}