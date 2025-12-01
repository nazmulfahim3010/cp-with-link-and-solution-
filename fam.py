t = int(input())

for i in range(0,t):
    n=int(input())
    x=input()
    l=list(x)
    r=0
    le=len(l)

    result = le
    while(r<le):
        if l[r] == l[le-1]:
            result -=2
        r+=1
        le-=1
    
    if result<0:
        result=0
    print(result)




        