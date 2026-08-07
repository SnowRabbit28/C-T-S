class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        string answer = "";
        if(str1+ str2 != str2+str1) return "";
        else{
            int n = gcd(str1.size(),str2.size());
            answer = str1.substr(0,n);
        }
        return answer;
    }
};

