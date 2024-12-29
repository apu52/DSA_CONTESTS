const int MOD = 1e9 + 7;

class Solution {
public:
    int nthTerm(int n) {
        if (n == 1 || n == 2) return 1; 
        
        int f1 = 1, f2 = 1;

        for (int i = 3; i <= n; ++i) {
            
            int fn = ((1LL * i * f2) % MOD - (1LL * (i - 1) * f1) % MOD + MOD) % MOD;
            fn = (fn + (1LL * (i - 2) * 3) % MOD) % MOD;

            
            f1 = f2;
            f2 = fn;
        }

        return f2; 
    }
};
