#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int X;
    cin >> X;

    
    vector<int> activities = {1, 2, 4};

    
    sort(activities.begin(), activities.end());

    int count = 0; 
    for (int duration : activities) {
        if (X >= duration) {
            X -= duration;
            count++;       
        } else {
            break; 
        }
    }

    
    cout << count << endl;

    return 0;
}
