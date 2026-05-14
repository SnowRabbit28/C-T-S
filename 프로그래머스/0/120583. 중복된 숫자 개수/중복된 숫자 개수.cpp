#include <string>
#include <vector>

using namespace std;

int solution(vector<int> array, int n) {
    int answer = 0;
    vector<int> v(1000,0);
    for(auto& num : array)
        v[num]++;
    return v[n];
}