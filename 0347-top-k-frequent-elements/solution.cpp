class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        if (n == k) {
            return nums;
        }

        unordered_map<int, int> mp;

        for (int& num : nums) {
            mp[num]++;
        }

        vector<vector<int>> bucket(n + 1);

        for (auto& it : mp) {
            int num = it.first;
            int count = it.second;

            bucket[count].push_back(num);
        }

        vector<int> ans;

        for (int i = n; i >= 0 && ans.size() < k; i--) {
            for (int num : bucket[i]) {
                ans.push_back(num);

                if (ans.size() == k) {
                    return ans;
                }
            }
        }

        return ans;
    }
};