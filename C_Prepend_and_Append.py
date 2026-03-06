t = int(input())

for _ in range(t):
    n = int(input())
    num = input().strip()

    l = 0
    r = n - 1

    while l < r and num[l] != num[r]:
        l += 1
        r -= 1

    if l > r:
        print(0)
    else:
        print(r - l + 1)
