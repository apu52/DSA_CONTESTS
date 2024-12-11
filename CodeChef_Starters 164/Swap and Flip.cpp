#include <iostream> 
#include <vector> 
#include <string> 
using namespace std; 
 
void check_transform() { 
    int n; 
    cin >> n; 
    string s, t; 
    cin >> s >> t; 
 
    int count_s0 = 0, count_s1 = 0; 
    int count_t0 = 0, count_t1 = 0; 
 
    for (int i = 0; i < n; i++) { 
        if (s[i] == '0') count_s0++; 
        else count_s1++; 
        if (t[i] == '0') count_t0++; 
        else count_t1++; 
    } 
 
    if (count_s0 % 2 == count_t0 % 2 && count_s1 % 2 == count_t1 % 2) { 
        cout << "YES" << endl; 
    } else { 
        cout << "NO" << endl; 
    } 
} 
 
int main() { 
    ios::sync_with_stdio(false); 
    cin.tie(0); 
 
    int test_cases; 
    cin >> test_cases; 
    while (test_cases--) { 
        check_transform(); 
    } 
 
    return 0; 
}
