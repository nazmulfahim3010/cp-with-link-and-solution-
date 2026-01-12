from collections import deque

t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    
    if k > n:
        print(-1)
        continue
    
    q = deque()
    q.append((n, 0))
    seen = set([n])
    ans = -1
    
    while q:
        x, d = q.popleft()
        
        if x == k:
            ans = d
            break
        
        if x < k:
            continue
        
        a = x // 2
        b = x - a
        
        if a not in seen:
            seen.add(a)
            q.append((a, d + 1))
        if b not in seen:
            seen.add(b)
            q.append((b, d + 1))
    
    print(ans)

