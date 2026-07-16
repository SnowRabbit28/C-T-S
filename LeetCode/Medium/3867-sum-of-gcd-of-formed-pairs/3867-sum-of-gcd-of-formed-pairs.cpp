class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int> mx;
        vector<int> prefixGcd;
        int n = nums.size();
        long long answer = 0;
        int cur_max = 0;

        for (int i = 0; i < n; i++){
            mx.push_back(nums[i]);
            cur_max = max(cur_max,nums[i]);
            int pre = gcd(cur_max,nums[i]);
            prefixGcd.push_back(pre);
        }
        sort(prefixGcd.begin(),prefixGcd.end());

        int b = 0;
        int e = prefixGcd.size()-1;
        while(b < e){
            answer += gcd(prefixGcd[b],prefixGcd[e]);
            b++; e--;    
        }
        return answer;    
    } 
};
// 위치의 값과 num을 매치해서.. mx를 구한다 mx는 쌓여가는 배열에서 하나꺼내는것.
// 그다음에 pre에 넣고 정렬한다.
// 그다음에 gcd해준다.