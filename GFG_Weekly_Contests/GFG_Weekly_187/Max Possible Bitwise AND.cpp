class Solution {
  public:
    long long maxAND(int k, vector<int>& arr) {
        int n = arr.size();
        vector<long long> subarraySums;

        for (int i = 0; i < n; ++i) {
            long long currentSum = 0;
            for (int j = i; j < n; ++j) {
                currentSum += arr[j];
                subarraySums.push_back(currentSum);
            }
        }

        sort(subarraySums.rbegin(), subarraySums.rend());

        long long maxAnd = 0;

        for (int bit = 62; bit >= 0; --bit) {
            long long candidate = maxAnd | (1LL << bit);
            int count = 0;

            for (long long sum : subarraySums) {
                if ((sum & candidate) == candidate) {
                    count++;
                    if (count >= k) break;
                }
            }

            if (count >= k) {
                maxAnd = candidate;
            }
        }

        return maxAnd;
    }
};
