#include <string>
#include <vector>

using namespace std;

int solution(vector<vector<int>> sizes) {
    int answer = 0;
    int max1 = 0;
    int max2 = 0;
    for(auto& v : sizes)
        if(v[0] < v[1]) swap(v[0],v[1]);
    
    for(auto& v : sizes){
        max1 = max(max1,v[0]);
        max2 = max(max2,v[1]);
    }
    return max1 * max2;
}