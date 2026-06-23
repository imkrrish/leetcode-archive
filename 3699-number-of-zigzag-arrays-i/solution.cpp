class Solution {
public:
    static constexpr int MOD = 1'000'000'007;

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        vector<int> up(m), down(m);
        vector<int> newUp(m), newDown(m);
        vector<int> prefix(m), suffix(m);

        // Length = 2
        for (int x = 0; x < m; x++) {
            up[x] = x;           // choose previous value < x
            down[x] = m - 1 - x; // choose previous value > x
        }

        for (int len = 3; len <= n; len++) {

            prefix[0] = down[0];
            for (int i = 1; i < m; i++) {
                prefix[i] = prefix[i - 1] + down[i];
                if (prefix[i] >= MOD)
                    prefix[i] -= MOD;
            }

            suffix[m - 1] = up[m - 1];
            for (int i = m - 2; i >= 0; i--) {
                suffix[i] = suffix[i + 1] + up[i];
                if (suffix[i] >= MOD)
                    suffix[i] -= MOD;
            }

            for (int x = 0; x < m; x++) {
                newUp[x] = (x == 0 ? 0 : prefix[x - 1]);
                newDown[x] = (x == m - 1 ? 0 : suffix[x + 1]);
            }

            swap(up, newUp);
            swap(down, newDown);
        }

        long long ans = 0;

        if (n == 2) {
            for (int x = 0; x < m; x++) {
                ans += up[x];
                ans += down[x];
            }
        } else {
            for (int x = 0; x < m; x++) {
                ans += up[x];
                ans += down[x];
            }
        }

        return (int)(ans % MOD);
    }
};