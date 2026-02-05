t = int(input())

for _ in range(t):
    listy=list(map(int,input().split()))
    count =0

    for j in range(len(listy)):
        if j>0:
            if listy[j]>listy[0]:
                count+=1
    print(count)

        

