class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        sort(nums.begin(), nums.end(), [](int& a, int& b) { return a > b; });
        long long result = 0;
        for (int i = 0; i < k; i++) {
            if (mul <= 0) {
                result += nums[i];
            } else {
                result += 1LL* nums[i] * mul;
                mul--;
            }
        }

        return result;
    }
};