import sys

def min_operations_to_white_wall(N, S):
    
    count = [[0] * 3 for _ in range(3)] 
    color_index = {'R': 0, 'G': 1, 'B': 2}  

    for i, ch in enumerate(S):
        count[color_index[ch]][i % 3] += 1

    min_operations = float('inf')

    
    for order in [(0, 1, 2), (0, 2, 1), (1, 0, 2), (1, 2, 0), (2, 0, 1), (2, 1, 0)]:
        
        ops = 0
        for mod3_pos in range(3):
            
            needed_color = order[mod3_pos]
            total_at_mod_pos = sum(count[c][mod3_pos] for c in range(3))
            ops += total_at_mod_pos - count[needed_color][mod3_pos]
        
        min_operations = min(min_operations, ops)

    return min_operations


input = sys.stdin.read
data = input().split()
T = int(data[0])
index = 1
results = []

for _ in range(T):
    N = int(data[index])
    S = data[index + 1]
    index += 2
    results.append(str(min_operations_to_white_wall(N, S)))


sys.stdout.write("\n".join(results) + "\n")
