class Solution {
public:
    long long countMajoritySubarrays(vector<int>& nums, int target) {
        unordered_map<int, int> mp;

        int cumSum = 0;

        mp[0] = 1;

        long long validLeftPoint = 0;
        long long result = 0;

        for (int j = 0; j < nums.size(); j++) {
            if (nums[j] == target) {
                validLeftPoint += mp[cumSum];
                cumSum++;
            } else {
                cumSum--;
                validLeftPoint -= mp[cumSum];
            }

            mp[cumSum] += 1;
            result += validLeftPoint;
        }

        return result;
    }
};