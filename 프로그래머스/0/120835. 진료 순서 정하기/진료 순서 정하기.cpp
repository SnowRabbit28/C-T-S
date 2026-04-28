#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> emergency) {
    vector<int> answer;
    for(int i = 0; i < emergency.size(); i++){
        int a = emergency[i];
        int cnt = 1;
        for(int j = 0; j< emergency.size();j++){
            if(a < emergency[j])
                cnt++;
        }
        answer.push_back(cnt);
    }
    return answer;
}