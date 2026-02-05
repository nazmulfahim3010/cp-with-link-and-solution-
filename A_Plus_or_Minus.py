t = int(input())

for _ in range(t):
    listy=list(map(int,input().split()))

    if listy[0]+listy[1]==listy[2]:
        print("+")
    else:
        print("-")