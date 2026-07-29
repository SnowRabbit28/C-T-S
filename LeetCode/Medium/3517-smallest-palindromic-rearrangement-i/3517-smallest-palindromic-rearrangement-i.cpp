class Solution {
public:
    string smallestPalindrome(string s) {
        vector<int> v(26, 0);
        string answer = "";
        string half = "";
        string center = "";
        for (auto& c : s) {
            v[c - 'a']++;
        }
        // v에는 알파벳별 갯수가 있다.
        for (int i = 0; i < 26; i++) {
            if (v[i] % 2 != 0) {
                center = i + 'a';
                v[i]--;
            }
            
            half += string(v[i] / 2, i + 'a');
        }
        answer = half + center;
        reverse(half.begin(), half.end());
        answer += half;
        return answer;
    }
};