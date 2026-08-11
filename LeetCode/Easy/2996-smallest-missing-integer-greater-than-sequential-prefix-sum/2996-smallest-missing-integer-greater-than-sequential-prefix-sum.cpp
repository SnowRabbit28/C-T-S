class Solution {
public:
    int missingInteger(vector<int>& nums) {
        int n = nums[0];
        unordered_set<int> s(nums.begin(), nums.end());

        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                n += nums[i];
            } else
                break;
        }
        while (s.count(n)) {
            n++;
        }
        return n;
    }
};