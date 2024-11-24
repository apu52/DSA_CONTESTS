class Solution {
public:
    int findParent(vector<int>& parent, int node) {
        if (parent[node] == node)
            return node;
        return parent[node] = findParent(parent, parent[node]);
    }
    
    void unionSets(vector<int>& parent, vector<int>& rank, int a, int b) {
        int pa = findParent(parent, a);
        int pb = findParent(parent, b);
        
        if (pa != pb) {
            if (rank[pa] < rank[pb])
                swap(pa, pb);
            parent[pb] = pa;
            if (rank[pa] == rank[pb])
                rank[pa]++;
        }
    }
    
    long long cntValid(vector<int>& w) {
        int n = w.size();
        vector<int> parent(n);
        vector<int> rank(n, 0);
        for(int i = 0; i < n; i++) {
            parent[i] = i;
        }
        
        
        vector<vector<int>> bitGroups(31);  
        for(int i = 0; i < n; i++) {
            for(int bit = 0; bit < 31; bit++) {
                if(w[i] & (1 << bit)) {
                    bitGroups[bit].push_back(i);
                }
            }
        }
        
        
        for(int bit = 0; bit < 31; bit++) {
            for(int i = 1; i < bitGroups[bit].size(); i++) {
                unionSets(parent, rank, bitGroups[bit][0], bitGroups[bit][i]);
            }
        }
        
        
        vector<int> componentSize(n, 0);
        for(int i = 0; i < n; i++) {
            componentSize[findParent(parent, i)]++;
        }
        
       
        long long validPairs = 0;
        for(int i = 0; i < n; i++) {
            if(componentSize[i] > 1) {
                long long size = componentSize[i];
                validPairs += (size * (size - 1)) / 2;
            }
        }
        
        return validPairs;
    }
};
