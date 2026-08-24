#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int answer = 0;
    for(auto& a : num_list){
        if(a < 0) return answer; 
        answer++;
    }
    return -1;
}