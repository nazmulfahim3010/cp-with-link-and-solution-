t = int(input())

for _ in range(t):
    n = int(input())
    listy=[]
    
    for i in range(n):
        x=input()
        for j in range(4):
            if x[j]=="#":
                listy.append(j)
    for i in reversed(listy):
        print(i+1,end=" ")
    
    print()

