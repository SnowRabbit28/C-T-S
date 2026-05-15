#include <string>
#include <vector>
#include <sstream>

using namespace std;

string solution(string polynomial) {
    string answer = "";
    string tmp;
    int xsum = 0;
    int sum = 0;
    stringstream ss(polynomial);
    while(ss >> tmp){
        if(tmp == "+") continue;
        
        if(tmp.back() == 'x'){ 
            if(tmp == "x")
                xsum++;
            else xsum += stoi(tmp.substr(0,tmp.size()-1));
        }
        else sum += stoi(tmp);
    }
    if(xsum > 0){
        if(xsum == 1) answer += "x";    
        else answer += to_string(xsum) + "x";
    }
    if(xsum > 0 && sum > 0 ) answer += " + ";
    if( sum > 0 ) answer += to_string(sum);
    return answer;
}