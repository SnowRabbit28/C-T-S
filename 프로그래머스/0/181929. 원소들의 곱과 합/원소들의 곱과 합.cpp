#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    int i = 0;
    int j = 1;
    for(auto& n : num_list){
        i += n;
        j *= n;
    }
    return (i * i) > j ? 1 : 0;
}