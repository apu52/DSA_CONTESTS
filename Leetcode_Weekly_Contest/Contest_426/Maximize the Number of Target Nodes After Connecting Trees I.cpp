#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void dfs(int node, int parent, int distance, int root, int k, vector<int>& good, vector<vector<int>>& adj) {
        if (distance >= k) return;  
        good[root]++;  
        for (int neighbor : adj[node]) {
            if (neighbor != parent) {
                dfs(neighbor, node, distance + 1, root, k, good, adj);
            }
        }
    }

    vector<int> maxTargetNodes(vector<vector<int>>& edges1, vector<vector<int>>& edges2, int k) {
        int n = edges1.size() + 1;  
        int m = edges2.size() + 1;  

        
        vector<vector<int>> adj1(n), adj2(m);
        for (auto& edge : edges1) {
            int u = edge[0], v = edge[1];
            adj1[u].push_back(v);
            adj1[v].push_back(u);
        }
        for (auto& edge : edges2) {
            int u = edge[0], v = edge[1];
            adj2[u].push_back(v);
            adj2[v].push_back(u);
        }

        
        vector<int> good1(n, 0), good2(m, 0);

        
        for (int i = 0; i < n; i++) {
            dfs(i, -1, 0, i, k + 1, good1, adj1);
        }

        
        for (int i = 0; i < m; i++) {
            dfs(i, -1, 0, i, k, good2, adj2);
        }

        
        int mx = *max_element(good2.begin(), good2.end());

        
        vector<int> ans(n);
        for (int i = 0; i < n; i++) {
            ans[i] = good1[i] + mx;
        }

        return ans;
    }
};©leetcode
