class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        // unordered_set<char> seen;
        // int max_len = 0;
        // int l = 0;

        // for (int r = 0; r < s.size(); r++) {
        //     while (seen.count(s[r])) {
        //         seen.erase(s[l]);
        //         l++;
        //     }

        //     seen.insert(s[r]);
        //     max_len = max(max_len, r - l + 1);
        // }

        // return max_len;

        unordered_map<char, int> mp;

        int l = 0;
        int max_len = 0;

        for (int r = 0; r < s.size(); r++) {
            if (mp.count(s[r])) {
                l = max(l, mp[s[r]] + 1);
            }

            mp[s[r]] = r;
            max_len = max(max_len, r - l + 1);
        }

        return max_len;
    }
};