#include <unordered_map>

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> myMap;

        for (int i = 0, n = nums.size(); i < nums.size(); i++) {
            if (myMap.find(nums[i]) != myMap.end()) {
                return 1;
            } else {
                myMap.insert({nums[i], i});
            }
        }
        return 0;
    };
};