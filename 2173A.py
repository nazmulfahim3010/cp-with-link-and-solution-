t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    s = input().strip()

    block_until = -1
    sleep = 0

    for i in range(n):
        if s[i] == '1':
            block_until = i + k
        else:  # s[i] == '0'
            if i > block_until:
                sleep += 1

    print(sleep) 
