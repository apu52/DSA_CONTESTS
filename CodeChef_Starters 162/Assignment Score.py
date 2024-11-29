def minimum_score_needed(test_cases):
    results = []
    
    for t in range(test_cases):
        
        n = int(input())  
        scores = list(map(int, input().split()))  
        
        
        current_sum = sum(scores)
        total_assignments = n + 1  
        total_marks = total_assignments * 100  
        
        
        passing_marks = (total_marks + 1) // 2  
        
        
        min_score_needed = passing_marks - current_sum
        
        
        if min_score_needed > 100:  
            results.append(-1)
        else:
            results.append(max(0, min_score_needed))  
    
    
    for result in results:
        print(result)



T = int(input())  
minimum_score_needed(T)
