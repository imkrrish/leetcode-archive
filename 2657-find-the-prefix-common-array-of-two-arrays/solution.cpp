class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        int n = A.size();
        unordered_map<int, int> mp;

        vector<int> ans;

        for (int i = 0; i < n; i++) {
            mp[A[i]]++;
            mp[B[i]]++;

            int permutation = i == 0 ? 0 : ans[i - 1];

            if (mp[A[i]] >= 2 && A[i] == B[i]) {
                permutation++;
            }

            if (mp[A[i]] >= 2 && A[i] != B[i]) {
                permutation++;
            }

            if (mp[B[i]] >= 2 && A[i] != B[i]) {
                permutation++;
            }

            ans.push_back(permutation);
        }

        return ans;
    }
};