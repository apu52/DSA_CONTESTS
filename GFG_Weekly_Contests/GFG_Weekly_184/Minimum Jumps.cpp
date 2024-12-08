

class Solution {
public:
    
    bool perfectSquare(int num) {
        int sqrtVal = static_cast<int>(sqrt(num));
        return sqrtVal * sqrtVal == num;
    }

   
    int minimumJump(vector<int>& points) {
        int jump = 0;

        for (int i = 0; i < points.size() - 1; i++) { 
            bool madeJump = false;

            if (perfectSquare(points[i])) {
                for (int j = points.size() - 1; j > i; j--) { 
                    if (perfectSquare(points[j])) {
                        jump++;
                        i = j - 1; 
                        madeJump = true;
                        break;
                    }
                }
            }

            if (!madeJump) {
                jump++;
            }
        }
        return jump;
    }
};
