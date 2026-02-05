t = int(input())

for _ in range(t):
    n=int(input())
    listy=list(map(int,input().split()))
    count=0
    result=0

    for i in listy:
        if i == 1:
            count = 0
        elif i == 0:
            count += 1
            result = max(result, count)

        
    print(result)

   