class Solution:
    def shiftDistance(self, s: str, t: str, nextCost: List[int], previousCost: List[int]) -> int:
        def get_min_cost(src: str, dst: str) -> int:
            
            src_idx = ord(src) - ord('a')
            dst_idx = ord(dst) - ord('a')
            
            if src_idx == dst_idx:
                return 0
                
            
            forward_steps = (dst_idx - src_idx) % 26
            forward_cost = 0
            curr_idx = src_idx
            for _ in range(forward_steps):
                forward_cost += nextCost[curr_idx]
                curr_idx = (curr_idx + 1) % 26
            
            
            backward_steps = (src_idx - dst_idx) % 26
            backward_cost = 0
            curr_idx = src_idx
            for _ in range(backward_steps):
                backward_cost += previousCost[curr_idx]
                curr_idx = (curr_idx - 1) % 26
            
            
            return min(forward_cost, backward_cost)
        
        
        total_cost = 0
        for c1, c2 in zip(s, t):
            total_cost += get_min_cost(c1, c2)
        
        return total_cost
        
