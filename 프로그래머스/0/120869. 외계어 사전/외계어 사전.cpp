#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<string> spell, vector<string> dic) {
    string target = "";
    for(auto c : spell) target += c;
    sort(target.begin(),target.end());
    
    for(auto s : dic){
        if(target.size() != s.size()) continue;
        sort(s.begin(),s.end());
        if(target == s) return 1;
    }
    return 2;
}

