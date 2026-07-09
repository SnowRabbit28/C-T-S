class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff,
                                      vector<vector<int>>& queries) {
        vector<int> group(n, 0);
        vector<bool> answer;
        int cur = 0;

        for (int i = 1; i < n; i++) {
            int num = abs(nums[i] - nums[i - 1]);
            if (num > maxDiff)
                cur++;
            group[i] = cur;
        }

        for (auto& q : queries)
            answer.push_back(group[q[0]] == group[q[1]]);

        return answer;
    }
};