t = int(input())

for _ in range(t):
    a = input()

    if len(a) == 2:
        print(a)
        continue

    answer = a[0] + a[1]

    for i in range(3, len(a), 2):
        answer += a[i]

    print(answer)
