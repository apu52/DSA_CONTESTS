def solve_adjacent_sum(N, B):
    
    B.sort()
    
    
    for first in range(1, B[0]):
        
        A = [first]
        is_valid = True
        
        
        for i in range(N-1):
            
            next_elem = B[i] - A[-1]
            
            
            if next_elem <= 0:
                is_valid = False
                break
            
            A.append(next_elem)
        
        
        if is_valid and len(A) == N:
            return A
    
   
    return None


def main():
    
    T = int(input())
    
   
    for _ in range(T):
        
        N = int(input())
        
        
        B = list(map(int, input().split()))
        
        
        result = solve_adjacent_sum(N, B)
        print(*result)


if __name__ == "__main__":
    main()
