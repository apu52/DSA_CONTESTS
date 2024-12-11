#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K, P;
        cin >> N >> K >> P;

        vector<int> A(N);
        for (int i = 0; i < N; ++i) {
            cin >> A[i];
        }

        
        int max_chair = *max_element(A.begin(), A.end());

        
        int total_chairs = accumulate(A.begin(), A.end(), 0);
        int varun_chairs = total_chairs - max_chair;

        
        int ved_height = K + max_chair;
        int varun_height = P + varun_chairs;

        if (ved_height > varun_height) {
            cout << "Ved" << endl;
        } else if (ved_height < varun_height) {
            cout << "Varun" << endl;
        } else {
            cout << "Equal" << endl;
        }
    }
    return 0;
}

