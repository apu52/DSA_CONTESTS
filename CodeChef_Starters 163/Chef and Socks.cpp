#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int A, X, Y;
    cin >> A >> X >> Y; 
    
    int total_money = X + Y; 
    if (total_money >= A) {
        cout << "YES" << "\n"; 
    } else {
        cout << "NO" << "\n"; 
    }
    
    return 0;
}
