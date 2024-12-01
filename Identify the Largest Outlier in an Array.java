import java.util.HashMap;

class Solution {
    public int getLargestOutlier(int[] nums) {
        int totalSum = 0;
        for (int num : nums) {
            totalSum += num;
        }

        
        HashMap<Integer, Integer> freqMap = new HashMap<>();
        for (int num : nums) {
            freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
        }

        int largestOutlier = Integer.MIN_VALUE;

        
        for (int sumElement : nums) {
            
            int potentialOutlier = totalSum - 2 * sumElement;

            
            if (freqMap.containsKey(potentialOutlier)) {
                
                if (potentialOutlier == sumElement && freqMap.get(sumElement) < 2) {
                    continue; 
                }
                
                largestOutlier = Math.max(largestOutlier, potentialOutlier);
            }
        }

        return largestOutlier;
    }
}
