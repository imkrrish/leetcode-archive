class Solution {
public:
    static constexpr long long MOD = 1000000007LL;

    using Matrix = vector<vector<long long>>;

    Matrix multiply(const Matrix& A, const Matrix& B) {
        int n = A.size();

        Matrix C(n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n; k++) {
                if (A[i][k] == 0)
                    continue;

                long long a = A[i][k];

                for (int j = 0; j < n; j++) {
                    if (B[k][j] == 0)
                        continue;

                    C[i][j] = (C[i][j] + a * B[k][j]) % MOD;
                }
            }
        }

        return C;
    }

    Matrix power(Matrix base, long long exp) {
        int n = base.size();

        Matrix res(n, vector<long long>(n, 0));

        for (int i = 0; i < n; i++) {
            res[i][i] = 1;
        }

        while (exp > 0) {
            if (exp & 1) {
                res = multiply(res, base);
            }

            base = multiply(base, base);
            exp >>= 1;
        }

        return res;
    }

    vector<long long> multiplyMatVec(const Matrix& A,
                                     const vector<long long>& v) {
        int n = A.size();

        vector<long long> res(n, 0);

        for (int i = 0; i < n; i++) {
            long long cur = 0;

            for (int j = 0; j < n; j++) {
                if (A[i][j] == 0)
                    continue;

                cur = (cur + A[i][j] * v[j]) % MOD;
            }

            res[i] = cur;
        }

        return res;
    }

    int zigZagArrays(int n, int l, int r) {
        int m = r - l + 1;

        int K = 2 * m;

        Matrix T(K, vector<long long>(K, 0));

        /*
            state:

            [0 ... m-1]     = UP states
            [m ... 2m-1]    = DOWN states

            UP[x]   <- DOWN[y] for y < x
            DOWN[x] <- UP[y]   for y > x
        */

        for (int x = 0; x < m; x++) {

            for (int y = 0; y < x; y++) {
                T[x][m + y] = 1;
            }

            for (int y = x + 1; y < m; y++) {
                T[m + x][y] = 1;
            }
        }

        vector<long long> base(K, 0);

        // length = 2
        for (int x = 0; x < m; x++) {
            base[x] = x;             // UP[x]
            base[m + x] = m - 1 - x; // DOWN[x]
        }

        if (n == 2) {
            long long ans = 0;

            for (long long x : base) {
                ans = (ans + x) % MOD;
            }

            return (int)ans;
        }

        Matrix P = power(T, n - 2);

        vector<long long> finalState = multiplyMatVec(P, base);

        long long ans = 0;

        for (long long x : finalState) {
            ans = (ans + x) % MOD;
        }

        return (int)ans;
    }
};