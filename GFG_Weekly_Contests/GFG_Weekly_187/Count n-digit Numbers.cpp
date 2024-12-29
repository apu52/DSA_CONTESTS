const int MOD = 1e9 + 7;

class Solution {
public:
    int countNumbers(int n) {
        
        vector<vector<int>> dp(10, vector<int>(n + 1, 0));

        
        for (int digit = 2; digit <= 9; ++digit) {
            dp[digit][1] = 1; 
        }

        
        for (int length = 2; length <= n; ++length) {
            for (int g = 2; g <= 9; ++g) { 
                for (int digit = 1; digit <= 9; ++digit) { 
                    int newGCD = __gcd(g, digit);
                    dp[newGCD][length] = (dp[newGCD][length] + dp[g][length - 1]) % MOD;
                }
            }
        }

        
        int result = 0;
        for (int g = 2; g <= 9; ++g) {
            result = (result + dp[g][n]) % MOD;
        }

        return result;
    }
};
