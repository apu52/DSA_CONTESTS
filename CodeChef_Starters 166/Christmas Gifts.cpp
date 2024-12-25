#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;

    while (T--) {
        
        int H, L, W;
        cin >> H >> L >> W;

        
        int surfaceArea = 2 * (H * L + L * W + W * H);

        
        int totalPaper = 1000;

        
        int maxGifts = totalPaper / surfaceArea;

       
        cout << maxGifts << endl;
    }

    return 0;
}

