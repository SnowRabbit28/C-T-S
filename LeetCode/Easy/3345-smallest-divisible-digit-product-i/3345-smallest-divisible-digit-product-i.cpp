class Solution {
public:
    int smallestNumber(int n, int t) {
        for (int i = n; i < 101; i++) {
            int ans = 1;
            if (i < 10)
                ans = i;
            else
                ans = (i / 10) * (i % 10);

            if (ans % t == 0) {
                return i;
            }
        }
        return 0;
    }
};