#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> num_list) {
    int n = num_list.size();
    if(num_list[n-1] > num_list[n-2]) {
        int a = num_list[n-1] - num_list[n-2];
        num_list.push_back(a);
    }
    else{
        int a = num_list[n-1] * 2;
        num_list.push_back(a);
    }
    return num_list;
}