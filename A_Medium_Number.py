t = int(input())

for _ in range(t):
    listy= list(map(int,input().split()))

    listy.sort()

    print(listy[1])