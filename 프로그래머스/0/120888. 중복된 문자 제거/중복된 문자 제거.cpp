#include <string>
#include <vector>

using namespace std;

string solution(string my_string) {
    vector<bool> v(200,false);
    string answer = "";
    for(char c : my_string){
        if(!v[c]){
            v[c] = true;
            answer += c;
        }
    }
    return answer;
}