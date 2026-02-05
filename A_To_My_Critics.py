t = int(input())

for _ in range(t):
    listy=list(map(int,input().split()))

    if listy[0]+listy[1]>=10 or listy[0]+listy[2]>=10 or listy[1]+listy[2]>=10:
        print("YES")
    else:
        print("NO")