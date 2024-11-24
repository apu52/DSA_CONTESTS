class Solution:
    def minimumSumSubarray(self, nums: List[int], l: int, r: int) -> int:
        n = len(nums)
        min_sum = float('inf')
        found = False
        
        
        def get_subarray_sum(start, end):
            return sum(nums[start:end+1])
        
        
        for size in range(l, r + 1):
            
            for start in range(n - size + 1):
                end = start + size - 1
                curr_sum = get_subarray_sum(start, end)
                
                
                if curr_sum > 0:
                    min_sum = min(min_sum, curr_sum)
                    found = True
        
        
        return min_sum if found else -1
        
