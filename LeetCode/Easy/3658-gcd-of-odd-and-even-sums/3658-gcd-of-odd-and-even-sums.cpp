class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int sum = 0;
        for(int i = 1; i <= n; i++)
            sum += (i * 2);
        return gcd(sum-n,sum);
    }
};