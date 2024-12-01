class Solution {
  public:
    vector<int> findArray(int n, int k, vector<vector<int>> &ops) {
        vector<vector<int>> cnt(n, vector<int>(31));
    for(int i = 0; i < k; i++)
    {
        int l = ops[i][0];
        int r = ops[i][1];
        int x = ops[i][2];
        l--; r--;


        for(int j = 0; j < 31; j++)
        {
            if(x & (1 << j))
            {
                cnt[l][j]++;
                if(r + 1 < n) cnt[r + 1][j]--;
            }
        }
    }

    for(int j = 0; j < 31; j++) cnt[0][j] %= 2;
    for(int i = 1; i < n; i++)
    {
        for(int j = 0; j < 31; j++)
        {
            cnt[i][j] += cnt[i - 1][j];
            cnt[i][j] %= 2; 
        }
    }

    vector<int> res(n);
    for(int i = 0; i < n; i++)
    {
        int sum = 0;
        for(int j = 0; j < 31; j++)
        {
            if(cnt[i][j]) sum += (1 << j);
        }

        res[i] = sum;
    }

    return res;
    }
};
