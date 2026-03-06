t = int(input())

for _ in range(t):
    n = int(input())
    s = input().strip()

    unique = len(set(s))
    print(n + unique)