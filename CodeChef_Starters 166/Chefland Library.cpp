#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;

    while (T--) {
        
        int N;
        cin >> N;

        vector<int> A(N); 

        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        
        unordered_map<int, int> maxPenaltyPerDay;

        for (int i = 0; i < N; i++) {
            
            maxPenaltyPerDay[A[i]] = max(maxPenaltyPerDay[A[i]], i + 1);
        }

        
        int totalPenalty = 0;
        for (const auto &entry : maxPenaltyPerDay) {
            totalPenalty += entry.second;
        }

        
        cout << totalPenalty << endl;
    }

    return 0;
}
