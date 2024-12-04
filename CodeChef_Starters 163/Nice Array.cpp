#include <bits/stdc++.h>
using namespace std;

bool isNiceArray(vector<long long>& A, long long K) {
    long long sumFloor = 0, sumCeil = 0;
    for (auto x : A) {
        long long floorVal = floor((double)x / K);
        long long ceilVal = ceil((double)x / K);
        sumFloor += floorVal;
        sumCeil += ceilVal;
    }
    return sumFloor <= 0 && sumCeil >= 0;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int T;
    cin >> T;

    while (T--) {
        int N;
        long long K;
        cin >> N >> K;

        vector<long long> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }

        if (isNiceArray(A, K)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}
