#include <string>
#include <vector>

using namespace std;

string solution(string myString) {
    for(auto& s : myString){
        toupper(s);
        s = toupper(s);
    }
    return myString;
}