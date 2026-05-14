class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n = nums.size();

        int max_count = 0;

        for (int i = 0; i < n; i++) {
            int x = abs(nums[i]);

            if (x < 1 || x >= n) {
                return false;
            }

            if (x == n - 1) {
                max_count++;
                if (max_count > 2)
                    return false;
            } else {
                if (nums[x - 1] < 0) {
                    return false;
                }
                nums[x - 1] *= -1;
            }
        }

        if (max_count != 2)
            return false;

        for (int i = 1; i <= n - 2; i++) {
            if (nums[i - 1] > 0) {
                return false;
            }
        }

        return true;
    }
};