class Solution {
  public:
    vector<int> subsetXOR(int n) {
        
        if (n == 0) {return vector<int>{};}

        vector<int> subset;
        int xor_sum = 0;

   
        for (int i = 1; i <= n; ++i)
        {
            subset.push_back(i);
            xor_sum ^= i;

            if (xor_sum == n) {return subset;}
        }

        for (size_t i = 0; i < subset.size(); ++i)
        {
            int temp_xor = xor_sum ^ subset[i];
            if (temp_xor == n)
            {
                subset.erase(subset.begin() + i);
                return subset;
            }
        }

        return subset;
    }
};
