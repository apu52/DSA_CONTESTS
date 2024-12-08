
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool canTransform(string &s1, string &s2) {
        
        if (s1.length() != s2.length()) return false;

        
        unordered_map<char, int> shiftMap;

        for (int i = 0; i < s1.length(); i++) {
            char c1 = s1[i];  
            char c2 = s2[i];  

            
            int forwardShift = (c2 - c1 + 26) % 26;  
            int backwardShift = (c1 - c2 + 26) % 26;

            
            if (shiftMap.find(c1) == shiftMap.end()) {
                shiftMap[c1] = forwardShift;  
            } else {
                
                if (shiftMap[c1] != forwardShift && shiftMap[c1] != backwardShift) {
                    return false;
                }
            }
        }

        
        return true;
    }
};
