#include <bits/stdc++.h>
using namespace std;

string solution(string letter) {
   map<string, string> morse = { 
    {".-", "a"}, {"-...", "b"}, {"-.-.", "c"}, {"-..", "d"}, {".", "e"}, {"..-.", "f"},
    {"--.", "g"}, {"....", "h"}, {"..", "i"}, {".---", "j"}, {"-.-", "k"}, {".-..", "l"},
    {"--", "m"}, {"-.", "n"}, {"---", "o"}, {".--.", "p"}, {"--.-", "q"}, {".-.", "r"},
    {"...", "s"}, {"-", "t"}, {"..-", "u"}, {"...-", "v"}, {".--", "w"}, {"-..-", "x"},
    {"-.--", "y"}, {"--..", "z"}
};
    
    stringstream ss(letter);
    string answer = "";
    string word = "";
    while(ss >> word){
        answer += morse[word];
    }
    return answer;
}