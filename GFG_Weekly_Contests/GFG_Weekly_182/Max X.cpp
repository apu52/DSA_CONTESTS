class Solution {
  public:
    int findMaxX(int n) {
        int x = 0;
        while ((1 << x) <= n) { 
            x++;
        }
        return x - 1;
    }
};
