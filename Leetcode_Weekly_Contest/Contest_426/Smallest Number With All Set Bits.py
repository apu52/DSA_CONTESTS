class Solution:
    def smallestNumber(self, n: int) -> int:
        
        x = n
        
        
        while (x & (x + 1)) != 0:
            x += 1
        
        return x

        
