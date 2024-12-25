#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;  
    
    while (T--) {
        int N;
        cin >> N;
        vector<int> A(N);
        
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }
        
       
        vector<pair<int, int>> indexedA(N);
        for (int i = 0; i < N; ++i) {
            indexedA[i] = {A[i], i};
        }
        
        
        sort(indexedA.rbegin(), indexedA.rend());
        
        
        vector<int> B(N);
        for (int i = 0; i < N; ++i) {
            B[indexedA[i].second] = i + 1;
        }
        
       
        int adjacentDifferences = 0;
        for (int i = 0; i < N - 1; ++i) {
            if (abs(B[i] - B[i + 1]) == 1) {
                adjacentDifferences++;
            }
        }
        

        cout << adjacentDifferences + 1 << endl;
    }
    
    return 0;
}
