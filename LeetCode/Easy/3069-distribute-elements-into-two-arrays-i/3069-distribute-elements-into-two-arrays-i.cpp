class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        // num에서 0과 1을 각각 arr1 arr2 에 넣음
        // arr1이 arr2보다 크기때문에 다음 숫자 num2번째애는
        // arr1에 넣음 그리고 두개 잇기.
        // 마지막 요소를 비교하는것이 중요.

        vector<int> arr1;
        vector<int> arr2;
        int ar1 = nums[0];
        int ar2 = nums[1];
        arr1.push_back(ar1);
        arr2.push_back(ar2);

        for (int i = 2; i < nums.size(); i++) {
            if (ar1 > ar2) {
                arr1.push_back(nums[i]);
                ar1 = nums[i];
            } else {
                arr2.push_back(nums[i]);
                ar2 = nums[i];
            }
        }
        arr1.insert(arr1.end(), arr2.begin(), arr2.end());
        return arr1;
    }
};