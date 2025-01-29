def get_min_steps(current, target):
    
    current_ord = ord(current)
    target_ord = ord(target)
    
   
    if target_ord >= current_ord:
        return target_ord - current_ord
    else:
        return (26 - (current_ord - target_ord))

def solve_test_case(S):
    
    target = "ADVITIYA"
    total_steps = 0
    
    
    for i in range(8):
        total_steps += get_min_steps(S[i], target[i])
    
    return total_steps

def main():
    
    T = int(input())
    
    
    for _ in range(T):
        S = input().strip()
        result = solve_test_case(S)
        print(result)

if __name__ == "__main__":
    main()
