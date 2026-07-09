class Solution {
public:
    vector<int> sumAndMultiply(string s, vector<vector<int>>& queries) {
        int n = s.size();
        long long mod = 1000000007;

        vector<long long> pow10(n + 1, 1);
        for (int i = 1; i <= n; i++) {
            pow10[i] = (pow10[i - 1] * 10) % mod;
        }

        vector<long long> pref_sum(n + 1, 0);
        vector<long long> pref_cnt(n + 1, 0);
        vector<long long> pref_x(n + 1, 0);

        for (int i = 0; i < n; i++) {
            pref_sum[i + 1] = pref_sum[i];
            pref_cnt[i + 1] = pref_cnt[i];
            pref_x[i + 1] = pref_x[i];

            if (s[i] != '0') {
                int digit = s[i] - '0';
                pref_sum[i + 1] += digit;
                pref_cnt[i + 1]++;
                pref_x[i + 1] = (pref_x[i] * 10 + digit) % mod;
            }
        }

        vector<int> answer;
        for (auto& q : queries) {
            int L = q[0];
            int R = q[1];

            long long sum = pref_sum[R + 1] - pref_sum[L];
            long long cnt = pref_cnt[R + 1] - pref_cnt[L];
            long long x = (pref_x[R + 1] - pref_x[L] * pow10[cnt]) % mod;

            if (x < 0)
                x += mod;

            long long cur = (sum * x) % mod;
            answer.push_back(cur);
        }
        return answer;
    }
};