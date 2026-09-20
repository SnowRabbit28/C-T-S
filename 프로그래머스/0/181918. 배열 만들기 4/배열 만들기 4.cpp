#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> stk;
    int n = arr.size();
    int i = 0;
    while(i < n){
        if(stk.size() == 0){
            stk.push_back(arr[i]);
            i++;
        }
        else if(stk.back() < arr[i]){
            stk.push_back(arr[i]);
            i++;
        }
        else{
            stk.pop_back();
        }   
    }
    return stk;
}