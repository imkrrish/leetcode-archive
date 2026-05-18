class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();
        int requred_count = t.length();
        if (requred_count > n) {
            return "";
        }

        unordered_map<char, int> mp;

        for (char ch : t) {
            mp[ch]++;
        }

        int i = 0, j = 0;

        int window_size = INT_MAX;
        int start_i = 0;

        while (j < n) {
            char ch = s[j];

            if (mp[ch] > 0) {
                requred_count--;
            }
            mp[ch]--;
            while (requred_count == 0) {
                int curr_win_size = j - i + 1;
                if (window_size > curr_win_size) {
                    window_size = curr_win_size;
                    start_i = i;
                }
                mp[s[i]]++;
                if (mp[s[i]] > 0) {
                    requred_count++;
                }
                i++;
            }
            j++;
        }
        return window_size == INT_MAX ? "" : s.substr(start_i, window_size);
    }
};