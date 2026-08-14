class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n = s.size();
        int m = 0;

        for (int i = 0; i < n; i++) {
            vector<int> v(26, 0);
            for (int j = i; j < n; j++) {
                v[s[j] - 'a']++;
                if (v[s[j] - 'a'] == 3)
                    break;
                m = max(m, j - i + 1);
            }
        }
        return m;
    }
};