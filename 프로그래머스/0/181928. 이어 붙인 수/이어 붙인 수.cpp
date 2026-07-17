#include <string>
#include <vector>

using namespace std;

int solution(vector<int> num_list) {
    string a = "";
    string b = "";
    for(auto& num : num_list){
        if(num % 2 == 0)
            a += to_string(num);
        else
            b += to_string(num);
    }
    return stoi(a)+stoi(b);
}