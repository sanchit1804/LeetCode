class Solution {
public:
    int numTilings(int n) {
        const long long MOD = 1000000007;

        vector<long long> dp(n + 1, 0);

        if (n <= 2) return n;

        dp[0] = 1;
        dp[1] = 1;
        dp[2] = 2;

        for (int i = 3; i <= n; i++) {
            dp[i] = (2 * dp[i - 1] + dp[i - 3]) % MOD;
        }

        return dp[n];
    }
};