t=int(input())

for _ in range(t):
    n = int(input())
    listy=list(map(int,input().split()))
    count=0

    for i in range(n):
        try:
            if listy[i%n+1]:
                count+=1
        except:
            pass
    print(count)