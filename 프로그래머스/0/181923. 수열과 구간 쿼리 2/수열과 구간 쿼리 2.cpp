#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr, vector<vector<int>> queries) {
    vector<int> answer;
    for(auto& q : queries){
        int a = 1000005;
        for(int i = q[0]; i <= q[1]; i++){
            if(arr[i] > q[2] && arr[i] < a){
                a = arr[i];
            }
           
        }
        if(a == 1000005) answer.push_back(-1);  
        else answer.push_back(a);
    }
    return answer;    
}