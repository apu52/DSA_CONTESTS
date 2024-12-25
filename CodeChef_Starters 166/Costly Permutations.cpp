#include <bits/stdc++.h>
using namespace std;

typedef long long ll;


int calculateCycleLength(const vector<int>& P, int start, vector<bool>& visited) {
    int length = 0;
    int current = start;
    while (!visited[current]) {
        visited[current] = true;
        current = P[current] - 1; 
        length++;
    }
    return length;
}

int main() {
    
    int T;
    cin >> T;

    while (T--) {
        
        int N;
        cin >> N;

        vector<int> P(N);
        for (int i = 0; i < N; i++) {
            cin >> P[i];
        }

        vector<bool> visited(N, false);
        vector<int> cycleLengths;

        
        for (int i = 0; i < N; i++) {
            if (!visited[i]) {
                int cycleLength = calculateCycleLength(P, i, visited);
                cycleLengths.push_back(cycleLength);
            }
        }

        
        priority_queue<int, vector<int>, greater<int>> pq(cycleLengths.begin(), cycleLengths.end());
        ll totalCost = 0;

        
        while (pq.size() > 1) {
            int smallest = pq.top(); pq.pop();
            int secondSmallest = pq.top(); pq.pop();

            int newCycle = smallest + secondSmallest; 
            totalCost += newCycle; 
            pq.push(newCycle); 
        }

       
        cout << totalCost << endl;
    }

    return 0;
}
