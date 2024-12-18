class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> numsMap;

        for (int i = 0, n = nums.size(); i < n; i++) {
            int comp = target - nums[i];
            if (numsMap.find(comp) != numsMap.end()) {
                return {numsMap[comp], i};
            } else {
                numsMap.insert({nums[i], i});
            }
        }

        return {};
    }
};