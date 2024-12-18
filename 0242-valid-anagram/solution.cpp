class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<char, int> s_map;

        for (int i = 0, n = s.size(); i < n; i++) {
            if (s_map.find(s[i]) != s_map.end()) {
                s_map[s[i]]++;
            } else {
                s_map.insert({s[i], 1});
            }
        }

        for (int i = 0, n = s.size(); i < n; i++) {
            if (s_map.find(t[i]) != s_map.end()) {
                if (s_map[t[i]] <= 0) {
                    return false;
                } else {
                    s_map[t[i]]--;
                }
            } else {
                return false;
            }
        }

        return true;
    }
};