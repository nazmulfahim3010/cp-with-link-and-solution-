t = int(input())

for _ in range(t):
    n = input().strip()
    
    parts = []
    length = len(n)
    
    for i in range(length):
        if n[i] != '0':
            parts.append(n[i] + '0' * (length - i - 1))
    
    print(len(parts))
    print(*parts)
