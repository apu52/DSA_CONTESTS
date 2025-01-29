def solve_test_case(M, K, S):
    
    
    swishes = S.count('S')
    
    
    if swishes >= K:
        return M
        
    
    needed = K - swishes
    
   
    remaining = needed - 1
    
    
    if remaining <= 0:
        return M
        
    
    return M + remaining

def main():
    
    T = int(input())
    
    
    for _ in range(T):
        
        M, K = map(int, input().split())
        
        S = input().strip()
        
        
        result = solve_test_case(M, K, S)
        print(result)

if __name__ == "__main__":
    main()
