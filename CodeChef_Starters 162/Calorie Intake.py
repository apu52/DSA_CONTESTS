X, Y, Z = map(int, input().split())


calories_consumed = Y * Z


if calories_consumed > X:
    print(-1)
else:
    
    remaining_calories = X - calories_consumed
    print(remaining_calories)
