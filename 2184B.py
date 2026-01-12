t = int(input())

for _ in range(t):
    s, k, m = map(int, input().split())
    
    time_after_last_flip = m % k
    remaining_sand = max(0, min(s, k) - time_after_last_flip)
    
    print(remaining_sand)
