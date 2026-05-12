class Solution {
public:
    struct arrayHash {
        size_t operator()(const array<int, 26>& arr) const {
            size_t hash = 0;

            for (int num : arr) {
                hash = hash * 31 + num;
            }

            return hash;
        }
    };

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<array<int, 26>, vector<string>, arrayHash> mp;

        for (string str : strs) {
            array<int, 26> freq = {};

            for (char ch : str) {
                freq[ch - 'a']++;
            }

            mp[freq].push_back(str);
        }

        vector<vector<string>> ans;

        for (auto& it : mp) {
            ans.push_back(it.second);
        }

        return ans;
    }
};