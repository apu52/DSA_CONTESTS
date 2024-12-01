class Solution {
  public:
        int findMax(int k, int n, int m) {
        if(1ll * m * k < n) return -1;
        
        if(m == 1) return n;
        if(k >= n) return n;
        n -= k;
        int q = (n + (m - 2)) / (m - 1);
        return k - q;
    }
};
